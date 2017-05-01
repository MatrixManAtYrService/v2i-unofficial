/*
 * @file message.hpp
 *
 *  Created on: Apr 7, 2016
 *      Author: Gregory M. Baumgardner
 */

#ifndef TMX_MESSAGES_MESSAGE_HPP_
#define TMX_MESSAGES_MESSAGE_HPP_

#include <algorithm>
#include <cctype>
#include <list>
#include <type_traits>

#include <tmx/attributes/attributes.hpp>
#include <tmx/messages/message_converter.hpp>

namespace tmx
{

/// Message container is a boost::property_tree backed attribute container with string paths and values
typedef battelle::attributes::attribute_container message_container_type;
typedef typename message_container_type::storage_type::tree_type message_tree_type;
typedef typename message_container_type::storage_type::path_type message_path_type;
typedef battelle::attributes::JSON JSON;
typedef battelle::attributes::XML XML;

#ifndef TMX_DEFAULT_MESSAGE_FORMAT
#define TMX_DEFAULT_MESSAGE_FORMAT JSON
#endif

#define EMPTY_MESSAGE_INITIALIZER {}

/**
 * The base TMX message class, which consists only of a boost::property_tree backed
 * attribute container.  The base message contains no attributes, thus you must manipulate
 * the container directly.  The Format specifies the type of serialization to use,
 * i.e. JSON (the default) or XML.
 */
template <typename Format = TMX_DEFAULT_MESSAGE_FORMAT>
class tmx_message {
public:
	/// The format type
	typedef Format format_type;

	/**
	 * Construct an empty message whose contents may be filled in latter by some other means
	 */
	tmx_message(): msg() {}

	/**
	 * Construct a message with a copy of the contents in the given container.
	 * @param contents The filled in message container
	 */
	tmx_message(const message_container_type &contents): msg(contents) {}

	/**
	 * Construct a message from a copy of another message, even of a different
	 * format.  If the formats are different, there may be some translation done
	 * internally on the tree in order to ensure proper grammar.  Namely, the arrays in
	 * XML are constructed different than in JSON.
	 * @param other The message to copy from
	 * @param converter A specific converter to use, or NULL for the default one
	 */
	template <typename OtherFormat>
	tmx_message(const tmx_message<OtherFormat> &other, message_converter *converter = 0):
		msg(other.get_container())
	{
		if (!is_format(other))
		{
			static message_converter default_converter;

			if (!converter)
				converter = &default_converter;

			converter->cleanupTree(msg.get_storage().get_tree());
		}
	}

	/**
	 * Construct a message from the string contents, which should be a serialized version of the property
	 * tree in the correct Format.  An exception may occur if the contents can not be de-serialized.
	 * @param contents The string representation of the contents
	 */
	tmx_message(const std::string &contents): msg()
	{
		set_contents(contents);
	}

	/**
	 * Destructor does nothing
	 */
	virtual ~tmx_message() {}

	/**
	 * Return a reference to the underlying container.  Note that the container will manage changes within the
	 * property tree so that retrieving the attributes will be assured in accuracy.  Therefore, manipulating the tree
	 * directly may produce undesirable results.
	 * @return The container
	 */
	message_container_type get_container() const
	{
		return msg;
	}

	/**
	 * Set the contents of this message with a copy of the contents in the given container.
	 * @param contents The filled in message container
	 */
	void set_contents(const message_container_type &contents)
	{
		message_container_type copy(contents);
		return set_contents(copy.get_storage().get_tree());
	}

	/**
	 * Set the contents of this message from a copy of the given message container.
	 * @param contents The filled in message container
	 */
	void set_contents(const message_tree_type &contents)
	{
		// Need a copy of the tree so not to swap out the existing contents coming in
		message_tree_type copy(contents);
		message_tree_type &msgTree = this->as_tree().get();
		msgTree.swap(copy);
	}

	/**
	 * Set the message contents from the string contents, which should be a serialized version of the property
	 * tree in the correct Format.  An exception may occur if the contents can not be de-serialized.
	 * @param contents The string representation of the contents
	 */
	void set_contents(const std::string &contents)
	{
		std::stringstream ss;
		ss << contents;
		msg.load<Format>(ss);
	}

	/**
	 * Get data from the container in a certain type.
	 * @param path The path to the data
	 * @param default_value The default value to use if the data does not exist
	 * @return The value of the data at the path or the default value
	 */
	template <typename DataType>
	DataType get(message_path_type path, DataType default_value)
	{
		return this->as_tree().get().get<DataType>(path, default_value);
	}

	template <typename NewMsgFormat = Format>
	std::list<tmx_message<NewMsgFormat> > sub_messages(message_path_type path)
	{
		typedef typename std::list<tmx_message<NewMsgFormat> > collection;
		collection messages;
		enumerate_path<NewMsgFormat>(this->as_tree().get(), path, messages);
		return messages;
	}

	/**
	 * Clear the data from the container.
	 */
	virtual void clear()
	{
		this->as_tree().get().clear();
	}

	/**
	 * @return True if the container is empty, false otherwise
	 */
	virtual bool is_empty()
	{
		return this->as_tree().get().empty();
	}

	/**
	 * @return A string representation of the message contents
	 */
	std::string to_string()
	{
		std::stringstream ss;
		msg.save<Format>(ss);
		return ss.str();
	}

	/**
	 * @return The name of the format used
	 */
	std::string format() const
	{
		return format_type::name();
	}

	/**
	 * Check the format against specific name
	 * @param type The format name to check
	 * @return True if this message is of the specified format, false otherwise
	 */
	bool is_format(std::string type)
	{
		std::transform(type.begin(), type.end(), type.begin(), ::toupper);
		return (format() == type);
	}

	/**
	 * Check the format against a specific other type
	 * @return True if this message is of the specified format, false otherwise
	 */
	template <typename OtherFormat>
	bool is_format()
	{
		return std::is_same<OtherFormat, Format>::value;
	}

	/**
	 * Check the format against the format of another message
	 * @param tmx The other message
	 * @return True if this message is of the same format as the other message, false otherwise
	 */
	template <typename OtherFormat>
	bool is_format(const tmx_message<OtherFormat> &tmx)
	{
		return is_format<OtherFormat>();
	}

	/**
	 * Assignment operator will copy the contents of the other message to this message.  Note that the
	 * messages must be in the same Format.
	 * @param other The message to copy from
	 * @return This message
	 */
	tmx_message<Format> &operator=(const tmx_message<Format> &other)
	{
		this->set_contents(other.get_container());
		return (*this);
	}

	/**
	 * Left shift operator used to write the string version of the contents to an
	 * output stream
	 * @param out The output stream to write to
	 * @param message The message to write
	 * @return The output stream
	 */
	friend std::ostream &operator<<(std::ostream &out, const tmx_message<Format> &message)
	{
		message.get_container().template save<Format>(out);
		return out;
	}

	/**
	 * Right shift operator user to extract the message from an input stream to the
	 * given message.  Like the assignment operator, this requires the Formats are
	 * the same.
	 * @param out The input stream to read from
	 * @param message The message to load
	 * @return The input stream
	 */
	friend std::istream &operator>>(std::istream &in, tmx_message<Format> &message)
	{
		message_container_type container;
		container.template load<Format>(in);
		message.set_contents(container);
		return in;
	}

protected:
	/// The message container
	message_container_type msg;

	// Protected utility functions

	/**
	 * Return the sub-tree in the container for the given path, if it exists.  Note that this
	 * is a protected member because outside access to the underlying tree is discouraged.
	 * @param container The container with the tree
	 * @param path The path to look for, or the root if no path is given
	 * @return An optional result, which would contain the sub-tree for the path if it exists
	 */
	boost::optional<message_tree_type &>
		as_tree(const message_container_type &container, const message_path_type &path = "")
	{
		message_tree_type &tree = const_cast<message_container_type &>
			(container).get_storage().get_tree();
		if (path.empty())
			return boost::optional<message_tree_type &>(tree);
		else
			return tree.get_child_optional(path);
	}

	/**
	 * Return the sub-tree for this message for the given path
	 * @see as_tree(const message_container_type&, const message_path_type &)
	 * @param path The path to look for, or the root if no path is given
	 * @return An optional result, which would contain the sub-tree for the path if it exists
	 */
	boost::optional<message_tree_type &>
		as_tree(const message_path_type &path = "")
	{
		return as_tree(this->msg, path);
	}

	/**
	 * Helper function that traverses the tree based on the given path, and creates a new message for each
	 * sub-tree found at that path, and adds to the given collection.  This code was adapted from:
	 * http://stackoverflow.com/questions/29198853/boost-propertytree-subpath-processing/29199812#29199812
	 * @param pt The base tree to search
	 * @param path The path to search
	 * @param out The collection to update
	 * @return The iterator
	 */
	template <typename NewMsgFormat, typename CollectionType>
	CollectionType &enumerate_path(message_tree_type const& pt, message_path_type path, CollectionType &out) {
	    if (path.empty())
	        return out;

	    if (path.single()) {
	    	tmx_message<NewMsgFormat> m;
	    	const message_tree_type &subTree = pt.get_child(path);
	        m.set_contents(subTree);
	        out.push_back(m);
	    } else {
	        auto head = path.reduce();

	        for (auto& child : pt)
	            if (child.first == head)
	                out = enumerate_path<NewMsgFormat>(child.second, path, out);
	    }

	    return out;
	}
};

/// A message in JSON format
typedef tmx_message<JSON> json_message;
/// A message in XML format
typedef tmx_message<XML> xml_message;
/// A message in the default format
typedef tmx_message<TMX_DEFAULT_MESSAGE_FORMAT> message;

} /* End namespace tmx */

#endif /* TMX_MESSAGES_MESSAGE_HPP_ */
