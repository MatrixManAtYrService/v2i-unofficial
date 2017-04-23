/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_NodeAttributeSet_H_
#define	_NodeAttributeSet_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Offset-B10.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NodeAttributeList;
struct SegmentAttributeList;
struct LaneDataAttributeList;
struct RegionalNodeAttributeList;

/* NodeAttributeSet */
typedef struct NodeAttributeSet {
	struct NodeAttributeList	*localNode	/* OPTIONAL */;
	struct SegmentAttributeList	*disabled	/* OPTIONAL */;
	struct SegmentAttributeList	*enabled	/* OPTIONAL */;
	struct LaneDataAttributeList	*data	/* OPTIONAL */;
	struct RegionalNodeAttributeList	*regional	/* OPTIONAL */;
	Offset_B10_t	*dWidth	/* OPTIONAL */;
	Offset_B10_t	*dElevation	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NodeAttributeSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeAttributeSet;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NodeAttributeList.h"
#include "SegmentAttributeList.h"
#include "LaneDataAttributeList.h"
#include "RegionalNodeAttributeList.h"

#endif	/* _NodeAttributeSet_H_ */
#include "asn_internal.h"
