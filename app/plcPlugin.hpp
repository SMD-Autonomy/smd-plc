

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef plcPlugin_493952776_h
#define plcPlugin_493952776_h

#include "plc.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct LampControlCustom
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct LampControlCustom)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* LampControlCustom must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct LampControlCustom.
*/
typedef class LampControlCustom LampControlCustomKeyHolder;

#define LampControlCustomPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define LampControlCustomPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define LampControlCustomPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define LampControlCustomPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define LampControlCustomPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define LampControlCustomPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define LampControlCustomPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern LampControlCustom*
LampControlCustomPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern LampControlCustom*
LampControlCustomPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern LampControlCustom*
LampControlCustomPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
LampControlCustomPluginSupport_copy_data(
    LampControlCustom *out,
    const LampControlCustom *in);

NDDSUSERDllExport extern void 
LampControlCustomPluginSupport_destroy_data_w_params(
    LampControlCustom *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
LampControlCustomPluginSupport_destroy_data_ex(
    LampControlCustom *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
LampControlCustomPluginSupport_destroy_data(
    LampControlCustom *sample);

NDDSUSERDllExport extern void 
LampControlCustomPluginSupport_print_data(
    const LampControlCustom *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern LampControlCustom*
LampControlCustomPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern LampControlCustom*
LampControlCustomPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
LampControlCustomPluginSupport_destroy_key_ex(
    LampControlCustomKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
LampControlCustomPluginSupport_destroy_key(
    LampControlCustomKeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
LampControlCustomPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
LampControlCustomPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
LampControlCustomPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
LampControlCustomPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
LampControlCustomPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    LampControlCustom *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
LampControlCustomPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    LampControlCustom *out,
    const LampControlCustom *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
LampControlCustomPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const LampControlCustom *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
LampControlCustomPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    LampControlCustom **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
LampControlCustomPlugin_deserialize_from_cdr_buffer(
    LampControlCustom *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
LampControlCustomPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
LampControlCustomPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
LampControlCustomPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
LampControlCustomPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
LampControlCustomPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    LampControlCustom ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LampControlCustomPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    LampControlCustomKeyHolder *key, 
    const LampControlCustom *instance);

NDDSUSERDllExport extern RTIBool 
LampControlCustomPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    LampControlCustom *instance, 
    const LampControlCustomKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
LampControlCustomPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *cdrStream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
LampControlCustomPlugin_new(void);

NDDSUSERDllExport extern void
LampControlCustomPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct CameraControlCustom
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct CameraControlCustom)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* CameraControlCustom must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct CameraControlCustom.
*/
typedef class CameraControlCustom CameraControlCustomKeyHolder;

#define CameraControlCustomPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define CameraControlCustomPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CameraControlCustomPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define CameraControlCustomPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define CameraControlCustomPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define CameraControlCustomPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CameraControlCustomPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CameraControlCustom*
CameraControlCustomPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern CameraControlCustom*
CameraControlCustomPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CameraControlCustom*
CameraControlCustomPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CameraControlCustomPluginSupport_copy_data(
    CameraControlCustom *out,
    const CameraControlCustom *in);

NDDSUSERDllExport extern void 
CameraControlCustomPluginSupport_destroy_data_w_params(
    CameraControlCustom *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
CameraControlCustomPluginSupport_destroy_data_ex(
    CameraControlCustom *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CameraControlCustomPluginSupport_destroy_data(
    CameraControlCustom *sample);

NDDSUSERDllExport extern void 
CameraControlCustomPluginSupport_print_data(
    const CameraControlCustom *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern CameraControlCustom*
CameraControlCustomPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CameraControlCustom*
CameraControlCustomPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
CameraControlCustomPluginSupport_destroy_key_ex(
    CameraControlCustomKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CameraControlCustomPluginSupport_destroy_key(
    CameraControlCustomKeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CameraControlCustomPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CameraControlCustomPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
CameraControlCustomPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CameraControlCustomPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
CameraControlCustomPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    CameraControlCustom *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
CameraControlCustomPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CameraControlCustom *out,
    const CameraControlCustom *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
CameraControlCustomPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const CameraControlCustom *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
CameraControlCustomPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    CameraControlCustom **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
CameraControlCustomPlugin_deserialize_from_cdr_buffer(
    CameraControlCustom *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
CameraControlCustomPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
CameraControlCustomPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CameraControlCustomPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CameraControlCustomPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CameraControlCustomPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    CameraControlCustom ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CameraControlCustomPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CameraControlCustomKeyHolder *key, 
    const CameraControlCustom *instance);

NDDSUSERDllExport extern RTIBool 
CameraControlCustomPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    CameraControlCustom *instance, 
    const CameraControlCustomKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
CameraControlCustomPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *cdrStream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CameraControlCustomPlugin_new(void);

NDDSUSERDllExport extern void
CameraControlCustomPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct PanAndTiltControlCustom
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct PanAndTiltControlCustom)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* PanAndTiltControlCustom must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct PanAndTiltControlCustom.
*/
typedef class PanAndTiltControlCustom PanAndTiltControlCustomKeyHolder;

#define PanAndTiltControlCustomPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define PanAndTiltControlCustomPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define PanAndTiltControlCustomPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define PanAndTiltControlCustomPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define PanAndTiltControlCustomPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define PanAndTiltControlCustomPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define PanAndTiltControlCustomPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PanAndTiltControlCustom*
PanAndTiltControlCustomPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern PanAndTiltControlCustom*
PanAndTiltControlCustomPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PanAndTiltControlCustom*
PanAndTiltControlCustomPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
PanAndTiltControlCustomPluginSupport_copy_data(
    PanAndTiltControlCustom *out,
    const PanAndTiltControlCustom *in);

NDDSUSERDllExport extern void 
PanAndTiltControlCustomPluginSupport_destroy_data_w_params(
    PanAndTiltControlCustom *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
PanAndTiltControlCustomPluginSupport_destroy_data_ex(
    PanAndTiltControlCustom *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PanAndTiltControlCustomPluginSupport_destroy_data(
    PanAndTiltControlCustom *sample);

NDDSUSERDllExport extern void 
PanAndTiltControlCustomPluginSupport_print_data(
    const PanAndTiltControlCustom *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern PanAndTiltControlCustom*
PanAndTiltControlCustomPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PanAndTiltControlCustom*
PanAndTiltControlCustomPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
PanAndTiltControlCustomPluginSupport_destroy_key_ex(
    PanAndTiltControlCustomKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PanAndTiltControlCustomPluginSupport_destroy_key(
    PanAndTiltControlCustomKeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
PanAndTiltControlCustomPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
PanAndTiltControlCustomPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
PanAndTiltControlCustomPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
PanAndTiltControlCustomPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
PanAndTiltControlCustomPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltControlCustom *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
PanAndTiltControlCustomPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltControlCustom *out,
    const PanAndTiltControlCustom *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
PanAndTiltControlCustomPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const PanAndTiltControlCustom *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
PanAndTiltControlCustomPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltControlCustom **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
PanAndTiltControlCustomPlugin_deserialize_from_cdr_buffer(
    PanAndTiltControlCustom *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
PanAndTiltControlCustomPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
PanAndTiltControlCustomPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
PanAndTiltControlCustomPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PanAndTiltControlCustomPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
PanAndTiltControlCustomPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltControlCustom ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PanAndTiltControlCustomPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltControlCustomKeyHolder *key, 
    const PanAndTiltControlCustom *instance);

NDDSUSERDllExport extern RTIBool 
PanAndTiltControlCustomPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltControlCustom *instance, 
    const PanAndTiltControlCustomKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
PanAndTiltControlCustomPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *cdrStream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
PanAndTiltControlCustomPlugin_new(void);

NDDSUSERDllExport extern void
PanAndTiltControlCustomPlugin_delete(struct PRESTypePlugin *);

#define LampControlPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define LampControlPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define LampControlPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define LampControlPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define LampControlPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern LampControl*
LampControlPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern LampControl*
LampControlPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern LampControl*
LampControlPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
LampControlPluginSupport_copy_data(
    LampControl *out,
    const LampControl *in);

NDDSUSERDllExport extern void 
LampControlPluginSupport_destroy_data_w_params(
    LampControl *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
LampControlPluginSupport_destroy_data_ex(
    LampControl *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
LampControlPluginSupport_destroy_data(
    LampControl *sample);

NDDSUSERDllExport extern void 
LampControlPluginSupport_print_data(
    const LampControl *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
LampControlPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
LampControlPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
LampControlPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
LampControlPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
LampControlPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    LampControl *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
LampControlPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    LampControl *out,
    const LampControl *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
LampControlPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const LampControl *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
LampControlPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    LampControl **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
LampControlPlugin_deserialize_from_cdr_buffer(
    LampControl *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
LampControlPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
LampControlPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
LampControlPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
LampControlPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
LampControlPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    LampControl ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
LampControlPlugin_new(void);

NDDSUSERDllExport extern void
LampControlPlugin_delete(struct PRESTypePlugin *);

#define CameraControlPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define CameraControlPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CameraControlPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define CameraControlPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CameraControlPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CameraControl*
CameraControlPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern CameraControl*
CameraControlPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CameraControl*
CameraControlPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CameraControlPluginSupport_copy_data(
    CameraControl *out,
    const CameraControl *in);

NDDSUSERDllExport extern void 
CameraControlPluginSupport_destroy_data_w_params(
    CameraControl *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
CameraControlPluginSupport_destroy_data_ex(
    CameraControl *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CameraControlPluginSupport_destroy_data(
    CameraControl *sample);

NDDSUSERDllExport extern void 
CameraControlPluginSupport_print_data(
    const CameraControl *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CameraControlPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CameraControlPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
CameraControlPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CameraControlPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
CameraControlPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    CameraControl *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
CameraControlPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CameraControl *out,
    const CameraControl *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
CameraControlPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const CameraControl *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
CameraControlPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    CameraControl **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
CameraControlPlugin_deserialize_from_cdr_buffer(
    CameraControl *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
CameraControlPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
CameraControlPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CameraControlPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CameraControlPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CameraControlPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    CameraControl ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CameraControlPlugin_new(void);

NDDSUSERDllExport extern void
CameraControlPlugin_delete(struct PRESTypePlugin *);

#define PanAndTiltControlPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define PanAndTiltControlPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define PanAndTiltControlPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define PanAndTiltControlPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define PanAndTiltControlPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PanAndTiltControl*
PanAndTiltControlPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern PanAndTiltControl*
PanAndTiltControlPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PanAndTiltControl*
PanAndTiltControlPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
PanAndTiltControlPluginSupport_copy_data(
    PanAndTiltControl *out,
    const PanAndTiltControl *in);

NDDSUSERDllExport extern void 
PanAndTiltControlPluginSupport_destroy_data_w_params(
    PanAndTiltControl *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
PanAndTiltControlPluginSupport_destroy_data_ex(
    PanAndTiltControl *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PanAndTiltControlPluginSupport_destroy_data(
    PanAndTiltControl *sample);

NDDSUSERDllExport extern void 
PanAndTiltControlPluginSupport_print_data(
    const PanAndTiltControl *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
PanAndTiltControlPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
PanAndTiltControlPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
PanAndTiltControlPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
PanAndTiltControlPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
PanAndTiltControlPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltControl *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
PanAndTiltControlPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltControl *out,
    const PanAndTiltControl *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
PanAndTiltControlPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const PanAndTiltControl *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
PanAndTiltControlPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltControl **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
PanAndTiltControlPlugin_deserialize_from_cdr_buffer(
    PanAndTiltControl *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
PanAndTiltControlPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
PanAndTiltControlPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
PanAndTiltControlPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PanAndTiltControlPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
PanAndTiltControlPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltControl ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
PanAndTiltControlPlugin_new(void);

NDDSUSERDllExport extern void
PanAndTiltControlPlugin_delete(struct PRESTypePlugin *);

#define PanAndTiltPositionSubscriberPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define PanAndTiltPositionSubscriberPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define PanAndTiltPositionSubscriberPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define PanAndTiltPositionSubscriberPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define PanAndTiltPositionSubscriberPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PanAndTiltPositionSubscriber*
PanAndTiltPositionSubscriberPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern PanAndTiltPositionSubscriber*
PanAndTiltPositionSubscriberPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PanAndTiltPositionSubscriber*
PanAndTiltPositionSubscriberPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
PanAndTiltPositionSubscriberPluginSupport_copy_data(
    PanAndTiltPositionSubscriber *out,
    const PanAndTiltPositionSubscriber *in);

NDDSUSERDllExport extern void 
PanAndTiltPositionSubscriberPluginSupport_destroy_data_w_params(
    PanAndTiltPositionSubscriber *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
PanAndTiltPositionSubscriberPluginSupport_destroy_data_ex(
    PanAndTiltPositionSubscriber *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PanAndTiltPositionSubscriberPluginSupport_destroy_data(
    PanAndTiltPositionSubscriber *sample);

NDDSUSERDllExport extern void 
PanAndTiltPositionSubscriberPluginSupport_print_data(
    const PanAndTiltPositionSubscriber *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
PanAndTiltPositionSubscriberPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
PanAndTiltPositionSubscriberPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
PanAndTiltPositionSubscriberPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
PanAndTiltPositionSubscriberPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
PanAndTiltPositionSubscriberPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltPositionSubscriber *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
PanAndTiltPositionSubscriberPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltPositionSubscriber *out,
    const PanAndTiltPositionSubscriber *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
PanAndTiltPositionSubscriberPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const PanAndTiltPositionSubscriber *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
PanAndTiltPositionSubscriberPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltPositionSubscriber **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
PanAndTiltPositionSubscriberPlugin_deserialize_from_cdr_buffer(
    PanAndTiltPositionSubscriber *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
PanAndTiltPositionSubscriberPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
PanAndTiltPositionSubscriberPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
PanAndTiltPositionSubscriberPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PanAndTiltPositionSubscriberPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
PanAndTiltPositionSubscriberPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltPositionSubscriber ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
PanAndTiltPositionSubscriberPlugin_new(void);

NDDSUSERDllExport extern void
PanAndTiltPositionSubscriberPlugin_delete(struct PRESTypePlugin *);

#define QuaternionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define QuaternionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define QuaternionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define QuaternionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define QuaternionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Quaternion*
QuaternionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Quaternion*
QuaternionPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Quaternion*
QuaternionPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
QuaternionPluginSupport_copy_data(
    Quaternion *out,
    const Quaternion *in);

NDDSUSERDllExport extern void 
QuaternionPluginSupport_destroy_data_w_params(
    Quaternion *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
QuaternionPluginSupport_destroy_data_ex(
    Quaternion *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
QuaternionPluginSupport_destroy_data(
    Quaternion *sample);

NDDSUSERDllExport extern void 
QuaternionPluginSupport_print_data(
    const Quaternion *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
QuaternionPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
QuaternionPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
QuaternionPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
QuaternionPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
QuaternionPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Quaternion *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
QuaternionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Quaternion *out,
    const Quaternion *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
QuaternionPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const Quaternion *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
QuaternionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Quaternion **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
QuaternionPlugin_deserialize_from_cdr_buffer(
    Quaternion *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
QuaternionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
QuaternionPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
QuaternionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
QuaternionPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
QuaternionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Quaternion ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
QuaternionPlugin_new(void);

NDDSUSERDllExport extern void
QuaternionPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct PanAndTiltPositionPublisher
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct PanAndTiltPositionPublisher)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* PanAndTiltPositionPublisher must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct PanAndTiltPositionPublisher.
*/
typedef class PanAndTiltPositionPublisher PanAndTiltPositionPublisherKeyHolder;

#define PanAndTiltPositionPublisherPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define PanAndTiltPositionPublisherPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define PanAndTiltPositionPublisherPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define PanAndTiltPositionPublisherPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define PanAndTiltPositionPublisherPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define PanAndTiltPositionPublisherPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define PanAndTiltPositionPublisherPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PanAndTiltPositionPublisher*
PanAndTiltPositionPublisherPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern PanAndTiltPositionPublisher*
PanAndTiltPositionPublisherPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PanAndTiltPositionPublisher*
PanAndTiltPositionPublisherPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
PanAndTiltPositionPublisherPluginSupport_copy_data(
    PanAndTiltPositionPublisher *out,
    const PanAndTiltPositionPublisher *in);

NDDSUSERDllExport extern void 
PanAndTiltPositionPublisherPluginSupport_destroy_data_w_params(
    PanAndTiltPositionPublisher *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
PanAndTiltPositionPublisherPluginSupport_destroy_data_ex(
    PanAndTiltPositionPublisher *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PanAndTiltPositionPublisherPluginSupport_destroy_data(
    PanAndTiltPositionPublisher *sample);

NDDSUSERDllExport extern void 
PanAndTiltPositionPublisherPluginSupport_print_data(
    const PanAndTiltPositionPublisher *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern PanAndTiltPositionPublisher*
PanAndTiltPositionPublisherPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PanAndTiltPositionPublisher*
PanAndTiltPositionPublisherPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
PanAndTiltPositionPublisherPluginSupport_destroy_key_ex(
    PanAndTiltPositionPublisherKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PanAndTiltPositionPublisherPluginSupport_destroy_key(
    PanAndTiltPositionPublisherKeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
PanAndTiltPositionPublisherPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
PanAndTiltPositionPublisherPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
PanAndTiltPositionPublisherPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
PanAndTiltPositionPublisherPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
PanAndTiltPositionPublisherPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltPositionPublisher *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
PanAndTiltPositionPublisherPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltPositionPublisher *out,
    const PanAndTiltPositionPublisher *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
PanAndTiltPositionPublisherPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const PanAndTiltPositionPublisher *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
PanAndTiltPositionPublisherPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltPositionPublisher **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
PanAndTiltPositionPublisherPlugin_deserialize_from_cdr_buffer(
    PanAndTiltPositionPublisher *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
PanAndTiltPositionPublisherPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
PanAndTiltPositionPublisherPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
PanAndTiltPositionPublisherPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PanAndTiltPositionPublisherPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
PanAndTiltPositionPublisherPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltPositionPublisher ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PanAndTiltPositionPublisherPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltPositionPublisherKeyHolder *key, 
    const PanAndTiltPositionPublisher *instance);

NDDSUSERDllExport extern RTIBool 
PanAndTiltPositionPublisherPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltPositionPublisher *instance, 
    const PanAndTiltPositionPublisherKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
PanAndTiltPositionPublisherPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *cdrStream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
PanAndTiltPositionPublisherPlugin_new(void);

NDDSUSERDllExport extern void
PanAndTiltPositionPublisherPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* plcPlugin_493952776_h */

