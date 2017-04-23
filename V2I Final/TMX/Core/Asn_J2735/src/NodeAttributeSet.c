/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "NodeAttributeSet.h"

static asn_TYPE_member_t asn_MBR_NodeAttributeSet_1[] = {
	{ ATF_POINTER, 7, offsetof(struct NodeAttributeSet, localNode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NodeAttributeList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"localNode"
		},
	{ ATF_POINTER, 6, offsetof(struct NodeAttributeSet, disabled),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SegmentAttributeList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"disabled"
		},
	{ ATF_POINTER, 5, offsetof(struct NodeAttributeSet, enabled),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SegmentAttributeList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"enabled"
		},
	{ ATF_POINTER, 4, offsetof(struct NodeAttributeSet, data),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneDataAttributeList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"data"
		},
	{ ATF_POINTER, 3, offsetof(struct NodeAttributeSet, regional),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RegionalNodeAttributeList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"regional"
		},
	{ ATF_POINTER, 2, offsetof(struct NodeAttributeSet, dWidth),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Offset_B10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dWidth"
		},
	{ ATF_POINTER, 1, offsetof(struct NodeAttributeSet, dElevation),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Offset_B10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dElevation"
		},
};
static int asn_MAP_NodeAttributeSet_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static ber_tlv_tag_t asn_DEF_NodeAttributeSet_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_NodeAttributeSet_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* localNode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* disabled */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* enabled */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* data */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* regional */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dWidth */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* dElevation */
};
static asn_SEQUENCE_specifics_t asn_SPC_NodeAttributeSet_specs_1 = {
	sizeof(struct NodeAttributeSet),
	offsetof(struct NodeAttributeSet, _asn_ctx),
	asn_MAP_NodeAttributeSet_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_NodeAttributeSet_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	6,	/* Start extensions */
	8	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NodeAttributeSet = {
	"NodeAttributeSet",
	"NodeAttributeSet",
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
	asn_DEF_NodeAttributeSet_tags_1,
	sizeof(asn_DEF_NodeAttributeSet_tags_1)
		/sizeof(asn_DEF_NodeAttributeSet_tags_1[0]), /* 1 */
	asn_DEF_NodeAttributeSet_tags_1,	/* Same as above */
	sizeof(asn_DEF_NodeAttributeSet_tags_1)
		/sizeof(asn_DEF_NodeAttributeSet_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_NodeAttributeSet_1,
	7,	/* Elements count */
	&asn_SPC_NodeAttributeSet_specs_1	/* Additional specs */
};

