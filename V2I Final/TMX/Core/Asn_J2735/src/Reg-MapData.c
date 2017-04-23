/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "REGION"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "Reg-MapData.h"

static ber_tlv_tag_t asn_DEF_Reg_MapData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_Reg_MapData_specs_1 = {
	sizeof(struct Reg_MapData),
	offsetof(struct Reg_MapData, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Reg_MapData = {
	"Reg-MapData",
	"Reg-MapData",
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
	asn_DEF_Reg_MapData_tags_1,
	sizeof(asn_DEF_Reg_MapData_tags_1)
		/sizeof(asn_DEF_Reg_MapData_tags_1[0]), /* 1 */
	asn_DEF_Reg_MapData_tags_1,	/* Same as above */
	sizeof(asn_DEF_Reg_MapData_tags_1)
		/sizeof(asn_DEF_Reg_MapData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_Reg_MapData_specs_1	/* Additional specs */
};

