

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>
#include <cmath>
#include <limits>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "plcPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "plc.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- LampControl: 

LampControl::LampControl() :
    m_lampID_ (0u) ,
    m_intensity_ (0.0f) ,
    m_power_ (0)  {

}   

LampControl::LampControl (uint32_t lampID_,float intensity_,bool power_):
    m_lampID_(lampID_), 
    m_intensity_(intensity_), 
    m_power_(power_) {
}

void LampControl::swap(LampControl& other_)  noexcept 
{
    using std::swap;
    swap(m_lampID_, other_.m_lampID_);
    swap(m_intensity_, other_.m_intensity_);
    swap(m_power_, other_.m_power_);
}  

bool LampControl::operator == (const LampControl& other_) const {
    if (m_lampID_ != other_.m_lampID_) {
        return false;
    }
    if (std::fabs(m_intensity_ - other_.m_intensity_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_intensity_ - other_.m_intensity_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (m_power_ != other_.m_power_) {
        return false;
    }
    return true;
}

bool LampControl::operator != (const LampControl& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const LampControl& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "lampID: " << sample.lampID ()<<", ";
    o << "intensity: " << std::setprecision(9) << sample.intensity ()<<", ";
    o << "power: " << sample.power ();
    o <<"]";
    return o;
}

// ---- CameraControl: 

CameraControl::CameraControl() :
    m_cameraId_ (0u) ,
    m_power_ (0) ,
    m_light_ (0) ,
    m_focus_ (0.0f) ,
    m_zoom_ (0.0f)  {

}   

CameraControl::CameraControl (uint32_t cameraId_,bool power_,bool light_,float focus_,float zoom_):
    m_cameraId_(cameraId_), 
    m_power_(power_), 
    m_light_(light_), 
    m_focus_(focus_), 
    m_zoom_(zoom_) {
}

void CameraControl::swap(CameraControl& other_)  noexcept 
{
    using std::swap;
    swap(m_cameraId_, other_.m_cameraId_);
    swap(m_power_, other_.m_power_);
    swap(m_light_, other_.m_light_);
    swap(m_focus_, other_.m_focus_);
    swap(m_zoom_, other_.m_zoom_);
}  

bool CameraControl::operator == (const CameraControl& other_) const {
    if (m_cameraId_ != other_.m_cameraId_) {
        return false;
    }
    if (m_power_ != other_.m_power_) {
        return false;
    }
    if (m_light_ != other_.m_light_) {
        return false;
    }
    if (std::fabs(m_focus_ - other_.m_focus_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_focus_ - other_.m_focus_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_zoom_ - other_.m_zoom_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_zoom_ - other_.m_zoom_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    return true;
}

bool CameraControl::operator != (const CameraControl& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const CameraControl& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "cameraId: " << sample.cameraId ()<<", ";
    o << "power: " << sample.power ()<<", ";
    o << "light: " << sample.light ()<<", ";
    o << "focus: " << std::setprecision(9) << sample.focus ()<<", ";
    o << "zoom: " << std::setprecision(9) << sample.zoom ();
    o <<"]";
    return o;
}

// ---- PanAndTiltControl: 

PanAndTiltControl::PanAndTiltControl() :
    m_x_ (0.0f) ,
    m_y_ (0.0f) ,
    m_z_ (0.0f)  {

}   

PanAndTiltControl::PanAndTiltControl (float x_,float y_,float z_):
    m_x_(x_), 
    m_y_(y_), 
    m_z_(z_) {
}

void PanAndTiltControl::swap(PanAndTiltControl& other_)  noexcept 
{
    using std::swap;
    swap(m_x_, other_.m_x_);
    swap(m_y_, other_.m_y_);
    swap(m_z_, other_.m_z_);
}  

bool PanAndTiltControl::operator == (const PanAndTiltControl& other_) const {
    if (std::fabs(m_x_ - other_.m_x_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_x_ - other_.m_x_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_y_ - other_.m_y_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_y_ - other_.m_y_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_z_ - other_.m_z_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_z_ - other_.m_z_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    return true;
}

bool PanAndTiltControl::operator != (const PanAndTiltControl& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const PanAndTiltControl& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "x: " << std::setprecision(9) << sample.x ()<<", ";
    o << "y: " << std::setprecision(9) << sample.y ()<<", ";
    o << "z: " << std::setprecision(9) << sample.z ();
    o <<"]";
    return o;
}

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code< ::LampControl > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LampControl_g_tc_members[3]=
                {

                    {
                        (char *)"lampID",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"intensity",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"power",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode LampControl_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"LampControl", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        LampControl_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LampControl*/

                if (is_initialized) {
                    return &LampControl_g_tc;
                }

                is_initialized = RTI_TRUE;

                LampControl_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LampControl_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                LampControl_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                LampControl_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                LampControl_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                LampControl_g_tc_members[0]._annotations._defaultValue._u.ulong_value = 0u;
                LampControl_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                LampControl_g_tc_members[0]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                LampControl_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                LampControl_g_tc_members[0]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;
                LampControl_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                LampControl_g_tc_members[1]._annotations._defaultValue._u.float_value = 0.0f;
                LampControl_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                LampControl_g_tc_members[1]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                LampControl_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                LampControl_g_tc_members[1]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                LampControl_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LampControl_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                LampControl_g_tc._data._sampleAccessInfo = sample_access_info();
                LampControl_g_tc._data._typePlugin = type_plugin_info();    

                return &LampControl_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::LampControl *sample;

                static RTIXCdrMemberAccessInfo LampControl_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LampControl_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LampControl_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::LampControl);
                if (sample == NULL) {
                    return NULL;
                }

                LampControl_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lampID() - (char *)sample);

                LampControl_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity() - (char *)sample);

                LampControl_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->power() - (char *)sample);

                LampControl_g_sampleAccessInfo.memberAccessInfos = 
                LampControl_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::LampControl);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LampControl_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LampControl_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LampControl_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LampControl_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::LampControl >;

                LampControl_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LampControl_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LampControl_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &LampControl_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::LampControl >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::LampControl >::get())));
        }

        template<>
        struct native_type_code< ::CameraControl > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CameraControl_g_tc_members[5]=
                {

                    {
                        (char *)"cameraId",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"power",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"light",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"focus",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"zoom",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode CameraControl_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"CameraControl", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        CameraControl_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CameraControl*/

                if (is_initialized) {
                    return &CameraControl_g_tc;
                }

                is_initialized = RTI_TRUE;

                CameraControl_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CameraControl_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                CameraControl_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraControl_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraControl_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                CameraControl_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                /* Initialize the values for member annotations. */
                CameraControl_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                CameraControl_g_tc_members[0]._annotations._defaultValue._u.ulong_value = 0u;
                CameraControl_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                CameraControl_g_tc_members[0]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                CameraControl_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                CameraControl_g_tc_members[0]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;
                CameraControl_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraControl_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
                CameraControl_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraControl_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;
                CameraControl_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                CameraControl_g_tc_members[3]._annotations._defaultValue._u.float_value = 0.0f;
                CameraControl_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                CameraControl_g_tc_members[3]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                CameraControl_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                CameraControl_g_tc_members[3]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                CameraControl_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                CameraControl_g_tc_members[4]._annotations._defaultValue._u.float_value = 0.0f;
                CameraControl_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                CameraControl_g_tc_members[4]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                CameraControl_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                CameraControl_g_tc_members[4]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                CameraControl_g_tc._data._sampleAccessInfo = sample_access_info();
                CameraControl_g_tc._data._typePlugin = type_plugin_info();    

                return &CameraControl_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::CameraControl *sample;

                static RTIXCdrMemberAccessInfo CameraControl_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CameraControl_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CameraControl_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::CameraControl);
                if (sample == NULL) {
                    return NULL;
                }

                CameraControl_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->cameraId() - (char *)sample);

                CameraControl_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->power() - (char *)sample);

                CameraControl_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->light() - (char *)sample);

                CameraControl_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->focus() - (char *)sample);

                CameraControl_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zoom() - (char *)sample);

                CameraControl_g_sampleAccessInfo.memberAccessInfos = 
                CameraControl_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::CameraControl);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CameraControl_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CameraControl_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CameraControl_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CameraControl_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::CameraControl >;

                CameraControl_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CameraControl_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CameraControl_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &CameraControl_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::CameraControl >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::CameraControl >::get())));
        }

        template<>
        struct native_type_code< ::PanAndTiltControl > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PanAndTiltControl_g_tc_members[3]=
                {

                    {
                        (char *)"x",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"y",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"z",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PanAndTiltControl_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"PanAndTiltControl", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        PanAndTiltControl_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PanAndTiltControl*/

                if (is_initialized) {
                    return &PanAndTiltControl_g_tc;
                }

                is_initialized = RTI_TRUE;

                PanAndTiltControl_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PanAndTiltControl_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltControl_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltControl_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                /* Initialize the values for member annotations. */
                PanAndTiltControl_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControl_g_tc_members[0]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltControl_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControl_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltControl_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControl_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltControl_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControl_g_tc_members[1]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltControl_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControl_g_tc_members[1]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltControl_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControl_g_tc_members[1]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltControl_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControl_g_tc_members[2]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltControl_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControl_g_tc_members[2]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltControl_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControl_g_tc_members[2]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                PanAndTiltControl_g_tc._data._sampleAccessInfo = sample_access_info();
                PanAndTiltControl_g_tc._data._typePlugin = type_plugin_info();    

                return &PanAndTiltControl_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::PanAndTiltControl *sample;

                static RTIXCdrMemberAccessInfo PanAndTiltControl_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PanAndTiltControl_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PanAndTiltControl_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::PanAndTiltControl);
                if (sample == NULL) {
                    return NULL;
                }

                PanAndTiltControl_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->x() - (char *)sample);

                PanAndTiltControl_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->y() - (char *)sample);

                PanAndTiltControl_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->z() - (char *)sample);

                PanAndTiltControl_g_sampleAccessInfo.memberAccessInfos = 
                PanAndTiltControl_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::PanAndTiltControl);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PanAndTiltControl_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PanAndTiltControl_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PanAndTiltControl_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PanAndTiltControl_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::PanAndTiltControl >;

                PanAndTiltControl_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PanAndTiltControl_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PanAndTiltControl_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &PanAndTiltControl_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::PanAndTiltControl >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::PanAndTiltControl >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::LampControl >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::LampControlPlugin_new,
                ::LampControlPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::LampControl >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::LampControl& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LampControlPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LampControlPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::LampControl >::from_cdr_buffer(::LampControl& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LampControlPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::LampControl from cdr buffer");
        }

        void topic_type_support< ::LampControl >::reset_sample(::LampControl& sample) 
        {
            sample.lampID(0u);
            sample.intensity(0.0f);
            sample.power(0);
        }

        void topic_type_support< ::LampControl >::allocate_sample(::LampControl& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
        void topic_type_support< ::CameraControl >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::CameraControlPlugin_new,
                ::CameraControlPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::CameraControl >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::CameraControl& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CameraControlPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CameraControlPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::CameraControl >::from_cdr_buffer(::CameraControl& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CameraControlPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::CameraControl from cdr buffer");
        }

        void topic_type_support< ::CameraControl >::reset_sample(::CameraControl& sample) 
        {
            sample.cameraId(0u);
            sample.power(0);
            sample.light(0);
            sample.focus(0.0f);
            sample.zoom(0.0f);
        }

        void topic_type_support< ::CameraControl >::allocate_sample(::CameraControl& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
        void topic_type_support< ::PanAndTiltControl >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::PanAndTiltControlPlugin_new,
                ::PanAndTiltControlPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::PanAndTiltControl >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::PanAndTiltControl& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PanAndTiltControlPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PanAndTiltControlPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::PanAndTiltControl >::from_cdr_buffer(::PanAndTiltControl& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PanAndTiltControlPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::PanAndTiltControl from cdr buffer");
        }

        void topic_type_support< ::PanAndTiltControl >::reset_sample(::PanAndTiltControl& sample) 
        {
            sample.x(0.0f);
            sample.y(0.0f);
            sample.z(0.0f);
        }

        void topic_type_support< ::PanAndTiltControl >::allocate_sample(::PanAndTiltControl& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
