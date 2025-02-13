

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef plcPlugin_493951567_h
#define plcPlugin_493951567_h

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
* By default, this type is struct PLCcontrol
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct PLCcontrol)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* PLCcontrol must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct PLCcontrol.
*/
typedef class PLCcontrol PLCcontrolKeyHolder;

#define PLCcontrolPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define PLCcontrolPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define PLCcontrolPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define PLCcontrolPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define PLCcontrolPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define PLCcontrolPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define PLCcontrolPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PLCcontrol*
PLCcontrolPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern PLCcontrol*
PLCcontrolPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PLCcontrol*
PLCcontrolPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
PLCcontrolPluginSupport_copy_data(
    PLCcontrol *out,
    const PLCcontrol *in);

NDDSUSERDllExport extern void 
PLCcontrolPluginSupport_destroy_data_w_params(
    PLCcontrol *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
PLCcontrolPluginSupport_destroy_data_ex(
    PLCcontrol *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PLCcontrolPluginSupport_destroy_data(
    PLCcontrol *sample);

NDDSUSERDllExport extern void 
PLCcontrolPluginSupport_print_data(
    const PLCcontrol *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern PLCcontrol*
PLCcontrolPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PLCcontrol*
PLCcontrolPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
PLCcontrolPluginSupport_destroy_key_ex(
    PLCcontrolKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PLCcontrolPluginSupport_destroy_key(
    PLCcontrolKeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
PLCcontrolPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
PLCcontrolPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
PLCcontrolPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
PLCcontrolPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
PLCcontrolPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    PLCcontrol *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
PLCcontrolPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    PLCcontrol *out,
    const PLCcontrol *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
PLCcontrolPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const PLCcontrol *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
PLCcontrolPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    PLCcontrol **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
PLCcontrolPlugin_deserialize_from_cdr_buffer(
    PLCcontrol *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
PLCcontrolPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
PLCcontrolPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
PLCcontrolPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PLCcontrolPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
PLCcontrolPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    PLCcontrol ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PLCcontrolPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PLCcontrolKeyHolder *key, 
    const PLCcontrol *instance);

NDDSUSERDllExport extern RTIBool 
PLCcontrolPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    PLCcontrol *instance, 
    const PLCcontrolKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
PLCcontrolPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *cdrStream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
PLCcontrolPlugin_new(void);

NDDSUSERDllExport extern void
PLCcontrolPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* plcPlugin_493951567_h */

