

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef plcPlugin_493951877_h
#define plcPlugin_493951877_h

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

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* plcPlugin_493951877_h */

