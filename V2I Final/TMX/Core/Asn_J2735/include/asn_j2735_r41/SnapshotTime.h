/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_SnapshotTime_H_
#define	_SnapshotTime_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SnapshotTime */
typedef struct SnapshotTime {
	long	 t1;
	long	 s1;
	long	 t2;
	long	 s2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SnapshotTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SnapshotTime;

#ifdef __cplusplus
}
#endif

#endif	/* _SnapshotTime_H_ */
#include "asn_internal.h"
