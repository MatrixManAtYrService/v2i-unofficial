/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../downloads/DSRC_R36_Source.ASN"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_TirePressureThresholdDetection_H_
#define	_TirePressureThresholdDetection_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TirePressureThresholdDetection {
	TirePressureThresholdDetection_noData	= 0,
	TirePressureThresholdDetection_overPressure	= 1,
	TirePressureThresholdDetection_noWarningPressure	= 2,
	TirePressureThresholdDetection_underPressure	= 3,
	TirePressureThresholdDetection_extremeUnderPressure	= 4,
	TirePressureThresholdDetection_undefined	= 5,
	TirePressureThresholdDetection_errorIndicator	= 6,
	TirePressureThresholdDetection_notAvailable	= 7
	/*
	 * Enumeration is extensible
	 */
} e_TirePressureThresholdDetection;

/* TirePressureThresholdDetection */
typedef ENUMERATED_t	 TirePressureThresholdDetection_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TirePressureThresholdDetection;
asn_struct_free_f TirePressureThresholdDetection_free;
asn_struct_print_f TirePressureThresholdDetection_print;
asn_constr_check_f TirePressureThresholdDetection_constraint;
ber_type_decoder_f TirePressureThresholdDetection_decode_ber;
der_type_encoder_f TirePressureThresholdDetection_encode_der;
xer_type_decoder_f TirePressureThresholdDetection_decode_xer;
xer_type_encoder_f TirePressureThresholdDetection_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _TirePressureThresholdDetection_H_ */
