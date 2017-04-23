/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EU"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_EU_Reg_IntersectionState_H_
#define	_EU_Reg_IntersectionState_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PrioritizationResponseList;

/* EU-Reg-IntersectionState */
typedef struct EU_Reg_IntersectionState {
	struct PrioritizationResponseList	*activePrioritizations	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EU_Reg_IntersectionState_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EU_Reg_IntersectionState;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PrioritizationResponseList.h"

#endif	/* _EU_Reg_IntersectionState_H_ */
#include "asn_internal.h"