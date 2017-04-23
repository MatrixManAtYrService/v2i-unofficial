/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "RoadSegment.h"

static asn_TYPE_member_t asn_MBR_RoadSegment_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RoadSegment, name),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DescriptiveName,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"name"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RoadSegment, id),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RoadSegmentReferenceID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RoadSegment, revision),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MsgCount,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"revision"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RoadSegment, refPoint),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Position3D_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"refPoint"
		},
	{ ATF_POINTER, 2, offsetof(struct RoadSegment, laneWidth),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneWidth,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"laneWidth"
		},
	{ ATF_POINTER, 1, offsetof(struct RoadSegment, speedLimits),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedLimitList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"speedLimits"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RoadSegment, roadLaneSet),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RoadLaneSetList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"roadLaneSet"
		},
	{ ATF_POINTER, 1, offsetof(struct RoadSegment, regional),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RegionalRoadSegment,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"regional"
		},
};
static int asn_MAP_RoadSegment_oms_1[] = { 0, 4, 5, 7 };
static ber_tlv_tag_t asn_DEF_RoadSegment_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RoadSegment_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* name */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* id */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* revision */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* refPoint */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* laneWidth */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* speedLimits */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* roadLaneSet */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* regional */
};
static asn_SEQUENCE_specifics_t asn_SPC_RoadSegment_specs_1 = {
	sizeof(struct RoadSegment),
	offsetof(struct RoadSegment, _asn_ctx),
	asn_MAP_RoadSegment_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_RoadSegment_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	7,	/* Start extensions */
	9	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RoadSegment = {
	"RoadSegment",
	"RoadSegment",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RoadSegment_tags_1,
	sizeof(asn_DEF_RoadSegment_tags_1)
		/sizeof(asn_DEF_RoadSegment_tags_1[0]), /* 1 */
	asn_DEF_RoadSegment_tags_1,	/* Same as above */
	sizeof(asn_DEF_RoadSegment_tags_1)
		/sizeof(asn_DEF_RoadSegment_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RoadSegment_1,
	8,	/* Elements count */
	&asn_SPC_RoadSegment_specs_1	/* Additional specs */
};

