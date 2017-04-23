/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_NodeOffsetPoint_H_
#define	_NodeOffsetPoint_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Node-XY-20b.h"
#include "Node-XY-22b.h"
#include "Node-XY-24b.h"
#include "Node-XY-26b.h"
#include "Node-XY-28b.h"
#include "Node-XY-32b.h"
#include "Node-LLmD-64b.h"
#include "RegionalNodeOffsetPoint.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NodeOffsetPoint_PR {
	NodeOffsetPoint_PR_NOTHING,	/* No components present */
	NodeOffsetPoint_PR_node_XY1,
	NodeOffsetPoint_PR_node_XY2,
	NodeOffsetPoint_PR_node_XY3,
	NodeOffsetPoint_PR_node_XY4,
	NodeOffsetPoint_PR_node_XY5,
	NodeOffsetPoint_PR_node_XY6,
	NodeOffsetPoint_PR_node_LatLon,
	NodeOffsetPoint_PR_node_Regional
} NodeOffsetPoint_PR;

/* NodeOffsetPoint */
typedef struct NodeOffsetPoint {
	NodeOffsetPoint_PR present;
	union NodeOffsetPoint_u {
		Node_XY_20b_t	 node_XY1;
		Node_XY_22b_t	 node_XY2;
		Node_XY_24b_t	 node_XY3;
		Node_XY_26b_t	 node_XY4;
		Node_XY_28b_t	 node_XY5;
		Node_XY_32b_t	 node_XY6;
		Node_LLmD_64b_t	 node_LatLon;
		RegionalNodeOffsetPoint_t	 node_Regional;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NodeOffsetPoint_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeOffsetPoint;

#ifdef __cplusplus
}
#endif

#endif	/* _NodeOffsetPoint_H_ */
#include "asn_internal.h"
