

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

// ---- LampControlCustom: 

LampControlCustom::LampControlCustom() :
    m_lampID_ (0u) ,
    m_intensity_ (0.0f) ,
    m_power_ (0)  {

}   

LampControlCustom::LampControlCustom (uint32_t lampID_,float intensity_,bool power_):
    m_lampID_(lampID_), 
    m_intensity_(intensity_), 
    m_power_(power_) {
}

void LampControlCustom::swap(LampControlCustom& other_)  noexcept 
{
    using std::swap;
    swap(m_lampID_, other_.m_lampID_);
    swap(m_intensity_, other_.m_intensity_);
    swap(m_power_, other_.m_power_);
}  

bool LampControlCustom::operator == (const LampControlCustom& other_) const {
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

bool LampControlCustom::operator != (const LampControlCustom& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const LampControlCustom& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "lampID: " << sample.lampID ()<<", ";
    o << "intensity: " << std::setprecision(9) << sample.intensity ()<<", ";
    o << "power: " << sample.power ();
    o <<"]";
    return o;
}

// ---- CameraControlCustom: 

CameraControlCustom::CameraControlCustom() :
    m_cameraId_ (0u) ,
    m_power_ (0) ,
    m_light_ (0) ,
    m_focus_ (0.0f) ,
    m_zoom_ (0.0f)  {

}   

CameraControlCustom::CameraControlCustom (uint32_t cameraId_,bool power_,bool light_,float focus_,float zoom_):
    m_cameraId_(cameraId_), 
    m_power_(power_), 
    m_light_(light_), 
    m_focus_(focus_), 
    m_zoom_(zoom_) {
}

void CameraControlCustom::swap(CameraControlCustom& other_)  noexcept 
{
    using std::swap;
    swap(m_cameraId_, other_.m_cameraId_);
    swap(m_power_, other_.m_power_);
    swap(m_light_, other_.m_light_);
    swap(m_focus_, other_.m_focus_);
    swap(m_zoom_, other_.m_zoom_);
}  

bool CameraControlCustom::operator == (const CameraControlCustom& other_) const {
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

bool CameraControlCustom::operator != (const CameraControlCustom& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const CameraControlCustom& sample)
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

// ---- PanAndTiltControlCustom: 

PanAndTiltControlCustom::PanAndTiltControlCustom() :
    m_x_ (0.0f) ,
    m_y_ (0.0f) ,
    m_z_ (0.0f)  {

}   

PanAndTiltControlCustom::PanAndTiltControlCustom (float x_,float y_,float z_):
    m_x_(x_), 
    m_y_(y_), 
    m_z_(z_) {
}

void PanAndTiltControlCustom::swap(PanAndTiltControlCustom& other_)  noexcept 
{
    using std::swap;
    swap(m_x_, other_.m_x_);
    swap(m_y_, other_.m_y_);
    swap(m_z_, other_.m_z_);
}  

bool PanAndTiltControlCustom::operator == (const PanAndTiltControlCustom& other_) const {
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

bool PanAndTiltControlCustom::operator != (const PanAndTiltControlCustom& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const PanAndTiltControlCustom& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "x: " << std::setprecision(9) << sample.x ()<<", ";
    o << "y: " << std::setprecision(9) << sample.y ()<<", ";
    o << "z: " << std::setprecision(9) << sample.z ();
    o <<"]";
    return o;
}

// ---- Power: 

Power::Power() :
    m_CMD_ (0) ,
    m_On_ (0)  {

}   

Power::Power (uint8_t CMD_,uint8_t On_):
    m_CMD_(CMD_), 
    m_On_(On_) {
}

void Power::swap(Power& other_)  noexcept 
{
    using std::swap;
    swap(m_CMD_, other_.m_CMD_);
    swap(m_On_, other_.m_On_);
}  

bool Power::operator == (const Power& other_) const {
    if (m_CMD_ != other_.m_CMD_) {
        return false;
    }
    if (m_On_ != other_.m_On_) {
        return false;
    }
    return true;
}

bool Power::operator != (const Power& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const Power& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "CMD: " << std::hex<<(int) sample.CMD ()<<", ";
    o << "On: " << std::hex<<(int) sample.On ();
    o <<"]";
    return o;
}

// ---- LampControl: 

LampControl::LampControl() :
    m_intensity_ (0.0f)  {

}   

LampControl::LampControl (float intensity_,const ::Power& power_):
    m_intensity_(intensity_), 
    m_power_(power_) {
}

void LampControl::swap(LampControl& other_)  noexcept 
{
    using std::swap;
    swap(m_intensity_, other_.m_intensity_);
    swap(m_power_, other_.m_power_);
}  

bool LampControl::operator == (const LampControl& other_) const {
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
    o << "intensity: " << std::setprecision(9) << sample.intensity ()<<", ";
    o << "power: " << sample.power ();
    o <<"]";
    return o;
}

// ---- CameraControl: 

CameraControl::CameraControl()  {

}   

CameraControl::CameraControl (const ::Power& focus_far_,const ::Power& focus_near_,const ::Power& LED_,const ::Power& power_,const ::Power& zoom_in_,const ::Power& zoom_out_):
    m_focus_far_(focus_far_), 
    m_focus_near_(focus_near_), 
    m_LED_(LED_), 
    m_power_(power_), 
    m_zoom_in_(zoom_in_), 
    m_zoom_out_(zoom_out_) {
}

void CameraControl::swap(CameraControl& other_)  noexcept 
{
    using std::swap;
    swap(m_focus_far_, other_.m_focus_far_);
    swap(m_focus_near_, other_.m_focus_near_);
    swap(m_LED_, other_.m_LED_);
    swap(m_power_, other_.m_power_);
    swap(m_zoom_in_, other_.m_zoom_in_);
    swap(m_zoom_out_, other_.m_zoom_out_);
}  

bool CameraControl::operator == (const CameraControl& other_) const {
    if (m_focus_far_ != other_.m_focus_far_) {
        return false;
    }
    if (m_focus_near_ != other_.m_focus_near_) {
        return false;
    }
    if (m_LED_ != other_.m_LED_) {
        return false;
    }
    if (m_power_ != other_.m_power_) {
        return false;
    }
    if (m_zoom_in_ != other_.m_zoom_in_) {
        return false;
    }
    if (m_zoom_out_ != other_.m_zoom_out_) {
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
    o << "focus_far: " << sample.focus_far ()<<", ";
    o << "focus_near: " << sample.focus_near ()<<", ";
    o << "LED: " << sample.LED ()<<", ";
    o << "power: " << sample.power ()<<", ";
    o << "zoom_in: " << sample.zoom_in ()<<", ";
    o << "zoom_out: " << sample.zoom_out ();
    o <<"]";
    return o;
}

// ---- PanAndTiltControl: 

PanAndTiltControl::PanAndTiltControl()  {

}   

PanAndTiltControl::PanAndTiltControl (const ::Power& pan_left_,const ::Power& pan_right_,const ::Power& power_,const ::Power& tilt_down_,const ::Power& tilt_up_):
    m_pan_left_(pan_left_), 
    m_pan_right_(pan_right_), 
    m_power_(power_), 
    m_tilt_down_(tilt_down_), 
    m_tilt_up_(tilt_up_) {
}

void PanAndTiltControl::swap(PanAndTiltControl& other_)  noexcept 
{
    using std::swap;
    swap(m_pan_left_, other_.m_pan_left_);
    swap(m_pan_right_, other_.m_pan_right_);
    swap(m_power_, other_.m_power_);
    swap(m_tilt_down_, other_.m_tilt_down_);
    swap(m_tilt_up_, other_.m_tilt_up_);
}  

bool PanAndTiltControl::operator == (const PanAndTiltControl& other_) const {
    if (m_pan_left_ != other_.m_pan_left_) {
        return false;
    }
    if (m_pan_right_ != other_.m_pan_right_) {
        return false;
    }
    if (m_power_ != other_.m_power_) {
        return false;
    }
    if (m_tilt_down_ != other_.m_tilt_down_) {
        return false;
    }
    if (m_tilt_up_ != other_.m_tilt_up_) {
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
    o << "pan_left: " << sample.pan_left ()<<", ";
    o << "pan_right: " << sample.pan_right ()<<", ";
    o << "power: " << sample.power ()<<", ";
    o << "tilt_down: " << sample.tilt_down ()<<", ";
    o << "tilt_up: " << sample.tilt_up ();
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
        struct native_type_code< ::LampControlCustom > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LampControlCustom_g_tc_members[3]=
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

                static DDS_TypeCode LampControlCustom_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"LampControlCustom", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        LampControlCustom_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LampControlCustom*/

                if (is_initialized) {
                    return &LampControlCustom_g_tc;
                }

                is_initialized = RTI_TRUE;

                LampControlCustom_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LampControlCustom_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                LampControlCustom_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                LampControlCustom_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                LampControlCustom_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                LampControlCustom_g_tc_members[0]._annotations._defaultValue._u.ulong_value = 0u;
                LampControlCustom_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                LampControlCustom_g_tc_members[0]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                LampControlCustom_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                LampControlCustom_g_tc_members[0]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;
                LampControlCustom_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                LampControlCustom_g_tc_members[1]._annotations._defaultValue._u.float_value = 0.0f;
                LampControlCustom_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                LampControlCustom_g_tc_members[1]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                LampControlCustom_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                LampControlCustom_g_tc_members[1]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                LampControlCustom_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LampControlCustom_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                LampControlCustom_g_tc._data._sampleAccessInfo = sample_access_info();
                LampControlCustom_g_tc._data._typePlugin = type_plugin_info();    

                return &LampControlCustom_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::LampControlCustom *sample;

                static RTIXCdrMemberAccessInfo LampControlCustom_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LampControlCustom_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LampControlCustom_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::LampControlCustom);
                if (sample == NULL) {
                    return NULL;
                }

                LampControlCustom_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lampID() - (char *)sample);

                LampControlCustom_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity() - (char *)sample);

                LampControlCustom_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->power() - (char *)sample);

                LampControlCustom_g_sampleAccessInfo.memberAccessInfos = 
                LampControlCustom_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::LampControlCustom);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LampControlCustom_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LampControlCustom_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LampControlCustom_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LampControlCustom_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::LampControlCustom >;

                LampControlCustom_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LampControlCustom_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LampControlCustom_g_typePlugin = 
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

                return &LampControlCustom_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::LampControlCustom >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::LampControlCustom >::get())));
        }

        template<>
        struct native_type_code< ::CameraControlCustom > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CameraControlCustom_g_tc_members[5]=
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

                static DDS_TypeCode CameraControlCustom_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"CameraControlCustom", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        CameraControlCustom_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CameraControlCustom*/

                if (is_initialized) {
                    return &CameraControlCustom_g_tc;
                }

                is_initialized = RTI_TRUE;

                CameraControlCustom_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CameraControlCustom_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                CameraControlCustom_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraControlCustom_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                CameraControlCustom_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                CameraControlCustom_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                /* Initialize the values for member annotations. */
                CameraControlCustom_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                CameraControlCustom_g_tc_members[0]._annotations._defaultValue._u.ulong_value = 0u;
                CameraControlCustom_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                CameraControlCustom_g_tc_members[0]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                CameraControlCustom_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                CameraControlCustom_g_tc_members[0]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;
                CameraControlCustom_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraControlCustom_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
                CameraControlCustom_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                CameraControlCustom_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;
                CameraControlCustom_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                CameraControlCustom_g_tc_members[3]._annotations._defaultValue._u.float_value = 0.0f;
                CameraControlCustom_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                CameraControlCustom_g_tc_members[3]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                CameraControlCustom_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                CameraControlCustom_g_tc_members[3]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                CameraControlCustom_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                CameraControlCustom_g_tc_members[4]._annotations._defaultValue._u.float_value = 0.0f;
                CameraControlCustom_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                CameraControlCustom_g_tc_members[4]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                CameraControlCustom_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                CameraControlCustom_g_tc_members[4]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                CameraControlCustom_g_tc._data._sampleAccessInfo = sample_access_info();
                CameraControlCustom_g_tc._data._typePlugin = type_plugin_info();    

                return &CameraControlCustom_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::CameraControlCustom *sample;

                static RTIXCdrMemberAccessInfo CameraControlCustom_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CameraControlCustom_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CameraControlCustom_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::CameraControlCustom);
                if (sample == NULL) {
                    return NULL;
                }

                CameraControlCustom_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->cameraId() - (char *)sample);

                CameraControlCustom_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->power() - (char *)sample);

                CameraControlCustom_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->light() - (char *)sample);

                CameraControlCustom_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->focus() - (char *)sample);

                CameraControlCustom_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zoom() - (char *)sample);

                CameraControlCustom_g_sampleAccessInfo.memberAccessInfos = 
                CameraControlCustom_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::CameraControlCustom);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CameraControlCustom_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CameraControlCustom_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CameraControlCustom_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CameraControlCustom_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::CameraControlCustom >;

                CameraControlCustom_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CameraControlCustom_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CameraControlCustom_g_typePlugin = 
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

                return &CameraControlCustom_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::CameraControlCustom >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::CameraControlCustom >::get())));
        }

        template<>
        struct native_type_code< ::PanAndTiltControlCustom > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PanAndTiltControlCustom_g_tc_members[3]=
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

                static DDS_TypeCode PanAndTiltControlCustom_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"PanAndTiltControlCustom", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        PanAndTiltControlCustom_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PanAndTiltControlCustom*/

                if (is_initialized) {
                    return &PanAndTiltControlCustom_g_tc;
                }

                is_initialized = RTI_TRUE;

                PanAndTiltControlCustom_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PanAndTiltControlCustom_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltControlCustom_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltControlCustom_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                /* Initialize the values for member annotations. */
                PanAndTiltControlCustom_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControlCustom_g_tc_members[0]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltControlCustom_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControlCustom_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltControlCustom_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControlCustom_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltControlCustom_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControlCustom_g_tc_members[1]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltControlCustom_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControlCustom_g_tc_members[1]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltControlCustom_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControlCustom_g_tc_members[1]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltControlCustom_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControlCustom_g_tc_members[2]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltControlCustom_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControlCustom_g_tc_members[2]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltControlCustom_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControlCustom_g_tc_members[2]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                PanAndTiltControlCustom_g_tc._data._sampleAccessInfo = sample_access_info();
                PanAndTiltControlCustom_g_tc._data._typePlugin = type_plugin_info();    

                return &PanAndTiltControlCustom_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::PanAndTiltControlCustom *sample;

                static RTIXCdrMemberAccessInfo PanAndTiltControlCustom_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PanAndTiltControlCustom_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PanAndTiltControlCustom_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::PanAndTiltControlCustom);
                if (sample == NULL) {
                    return NULL;
                }

                PanAndTiltControlCustom_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->x() - (char *)sample);

                PanAndTiltControlCustom_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->y() - (char *)sample);

                PanAndTiltControlCustom_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->z() - (char *)sample);

                PanAndTiltControlCustom_g_sampleAccessInfo.memberAccessInfos = 
                PanAndTiltControlCustom_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::PanAndTiltControlCustom);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PanAndTiltControlCustom_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PanAndTiltControlCustom_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PanAndTiltControlCustom_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PanAndTiltControlCustom_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::PanAndTiltControlCustom >;

                PanAndTiltControlCustom_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PanAndTiltControlCustom_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PanAndTiltControlCustom_g_typePlugin = 
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

                return &PanAndTiltControlCustom_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::PanAndTiltControlCustom >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::PanAndTiltControlCustom >::get())));
        }

        template<>
        struct native_type_code< ::Power > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Power_g_tc_members[2]=
                {

                    {
                        (char *)"CMD",/* Member name */
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
                        (char *)"On",/* Member name */
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
                    }
                };

                static DDS_TypeCode Power_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Power", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Power_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Power*/

                if (is_initialized) {
                    return &Power_g_tc;
                }

                is_initialized = RTI_TRUE;

                Power_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Power_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                Power_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                /* Initialize the values for member annotations. */
                Power_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                Power_g_tc_members[0]._annotations._defaultValue._u.octet_value = 0;
                Power_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                Power_g_tc_members[0]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                Power_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                Power_g_tc_members[0]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;
                Power_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                Power_g_tc_members[1]._annotations._defaultValue._u.octet_value = 0;
                Power_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                Power_g_tc_members[1]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                Power_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                Power_g_tc_members[1]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                Power_g_tc._data._sampleAccessInfo = sample_access_info();
                Power_g_tc._data._typePlugin = type_plugin_info();    

                return &Power_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::Power *sample;

                static RTIXCdrMemberAccessInfo Power_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Power_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Power_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::Power);
                if (sample == NULL) {
                    return NULL;
                }

                Power_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->CMD() - (char *)sample);

                Power_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->On() - (char *)sample);

                Power_g_sampleAccessInfo.memberAccessInfos = 
                Power_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::Power);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Power_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Power_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Power_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Power_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::Power >;

                Power_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Power_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Power_g_typePlugin = 
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

                return &Power_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::Power >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::Power >::get())));
        }

        template<>
        struct native_type_code< ::LampControl > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LampControl_g_tc_members[2]=
                {

                    {
                        (char *)"intensity",/* Member name */
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
                        2, /* Number of members */
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

                LampControl_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                LampControl_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::Power>::get().native();

                /* Initialize the values for member annotations. */
                LampControl_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                LampControl_g_tc_members[0]._annotations._defaultValue._u.float_value = 0.0f;
                LampControl_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                LampControl_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                LampControl_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                LampControl_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                LampControl_g_tc._data._sampleAccessInfo = sample_access_info();
                LampControl_g_tc._data._typePlugin = type_plugin_info();    

                return &LampControl_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::LampControl *sample;

                static RTIXCdrMemberAccessInfo LampControl_g_memberAccessInfos[2] =
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
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity() - (char *)sample);

                LampControl_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
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

                static DDS_TypeCode_Member CameraControl_g_tc_members[6]=
                {

                    {
                        (char *)"focus_far",/* Member name */
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
                        (char *)"focus_near",/* Member name */
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
                        (char *)"LED",/* Member name */
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
                        (char *)"power",/* Member name */
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
                        (char *)"zoom_in",/* Member name */
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
                    }, 
                    {
                        (char *)"zoom_out",/* Member name */
                        {
                            5,/* Representation ID */
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
                        6, /* Number of members */
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

                CameraControl_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::Power>::get().native();
                CameraControl_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::Power>::get().native();
                CameraControl_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::Power>::get().native();
                CameraControl_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::Power>::get().native();
                CameraControl_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::Power>::get().native();
                CameraControl_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::Power>::get().native();

                /* Initialize the values for member annotations. */

                CameraControl_g_tc._data._sampleAccessInfo = sample_access_info();
                CameraControl_g_tc._data._typePlugin = type_plugin_info();    

                return &CameraControl_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::CameraControl *sample;

                static RTIXCdrMemberAccessInfo CameraControl_g_memberAccessInfos[6] =
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
                (RTIXCdrUnsignedLong) ((char *)&sample->focus_far() - (char *)sample);

                CameraControl_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->focus_near() - (char *)sample);

                CameraControl_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LED() - (char *)sample);

                CameraControl_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->power() - (char *)sample);

                CameraControl_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zoom_in() - (char *)sample);

                CameraControl_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zoom_out() - (char *)sample);

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

                static DDS_TypeCode_Member PanAndTiltControl_g_tc_members[5]=
                {

                    {
                        (char *)"pan_left",/* Member name */
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
                        (char *)"pan_right",/* Member name */
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
                    }, 
                    {
                        (char *)"tilt_down",/* Member name */
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
                        (char *)"tilt_up",/* Member name */
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
                        5, /* Number of members */
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

                PanAndTiltControl_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::Power>::get().native();
                PanAndTiltControl_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::Power>::get().native();
                PanAndTiltControl_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::Power>::get().native();
                PanAndTiltControl_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::Power>::get().native();
                PanAndTiltControl_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::Power>::get().native();

                /* Initialize the values for member annotations. */

                PanAndTiltControl_g_tc._data._sampleAccessInfo = sample_access_info();
                PanAndTiltControl_g_tc._data._typePlugin = type_plugin_info();    

                return &PanAndTiltControl_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::PanAndTiltControl *sample;

                static RTIXCdrMemberAccessInfo PanAndTiltControl_g_memberAccessInfos[5] =
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
                (RTIXCdrUnsignedLong) ((char *)&sample->pan_left() - (char *)sample);

                PanAndTiltControl_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pan_right() - (char *)sample);

                PanAndTiltControl_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->power() - (char *)sample);

                PanAndTiltControl_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tilt_down() - (char *)sample);

                PanAndTiltControl_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tilt_up() - (char *)sample);

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
        void topic_type_support< ::LampControlCustom >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::LampControlCustomPlugin_new,
                ::LampControlCustomPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::LampControlCustom >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::LampControlCustom& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LampControlCustomPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LampControlCustomPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::LampControlCustom >::from_cdr_buffer(::LampControlCustom& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LampControlCustomPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::LampControlCustom from cdr buffer");
        }

        void topic_type_support< ::LampControlCustom >::reset_sample(::LampControlCustom& sample) 
        {
            sample.lampID(0u);
            sample.intensity(0.0f);
            sample.power(0);
        }

        void topic_type_support< ::LampControlCustom >::allocate_sample(::LampControlCustom& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
        void topic_type_support< ::CameraControlCustom >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::CameraControlCustomPlugin_new,
                ::CameraControlCustomPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::CameraControlCustom >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::CameraControlCustom& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CameraControlCustomPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CameraControlCustomPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::CameraControlCustom >::from_cdr_buffer(::CameraControlCustom& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CameraControlCustomPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::CameraControlCustom from cdr buffer");
        }

        void topic_type_support< ::CameraControlCustom >::reset_sample(::CameraControlCustom& sample) 
        {
            sample.cameraId(0u);
            sample.power(0);
            sample.light(0);
            sample.focus(0.0f);
            sample.zoom(0.0f);
        }

        void topic_type_support< ::CameraControlCustom >::allocate_sample(::CameraControlCustom& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
        void topic_type_support< ::PanAndTiltControlCustom >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::PanAndTiltControlCustomPlugin_new,
                ::PanAndTiltControlCustomPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::PanAndTiltControlCustom >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::PanAndTiltControlCustom& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PanAndTiltControlCustomPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PanAndTiltControlCustomPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::PanAndTiltControlCustom >::from_cdr_buffer(::PanAndTiltControlCustom& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PanAndTiltControlCustomPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::PanAndTiltControlCustom from cdr buffer");
        }

        void topic_type_support< ::PanAndTiltControlCustom >::reset_sample(::PanAndTiltControlCustom& sample) 
        {
            sample.x(0.0f);
            sample.y(0.0f);
            sample.z(0.0f);
        }

        void topic_type_support< ::PanAndTiltControlCustom >::allocate_sample(::PanAndTiltControlCustom& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
        void topic_type_support< ::Power >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::PowerPlugin_new,
                ::PowerPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::Power >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::Power& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PowerPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PowerPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::Power >::from_cdr_buffer(::Power& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PowerPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::Power from cdr buffer");
        }

        void topic_type_support< ::Power >::reset_sample(::Power& sample) 
        {
            sample.CMD(0);
            sample.On(0);
        }

        void topic_type_support< ::Power >::allocate_sample(::Power& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
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
            sample.intensity(0.0f);
            ::rti::topic::reset_sample(sample.power());
        }

        void topic_type_support< ::LampControl >::allocate_sample(::LampControl& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.power(),  -1, -1);
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
            ::rti::topic::reset_sample(sample.focus_far());
            ::rti::topic::reset_sample(sample.focus_near());
            ::rti::topic::reset_sample(sample.LED());
            ::rti::topic::reset_sample(sample.power());
            ::rti::topic::reset_sample(sample.zoom_in());
            ::rti::topic::reset_sample(sample.zoom_out());
        }

        void topic_type_support< ::CameraControl >::allocate_sample(::CameraControl& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.focus_far(),  -1, -1);
            ::rti::topic::allocate_sample(sample.focus_near(),  -1, -1);
            ::rti::topic::allocate_sample(sample.LED(),  -1, -1);
            ::rti::topic::allocate_sample(sample.power(),  -1, -1);
            ::rti::topic::allocate_sample(sample.zoom_in(),  -1, -1);
            ::rti::topic::allocate_sample(sample.zoom_out(),  -1, -1);
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
            ::rti::topic::reset_sample(sample.pan_left());
            ::rti::topic::reset_sample(sample.pan_right());
            ::rti::topic::reset_sample(sample.power());
            ::rti::topic::reset_sample(sample.tilt_down());
            ::rti::topic::reset_sample(sample.tilt_up());
        }

        void topic_type_support< ::PanAndTiltControl >::allocate_sample(::PanAndTiltControl& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.pan_left(),  -1, -1);
            ::rti::topic::allocate_sample(sample.pan_right(),  -1, -1);
            ::rti::topic::allocate_sample(sample.power(),  -1, -1);
            ::rti::topic::allocate_sample(sample.tilt_down(),  -1, -1);
            ::rti::topic::allocate_sample(sample.tilt_up(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
