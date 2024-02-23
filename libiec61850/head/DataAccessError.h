/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_DataAccessError_H_
#define	_DataAccessError_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DataAccessError {
	DataAccessError_objectinvalidated	= 0,
	DataAccessError_hardwarefault	= 1,
	DataAccessError_temporarilyunavailable	= 2,
	DataAccessError_objectaccessdenied	= 3,
	DataAccessError_objectundefined	= 4,
	DataAccessError_invalidaddress	= 5,
	DataAccessError_typeunsupported	= 6,
	DataAccessError_typeinconsistent	= 7,
	DataAccessError_objectattributeinconsistent	= 8,
	DataAccessError_objectaccessunsupported	= 9,
	DataAccessError_objectnonexistent	= 10,
	DataAccessError_objectvalueinvalid	= 11
} e_DataAccessError;

/* DataAccessError */
typedef INTEGER_t	 DataAccessError_t;

/* Implementation */
LIB61850_INTERNAL extern asn_TYPE_descriptor_t asn_DEF_DataAccessError;
LIB61850_INTERNAL asn_struct_free_f DataAccessError_free;
LIB61850_INTERNAL asn_struct_print_f DataAccessError_print;
LIB61850_INTERNAL asn_constr_check_f DataAccessError_constraint;
LIB61850_INTERNAL ber_type_decoder_f DataAccessError_decode_ber;
LIB61850_INTERNAL der_type_encoder_f DataAccessError_encode_der;
LIB61850_INTERNAL xer_type_decoder_f DataAccessError_decode_xer;
LIB61850_INTERNAL xer_type_encoder_f DataAccessError_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _DataAccessError_H_ */
