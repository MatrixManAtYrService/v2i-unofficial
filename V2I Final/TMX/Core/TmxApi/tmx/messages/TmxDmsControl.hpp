/*
 * TmxError.hpp
 *
 *  Created on: Apr 26, 2016
 *      Author: ivp
 */

#ifndef TMX_TMXDMSCONTROL_HPP_
#define TMX_TMXDMSCONTROL_HPP_

#include <tmx/messages/routeable_message.hpp>
#include "IvpDmsControlMsg.h"

namespace tmx {
namespace messages {

class TmxDmsControlMessage: public tmx::routeable_message
{
public:
	TmxDmsControlMessage(): routeable_message(),
		init_payload_attribute(action, 0)
	{
		this->set_type(IVPMSG_TYPE_DMSCONT);
		this->set_subtype("MSGID");
		this->set_encoding(IVP_ENCODING_STRING);
	}

	TmxDmsControlMessage(const int action): TmxDmsControlMessage()
	{
		this->set_action(action);
	}

	payload_attribute(this->msg, int, action, );
};

} /* End namespace messages */
} /* End namespace tmx */


#endif /* TMX_TMXDMSCONTROL_HPP_ */
