

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef plcPlugin_493952328_h
#define plcPlugin_493952328_h

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

#define PowerPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define PowerPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define PowerPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define PowerPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define PowerPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Power*
PowerPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Power*
PowerPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Power*
PowerPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
PowerPluginSupport_copy_data(
    Power *out,
    const Power *in);

NDDSUSERDllExport extern void 
PowerPluginSupport_destroy_data_w_params(
    Power *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
PowerPluginSupport_destroy_data_ex(
    Power *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PowerPluginSupport_destroy_data(
    Power *sample);

NDDSUSERDllExport extern void 
PowerPluginSupport_print_data(
    const Power *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
PowerPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
PowerPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
PowerPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
PowerPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
PowerPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Power *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
PowerPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Power *out,
    const Power *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
PowerPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const Power *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
PowerPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Power **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
PowerPlugin_deserialize_from_cdr_buffer(
    Power *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
PowerPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
PowerPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
PowerPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PowerPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
PowerPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Power ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
PowerPlugin_new(void);

NDDSUSERDllExport extern void
PowerPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct LampControl
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct LampControl)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* LampControl must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct LampControl.
*/
typedef class LampControl LampControlKeyHolder;

#define LampControlPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define LampControlPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define LampControlPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define LampControlPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define LampControlPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

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

NDDSUSERDllExport extern LampControl*
LampControlPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern LampControl*
LampControlPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
LampControlPluginSupport_destroy_key_ex(
    LampControlKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
LampControlPluginSupport_destroy_key(
    LampControlKeyHolder *key);

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

NDDSUSERDllExport extern RTIBool 
LampControlPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    LampControlKeyHolder *key, 
    const LampControl *instance);

NDDSUSERDllExport extern RTIBool 
LampControlPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    LampControl *instance, 
    const LampControlKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
LampControlPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *cdrStream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
LampControlPlugin_new(void);

NDDSUSERDllExport extern void
LampControlPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct CameraControl
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct CameraControl)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* CameraControl must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct CameraControl.
*/
typedef class CameraControl CameraControlKeyHolder;

#define CameraControlPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define CameraControlPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CameraControlPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define CameraControlPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define CameraControlPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

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

NDDSUSERDllExport extern CameraControl*
CameraControlPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CameraControl*
CameraControlPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
CameraControlPluginSupport_destroy_key_ex(
    CameraControlKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CameraControlPluginSupport_destroy_key(
    CameraControlKeyHolder *key);

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

NDDSUSERDllExport extern RTIBool 
CameraControlPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CameraControlKeyHolder *key, 
    const CameraControl *instance);

NDDSUSERDllExport extern RTIBool 
CameraControlPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    CameraControl *instance, 
    const CameraControlKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
CameraControlPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *cdrStream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CameraControlPlugin_new(void);

NDDSUSERDllExport extern void
CameraControlPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct PanAndTiltControl
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct PanAndTiltControl)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* PanAndTiltControl must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct PanAndTiltControl.
*/
typedef class PanAndTiltControl PanAndTiltControlKeyHolder;

#define PanAndTiltControlPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define PanAndTiltControlPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define PanAndTiltControlPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define PanAndTiltControlPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define PanAndTiltControlPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

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

NDDSUSERDllExport extern PanAndTiltControl*
PanAndTiltControlPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PanAndTiltControl*
PanAndTiltControlPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
PanAndTiltControlPluginSupport_destroy_key_ex(
    PanAndTiltControlKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PanAndTiltControlPluginSupport_destroy_key(
    PanAndTiltControlKeyHolder *key);

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

NDDSUSERDllExport extern RTIBool 
PanAndTiltControlPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltControlKeyHolder *key, 
    const PanAndTiltControl *instance);

NDDSUSERDllExport extern RTIBool 
PanAndTiltControlPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    PanAndTiltControl *instance, 
    const PanAndTiltControlKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
PanAndTiltControlPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *cdrStream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
PanAndTiltControlPlugin_new(void);

NDDSUSERDllExport extern void
PanAndTiltControlPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* plcPlugin_493952328_h */

