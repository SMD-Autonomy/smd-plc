

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef plc_493951567_hpp
#define plc_493951567_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/External.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/core/array.hpp"
#include "rti/topic/TopicTraits.hpp"

#include "omg/types/string_view.hpp"

#include "rti/core/BoundedSequence.hpp"
#include "dds/core/Optional.hpp"

#ifndef NDDS_STANDALONE_TYPE
#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

class NDDSUSERDllExport PLCcontrol {
  public:

    PLCcontrol();

    PLCcontrol(int32_t PLCid_,int32_t count_r_,int32_t value_r_,int32_t value_rw_);

    int32_t& PLCid() noexcept {
        return m_PLCid_;
    }

    const int32_t& PLCid() const noexcept {
        return m_PLCid_;
    }

    void PLCid(int32_t value) {

        m_PLCid_ = value;
    }

    int32_t& count_r() noexcept {
        return m_count_r_;
    }

    const int32_t& count_r() const noexcept {
        return m_count_r_;
    }

    void count_r(int32_t value) {

        m_count_r_ = value;
    }

    int32_t& value_r() noexcept {
        return m_value_r_;
    }

    const int32_t& value_r() const noexcept {
        return m_value_r_;
    }

    void value_r(int32_t value) {

        m_value_r_ = value;
    }

    int32_t& value_rw() noexcept {
        return m_value_rw_;
    }

    const int32_t& value_rw() const noexcept {
        return m_value_rw_;
    }

    void value_rw(int32_t value) {

        m_value_rw_ = value;
    }

    bool operator == (const PLCcontrol& other_) const;
    bool operator != (const PLCcontrol& other_) const;

    void swap(PLCcontrol& other_) noexcept ;

  private:

    int32_t m_PLCid_;
    int32_t m_count_r_;
    int32_t m_value_r_;
    int32_t m_value_rw_;

};

inline void swap(PLCcontrol& a, PLCcontrol& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PLCcontrol& sample);

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
    }
}
#else

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< ::PLCcontrol > {
            NDDSUSERDllExport static std::string value() {
                return "PLCcontrol";
            }
        };

        template<>
        struct is_topic_type< ::PLCcontrol > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::PLCcontrol > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::PLCcontrol& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::PLCcontrol& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::PLCcontrol& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::PLCcontrol& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::PLCcontrol > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::PLCcontrol > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

    }
}

#endif // NDDS_STANDALONE_TYPE
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // plc_493951567_hpp

