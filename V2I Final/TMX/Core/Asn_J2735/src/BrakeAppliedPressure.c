/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "BrakeAppliedPressure.h"

int
BrakeAppliedPressure_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
BrakeAppliedPressure_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
BrakeAppliedPressure_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	BrakeAppliedPressure_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
BrakeAppliedPressure_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	BrakeAppliedPressure_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
BrakeAppliedPressure_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	BrakeAppliedPressure_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
BrakeAppliedPressure_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	BrakeAppliedPressure_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
BrakeAppliedPressure_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	BrakeAppliedPressure_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
BrakeAppliedPressure_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	BrakeAppliedPressure_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
BrakeAppliedPressure_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	BrakeAppliedPressure_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
BrakeAppliedPressure_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	BrakeAppliedPressure_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_BrakeAppliedPressure_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_BrakeAppliedPressure_value2enum_1[] = {
	{ 0,	11,	"unavailable" },
	{ 1,	11,	"minPressure" },
	{ 2,	7,	"bkLvl-2" },
	{ 3,	7,	"bkLvl-3" },
	{ 4,	7,	"bkLvl-4" },
	{ 5,	7,	"bkLvl-5" },
	{ 6,	7,	"bkLvl-6" },
	{ 7,	7,	"bkLvl-7" },
	{ 8,	7,	"bkLvl-8" },
	{ 9,	7,	"bkLvl-9" },
	{ 10,	8,	"bkLvl-10" },
	{ 11,	8,	"bkLvl-11" },
	{ 12,	8,	"bkLvl-12" },
	{ 13,	8,	"bkLvl-13" },
	{ 14,	8,	"bkLvl-14" },
	{ 15,	11,	"maxPressure" }
};
static unsigned int asn_MAP_BrakeAppliedPressure_enum2value_1[] = {
	10,	/* bkLvl-10(10) */
	11,	/* bkLvl-11(11) */
	12,	/* bkLvl-12(12) */
	13,	/* bkLvl-13(13) */
	14,	/* bkLvl-14(14) */
	2,	/* bkLvl-2(2) */
	3,	/* bkLvl-3(3) */
	4,	/* bkLvl-4(4) */
	5,	/* bkLvl-5(5) */
	6,	/* bkLvl-6(6) */
	7,	/* bkLvl-7(7) */
	8,	/* bkLvl-8(8) */
	9,	/* bkLvl-9(9) */
	15,	/* maxPressure(15) */
	1,	/* minPressure(1) */
	0	/* unavailable(0) */
};
static asn_INTEGER_specifics_t asn_SPC_BrakeAppliedPressure_specs_1 = {
	asn_MAP_BrakeAppliedPressure_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_BrakeAppliedPressure_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_BrakeAppliedPressure_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_BrakeAppliedPressure = {
	"BrakeAppliedPressure",
	"BrakeAppliedPressure",
	BrakeAppliedPressure_free,
	BrakeAppliedPressure_print,
	BrakeAppliedPressure_constraint,
	BrakeAppliedPressure_decode_ber,
	BrakeAppliedPressure_encode_der,
	BrakeAppliedPressure_decode_xer,
	BrakeAppliedPressure_encode_xer,
	BrakeAppliedPressure_decode_uper,
	BrakeAppliedPressure_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_BrakeAppliedPressure_tags_1,
	sizeof(asn_DEF_BrakeAppliedPressure_tags_1)
		/sizeof(asn_DEF_BrakeAppliedPressure_tags_1[0]), /* 1 */
	asn_DEF_BrakeAppliedPressure_tags_1,	/* Same as above */
	sizeof(asn_DEF_BrakeAppliedPressure_tags_1)
		/sizeof(asn_DEF_BrakeAppliedPressure_tags_1[0]), /* 1 */
	&asn_PER_type_BrakeAppliedPressure_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_BrakeAppliedPressure_specs_1	/* Additional specs */
};

