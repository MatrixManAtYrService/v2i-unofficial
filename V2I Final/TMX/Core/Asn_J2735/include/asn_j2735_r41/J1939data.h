/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_J1939data_H_
#define	_J1939data_H_


#include "asn_application.h"

/* Including external dependencies */
#include "TrailerWeight.h"
#include "CargoWeight.h"
#include "SteeringAxleTemperature.h"
#include "DriveAxleLocation.h"
#include "DriveAxleLiftAirPressure.h"
#include "DriveAxleTemperature.h"
#include "DriveAxleLubePressure.h"
#include "SteeringAxleLubePressure.h"
#include "asn_SEQUENCE_OF.h"
#include "TireLocation.h"
#include "TirePressure.h"
#include "TireTemp.h"
#include "WheelSensorStatus.h"
#include "WheelEndElectFault.h"
#include "TireLeakageRate.h"
#include "TirePressureThresholdDetection.h"
#include "constr_SEQUENCE.h"
#include "constr_SEQUENCE_OF.h"
#include "AxleLocation.h"
#include "AxleWeight.h"

#ifdef __cplusplus
extern "C" {
#endif

/* J1939data */
typedef struct J1939data {
	struct J1939data__tires {
		A_SEQUENCE_OF(struct J1939data__tires__Member {
			TireLocation_t	*location	/* OPTIONAL */;
			TirePressure_t	*pressure	/* OPTIONAL */;
			TireTemp_t	*temp	/* OPTIONAL */;
			WheelSensorStatus_t	*wheelSensorStatus	/* OPTIONAL */;
			WheelEndElectFault_t	*wheelEndElectFault	/* OPTIONAL */;
			TireLeakageRate_t	*leakageRate	/* OPTIONAL */;
			TirePressureThresholdDetection_t	*detection	/* OPTIONAL */;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} ) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tires;
	struct J1939data__axle {
		A_SEQUENCE_OF(struct J1939data__axle__Member {
			AxleLocation_t	*location	/* OPTIONAL */;
			AxleWeight_t	*weight	/* OPTIONAL */;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} ) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *axle;
	TrailerWeight_t	*trailerWeight	/* OPTIONAL */;
	CargoWeight_t	*cargoWeight	/* OPTIONAL */;
	SteeringAxleTemperature_t	*steeringAxleTemperature	/* OPTIONAL */;
	DriveAxleLocation_t	*driveAxleLocation	/* OPTIONAL */;
	DriveAxleLiftAirPressure_t	*driveAxleLiftAirPressure	/* OPTIONAL */;
	DriveAxleTemperature_t	*driveAxleTemperature	/* OPTIONAL */;
	DriveAxleLubePressure_t	*driveAxleLubePressure	/* OPTIONAL */;
	SteeringAxleLubePressure_t	*steeringAxleLubePressure	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} J1939data_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_J1939data;

#ifdef __cplusplus
}
#endif

#endif	/* _J1939data_H_ */
#include "asn_internal.h"
