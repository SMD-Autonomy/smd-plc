

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

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "plcPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "plc.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- PLCcontrol: 

PLCcontrol::PLCcontrol() :
    m_PLCid_ (0) ,
    m_count_r_ (0) ,
    m_value_r_ (0) ,
    m_value_rw_ (0)  {

}   

PLCcontrol::PLCcontrol (int32_t PLCid_,int32_t count_r_,int32_t value_r_,int32_t value_rw_):
    m_PLCid_(PLCid_), 
    m_count_r_(count_r_), 
    m_value_r_(value_r_), 
    m_value_rw_(value_rw_) {
}

void PLCcontrol::swap(PLCcontrol& other_)  noexcept 
{
    using std::swap;
    swap(m_PLCid_, other_.m_PLCid_);
    swap(m_count_r_, other_.m_count_r_);
    swap(m_value_r_, other_.m_value_r_);
    swap(m_value_rw_, other_.m_value_rw_);
}  

bool PLCcontrol::operator == (const PLCcontrol& other_) const {
    if (m_PLCid_ != other_.m_PLCid_) {
        return false;
    }
    if (m_count_r_ != other_.m_count_r_) {
        return false;
    }
    if (m_value_r_ != other_.m_value_r_) {
        return false;
    }
    if (m_value_rw_ != other_.m_value_rw_) {
        return false;
    }
    return true;
}

bool PLCcontrol::operator != (const PLCcontrol& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const PLCcontrol& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "PLCid: " << sample.PLCid ()<<", ";
    o << "count_r: " << sample.count_r ()<<", ";
    o << "value_r: " << sample.value_r ()<<", ";
    o << "value_rw: " << sample.value_rw ();
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
        struct native_type_code< ::PLCcontrol > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PLCcontrol_g_tc_members[4]=
                {

                    {
                        (char *)"PLCid",/* Member name */
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
                        (char *)"count_r",/* Member name */
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
                        (char *)"value_r",/* Member name */
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
                        (char *)"value_rw",/* Member name */
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
                    }
                };

                static DDS_TypeCode PLCcontrol_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"PLCcontrol", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        PLCcontrol_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PLCcontrol*/

                if (is_initialized) {
                    return &PLCcontrol_g_tc;
                }

                is_initialized = RTI_TRUE;

                PLCcontrol_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PLCcontrol_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                PLCcontrol_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                PLCcontrol_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                PLCcontrol_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                PLCcontrol_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                PLCcontrol_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                PLCcontrol_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                PLCcontrol_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                PLCcontrol_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                PLCcontrol_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                PLCcontrol_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                PLCcontrol_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                PLCcontrol_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                PLCcontrol_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                PLCcontrol_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                PLCcontrol_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                PLCcontrol_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                PLCcontrol_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
                PLCcontrol_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                PLCcontrol_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                PLCcontrol_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                PLCcontrol_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                PLCcontrol_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                PLCcontrol_g_tc_members[3]._annotations._defaultValue._u.long_value = 0;
                PLCcontrol_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                PLCcontrol_g_tc_members[3]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                PLCcontrol_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                PLCcontrol_g_tc_members[3]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                PLCcontrol_g_tc._data._sampleAccessInfo = sample_access_info();
                PLCcontrol_g_tc._data._typePlugin = type_plugin_info();    

                return &PLCcontrol_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::PLCcontrol *sample;

                static RTIXCdrMemberAccessInfo PLCcontrol_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PLCcontrol_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PLCcontrol_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::PLCcontrol);
                if (sample == NULL) {
                    return NULL;
                }

                PLCcontrol_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PLCid() - (char *)sample);

                PLCcontrol_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->count_r() - (char *)sample);

                PLCcontrol_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->value_r() - (char *)sample);

                PLCcontrol_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->value_rw() - (char *)sample);

                PLCcontrol_g_sampleAccessInfo.memberAccessInfos = 
                PLCcontrol_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::PLCcontrol);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PLCcontrol_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PLCcontrol_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PLCcontrol_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PLCcontrol_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::PLCcontrol >;

                PLCcontrol_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PLCcontrol_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PLCcontrol_g_typePlugin = 
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

                return &PLCcontrol_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::PLCcontrol >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::PLCcontrol >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::PLCcontrol >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::PLCcontrolPlugin_new,
                ::PLCcontrolPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::PLCcontrol >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::PLCcontrol& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PLCcontrolPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PLCcontrolPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::PLCcontrol >::from_cdr_buffer(::PLCcontrol& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PLCcontrolPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::PLCcontrol from cdr buffer");
        }

        void topic_type_support< ::PLCcontrol >::reset_sample(::PLCcontrol& sample) 
        {
            sample.PLCid(0);
            sample.count_r(0);
            sample.value_r(0);
            sample.value_rw(0);
        }

        void topic_type_support< ::PLCcontrol >::allocate_sample(::PLCcontrol& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
