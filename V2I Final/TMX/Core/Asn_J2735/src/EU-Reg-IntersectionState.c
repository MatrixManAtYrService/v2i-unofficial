/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EU"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "EU-Reg-IntersectionState.h"

static asn_TYPE_member_t asn_MBR_EU_Reg_IntersectionState_1[] = {
	{ ATF_POINTER, 1, offsetof(struct EU_Reg_IntersectionState, activePrioritizations),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrioritizationResponseList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"activePrioritizations"
		},
};
static int asn_MAP_EU_Reg_IntersectionState_oms_1[] = { 0 };
static ber_tlv_tag_t asn_DEF_EU_Reg_IntersectionState_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_EU_Reg_IntersectionState_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* activePrioritizations */
};
static asn_SEQUENCE_specifics_t asn_SPC_EU_Reg_IntersectionState_specs_1 = {
	sizeof(struct EU_Reg_IntersectionState),
	offsetof(struct EU_Reg_IntersectionState, _asn_ctx),
	asn_MAP_EU_Reg_IntersectionState_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_EU_Reg_IntersectionState_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	0,	/* Start extensions */
	2	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_EU_Reg_IntersectionState = {
	"EU-Reg-IntersectionState",
	"EU-Reg-IntersectionState",
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
	asn_DEF_EU_Reg_IntersectionState_tags_1,
	sizeof(asn_DEF_EU_Reg_IntersectionState_tags_1)
		/sizeof(asn_DEF_EU_Reg_IntersectionState_tags_1[0]), /* 1 */
	asn_DEF_EU_Reg_IntersectionState_tags_1,	/* Same as above */
	sizeof(asn_DEF_EU_Reg_IntersectionState_tags_1)
		/sizeof(asn_DEF_EU_Reg_IntersectionState_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_EU_Reg_IntersectionState_1,
	1,	/* Elements count */
	&asn_SPC_EU_Reg_IntersectionState_specs_1	/* Additional specs */
};

