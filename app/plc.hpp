

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef plc_493951772_hpp
#define plc_493951772_hpp

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

class NDDSUSERDllExport LampControl {
  public:

    LampControl();

    LampControl(uint32_t lampID_,float intensity_,bool power_);

    uint32_t& lampID() noexcept {
        return m_lampID_;
    }

    const uint32_t& lampID() const noexcept {
        return m_lampID_;
    }

    void lampID(uint32_t value) {

        m_lampID_ = value;
    }

    float& intensity() noexcept {
        return m_intensity_;
    }

    const float& intensity() const noexcept {
        return m_intensity_;
    }

    void intensity(float value) {

        m_intensity_ = value;
    }

    bool& power() noexcept {
        return m_power_;
    }

    const bool& power() const noexcept {
        return m_power_;
    }

    void power(bool value) {

        m_power_ = value;
    }

    bool operator == (const LampControl& other_) const;
    bool operator != (const LampControl& other_) const;

    void swap(LampControl& other_) noexcept ;

  private:

    uint32_t m_lampID_;
    float m_intensity_;
    bool m_power_;

};

inline void swap(LampControl& a, LampControl& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LampControl& sample);

class NDDSUSERDllExport CameraControl {
  public:

    CameraControl();

    CameraControl(uint32_t cameraId_,bool power_,bool light_,float focus_,float zoom_);

    uint32_t& cameraId() noexcept {
        return m_cameraId_;
    }

    const uint32_t& cameraId() const noexcept {
        return m_cameraId_;
    }

    void cameraId(uint32_t value) {

        m_cameraId_ = value;
    }

    bool& power() noexcept {
        return m_power_;
    }

    const bool& power() const noexcept {
        return m_power_;
    }

    void power(bool value) {

        m_power_ = value;
    }

    bool& light() noexcept {
        return m_light_;
    }

    const bool& light() const noexcept {
        return m_light_;
    }

    void light(bool value) {

        m_light_ = value;
    }

    float& focus() noexcept {
        return m_focus_;
    }

    const float& focus() const noexcept {
        return m_focus_;
    }

    void focus(float value) {

        m_focus_ = value;
    }

    float& zoom() noexcept {
        return m_zoom_;
    }

    const float& zoom() const noexcept {
        return m_zoom_;
    }

    void zoom(float value) {

        m_zoom_ = value;
    }

    bool operator == (const CameraControl& other_) const;
    bool operator != (const CameraControl& other_) const;

    void swap(CameraControl& other_) noexcept ;

  private:

    uint32_t m_cameraId_;
    bool m_power_;
    bool m_light_;
    float m_focus_;
    float m_zoom_;

};

inline void swap(CameraControl& a, CameraControl& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CameraControl& sample);

class NDDSUSERDllExport PanAndTiltControl {
  public:

    PanAndTiltControl();

    PanAndTiltControl(float x_,float y_,float z_);

    float& x() noexcept {
        return m_x_;
    }

    const float& x() const noexcept {
        return m_x_;
    }

    void x(float value) {

        m_x_ = value;
    }

    float& y() noexcept {
        return m_y_;
    }

    const float& y() const noexcept {
        return m_y_;
    }

    void y(float value) {

        m_y_ = value;
    }

    float& z() noexcept {
        return m_z_;
    }

    const float& z() const noexcept {
        return m_z_;
    }

    void z(float value) {

        m_z_ = value;
    }

    bool operator == (const PanAndTiltControl& other_) const;
    bool operator != (const PanAndTiltControl& other_) const;

    void swap(PanAndTiltControl& other_) noexcept ;

  private:

    float m_x_;
    float m_y_;
    float m_z_;

};

inline void swap(PanAndTiltControl& a, PanAndTiltControl& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PanAndTiltControl& sample);

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
        struct topic_type_name< ::LampControl > {
            NDDSUSERDllExport static std::string value() {
                return "LampControl";
            }
        };

        template<>
        struct is_topic_type< ::LampControl > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::LampControl > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::LampControl& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::LampControl& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::LampControl& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::LampControl& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::CameraControl > {
            NDDSUSERDllExport static std::string value() {
                return "CameraControl";
            }
        };

        template<>
        struct is_topic_type< ::CameraControl > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::CameraControl > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::CameraControl& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::CameraControl& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::CameraControl& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::CameraControl& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::PanAndTiltControl > {
            NDDSUSERDllExport static std::string value() {
                return "PanAndTiltControl";
            }
        };

        template<>
        struct is_topic_type< ::PanAndTiltControl > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::PanAndTiltControl > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::PanAndTiltControl& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::PanAndTiltControl& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::PanAndTiltControl& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::PanAndTiltControl& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::LampControl > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::LampControl > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::CameraControl > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::CameraControl > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::PanAndTiltControl > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::PanAndTiltControl > {
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

#endif // plc_493951772_hpp

