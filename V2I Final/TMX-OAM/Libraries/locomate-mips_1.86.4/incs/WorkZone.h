/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../downloads/DSRC_R36_Source.ASN"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_WorkZone_H_
#define	_WorkZone_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "ITIScodes.h"
#include <IA5String.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum item_PR_wz {
	item_PR_NOTHING_wz,	/* No components present */
	item_PR_itis_wz,
	item_PR_text_wz
} item_PR_wz;

/* WorkZone */
typedef struct WorkZone {
	A_SEQUENCE_OF(struct WorkZone__Member {
		struct item_wz {
			item_PR_wz present;
			union item_u_wz {
				ITIScodes_t	 itis;
				IA5String_t	 text;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} item;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WorkZone_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WorkZone;

#ifdef __cplusplus
}
#endif

#endif	/* _WorkZone_H_ */