/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_RoadSegment_H_
#define	_RoadSegment_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DescriptiveName.h"
#include "RoadSegmentReferenceID.h"
#include "MsgCount.h"
#include "Position3D-2.h"
#include "LaneWidth.h"
#include "RoadLaneSetList.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SpeedLimitList;
struct Reg_RoadSegment;

/* RoadSegment */
typedef struct RoadSegment {
	DescriptiveName_t	*name	/* OPTIONAL */;
	RoadSegmentReferenceID_t	 id;
	MsgCount_t	 revision;
	Position3D_2_t	 refPoint;
	LaneWidth_t	*laneWidth	/* OPTIONAL */;
	struct SpeedLimitList	*speedLimits	/* OPTIONAL */;
	RoadLaneSetList_t	 roadLaneSet;
	struct Reg_RoadSegment	*regional	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RoadSegment_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RoadSegment;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SpeedLimitList.h"
#include "RegionalRoadSegment.h"

#endif	/* _RoadSegment_H_ */
#include "asn_internal.h"
