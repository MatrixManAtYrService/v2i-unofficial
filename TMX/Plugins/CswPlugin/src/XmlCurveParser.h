#ifndef XML_CURVE_PARSER_H
#define XML_CURVE_PARSER_H

#include <xercesc/dom/DOM.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMDocumentType.hpp>
#include <xercesc/dom/DOMElement.hpp>
#include <xercesc/dom/DOMImplementation.hpp>
#include <xercesc/dom/DOMImplementationLS.hpp>
#include <xercesc/dom/DOMNodeIterator.hpp>
#include <xercesc/dom/DOMNodeList.hpp>
#include <xercesc/dom/DOMText.hpp>

#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/util/XMLUni.hpp>

#include <string>
#include <stdexcept>

#include "DsrcBuilder.h"

// Error codes

enum {
	ERROR_ARGS = 1, ERROR_XERCES_INIT, ERROR_PARSE, ERROR_EMPTY_DOCUMENT
};

class XmlCurveParser {
public:
	XmlCurveParser();
	~XmlCurveParser();

	bool ReadCurveFile(std::string& filePath, TravelerInformation *tim);

	unsigned int SpeedLimit;

private:
	void ReadRoot(xercesc::DOMElement* root, TravelerInformation *tim);
	void ReadApproaches(xercesc::DOMElement* approachesElement, TravelerInformation *tim);
	void ReadApproach(xercesc::DOMElement* approachElement, TravelerInformation *tim);
	TiDataFrame* ReadRegions(xercesc::DOMElement* regionsElement);
	ValidRegion* ReadRegion(xercesc::DOMElement* geometryElement);
	Position3D* ReadReferencePoint(xercesc::DOMElement* referencePointElement);
	void ReadNodes(xercesc::DOMElement* nodesElement, NodeList_t *nodeList);
	void ReadNode(xercesc::DOMElement* nodeElement, NodeList_t *nodeList);

	xercesc::XercesDOMParser *_parser;
};

#endif
