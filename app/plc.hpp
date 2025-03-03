

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef plc_493952328_hpp
#define plc_493952328_hpp

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

class NDDSUSERDllExport LampControlCustom {
  public:

    LampControlCustom();

    LampControlCustom(uint32_t lampID_,float intensity_,bool power_);

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

    bool operator == (const LampControlCustom& other_) const;
    bool operator != (const LampControlCustom& other_) const;

    void swap(LampControlCustom& other_) noexcept ;

  private:

    uint32_t m_lampID_;
    float m_intensity_;
    bool m_power_;

};

inline void swap(LampControlCustom& a, LampControlCustom& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LampControlCustom& sample);

class NDDSUSERDllExport CameraControlCustom {
  public:

    CameraControlCustom();

    CameraControlCustom(uint32_t cameraID_,bool power_,bool light_,float focus_,float zoom_);

    uint32_t& cameraID() noexcept {
        return m_cameraID_;
    }

    const uint32_t& cameraID() const noexcept {
        return m_cameraID_;
    }

    void cameraID(uint32_t value) {

        m_cameraID_ = value;
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

    bool operator == (const CameraControlCustom& other_) const;
    bool operator != (const CameraControlCustom& other_) const;

    void swap(CameraControlCustom& other_) noexcept ;

  private:

    uint32_t m_cameraID_;
    bool m_power_;
    bool m_light_;
    float m_focus_;
    float m_zoom_;

};

inline void swap(CameraControlCustom& a, CameraControlCustom& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CameraControlCustom& sample);

class NDDSUSERDllExport PanAndTiltControlCustom {
  public:

    PanAndTiltControlCustom();

    PanAndTiltControlCustom(uint32_t panandtiltID_,float x_,float y_,float z_);

    uint32_t& panandtiltID() noexcept {
        return m_panandtiltID_;
    }

    const uint32_t& panandtiltID() const noexcept {
        return m_panandtiltID_;
    }

    void panandtiltID(uint32_t value) {

        m_panandtiltID_ = value;
    }

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

    bool operator == (const PanAndTiltControlCustom& other_) const;
    bool operator != (const PanAndTiltControlCustom& other_) const;

    void swap(PanAndTiltControlCustom& other_) noexcept ;

  private:

    uint32_t m_panandtiltID_;
    float m_x_;
    float m_y_;
    float m_z_;

};

inline void swap(PanAndTiltControlCustom& a, PanAndTiltControlCustom& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PanAndTiltControlCustom& sample);

class NDDSUSERDllExport Power {
  public:

    Power();

    Power(uint8_t CMD_,uint8_t On_);

    uint8_t& CMD() noexcept {
        return m_CMD_;
    }

    const uint8_t& CMD() const noexcept {
        return m_CMD_;
    }

    void CMD(uint8_t value) {

        m_CMD_ = value;
    }

    uint8_t& On() noexcept {
        return m_On_;
    }

    const uint8_t& On() const noexcept {
        return m_On_;
    }

    void On(uint8_t value) {

        m_On_ = value;
    }

    bool operator == (const Power& other_) const;
    bool operator != (const Power& other_) const;

    void swap(Power& other_) noexcept ;

  private:

    uint8_t m_CMD_;
    uint8_t m_On_;

};

inline void swap(Power& a, Power& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Power& sample);

class NDDSUSERDllExport LampControl {
  public:

    LampControl();

    LampControl(uint32_t lampID_,float intensity_,const ::Power& power_);

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

    ::Power& power() noexcept {
        return m_power_;
    }

    const ::Power& power() const noexcept {
        return m_power_;
    }

    void power(const ::Power& value) {

        m_power_ = value;
    }

    void power(::Power&& value) {
        m_power_ = std::move(value);
    }
    bool operator == (const LampControl& other_) const;
    bool operator != (const LampControl& other_) const;

    void swap(LampControl& other_) noexcept ;

  private:

    uint32_t m_lampID_;
    float m_intensity_;
    ::Power m_power_;

};

inline void swap(LampControl& a, LampControl& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LampControl& sample);

class NDDSUSERDllExport CameraControl {
  public:

    CameraControl();

    CameraControl(uint32_t cameraID_,const ::Power& focus_far_,const ::Power& focus_near_,const ::Power& LED_,const ::Power& power_,const ::Power& zoom_in_,const ::Power& zoom_out_);

    uint32_t& cameraID() noexcept {
        return m_cameraID_;
    }

    const uint32_t& cameraID() const noexcept {
        return m_cameraID_;
    }

    void cameraID(uint32_t value) {

        m_cameraID_ = value;
    }

    ::Power& focus_far() noexcept {
        return m_focus_far_;
    }

    const ::Power& focus_far() const noexcept {
        return m_focus_far_;
    }

    void focus_far(const ::Power& value) {

        m_focus_far_ = value;
    }

    void focus_far(::Power&& value) {
        m_focus_far_ = std::move(value);
    }
    ::Power& focus_near() noexcept {
        return m_focus_near_;
    }

    const ::Power& focus_near() const noexcept {
        return m_focus_near_;
    }

    void focus_near(const ::Power& value) {

        m_focus_near_ = value;
    }

    void focus_near(::Power&& value) {
        m_focus_near_ = std::move(value);
    }
    ::Power& LED() noexcept {
        return m_LED_;
    }

    const ::Power& LED() const noexcept {
        return m_LED_;
    }

    void LED(const ::Power& value) {

        m_LED_ = value;
    }

    void LED(::Power&& value) {
        m_LED_ = std::move(value);
    }
    ::Power& power() noexcept {
        return m_power_;
    }

    const ::Power& power() const noexcept {
        return m_power_;
    }

    void power(const ::Power& value) {

        m_power_ = value;
    }

    void power(::Power&& value) {
        m_power_ = std::move(value);
    }
    ::Power& zoom_in() noexcept {
        return m_zoom_in_;
    }

    const ::Power& zoom_in() const noexcept {
        return m_zoom_in_;
    }

    void zoom_in(const ::Power& value) {

        m_zoom_in_ = value;
    }

    void zoom_in(::Power&& value) {
        m_zoom_in_ = std::move(value);
    }
    ::Power& zoom_out() noexcept {
        return m_zoom_out_;
    }

    const ::Power& zoom_out() const noexcept {
        return m_zoom_out_;
    }

    void zoom_out(const ::Power& value) {

        m_zoom_out_ = value;
    }

    void zoom_out(::Power&& value) {
        m_zoom_out_ = std::move(value);
    }
    bool operator == (const CameraControl& other_) const;
    bool operator != (const CameraControl& other_) const;

    void swap(CameraControl& other_) noexcept ;

  private:

    uint32_t m_cameraID_;
    ::Power m_focus_far_;
    ::Power m_focus_near_;
    ::Power m_LED_;
    ::Power m_power_;
    ::Power m_zoom_in_;
    ::Power m_zoom_out_;

};

inline void swap(CameraControl& a, CameraControl& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CameraControl& sample);

class NDDSUSERDllExport PanAndTiltControl {
  public:

    PanAndTiltControl();

    PanAndTiltControl(uint32_t panandtiltID_,const ::Power& pan_left_,const ::Power& pan_right_,const ::Power& power_,const ::Power& tilt_down_,const ::Power& tilt_up_);

    uint32_t& panandtiltID() noexcept {
        return m_panandtiltID_;
    }

    const uint32_t& panandtiltID() const noexcept {
        return m_panandtiltID_;
    }

    void panandtiltID(uint32_t value) {

        m_panandtiltID_ = value;
    }

    ::Power& pan_left() noexcept {
        return m_pan_left_;
    }

    const ::Power& pan_left() const noexcept {
        return m_pan_left_;
    }

    void pan_left(const ::Power& value) {

        m_pan_left_ = value;
    }

    void pan_left(::Power&& value) {
        m_pan_left_ = std::move(value);
    }
    ::Power& pan_right() noexcept {
        return m_pan_right_;
    }

    const ::Power& pan_right() const noexcept {
        return m_pan_right_;
    }

    void pan_right(const ::Power& value) {

        m_pan_right_ = value;
    }

    void pan_right(::Power&& value) {
        m_pan_right_ = std::move(value);
    }
    ::Power& power() noexcept {
        return m_power_;
    }

    const ::Power& power() const noexcept {
        return m_power_;
    }

    void power(const ::Power& value) {

        m_power_ = value;
    }

    void power(::Power&& value) {
        m_power_ = std::move(value);
    }
    ::Power& tilt_down() noexcept {
        return m_tilt_down_;
    }

    const ::Power& tilt_down() const noexcept {
        return m_tilt_down_;
    }

    void tilt_down(const ::Power& value) {

        m_tilt_down_ = value;
    }

    void tilt_down(::Power&& value) {
        m_tilt_down_ = std::move(value);
    }
    ::Power& tilt_up() noexcept {
        return m_tilt_up_;
    }

    const ::Power& tilt_up() const noexcept {
        return m_tilt_up_;
    }

    void tilt_up(const ::Power& value) {

        m_tilt_up_ = value;
    }

    void tilt_up(::Power&& value) {
        m_tilt_up_ = std::move(value);
    }
    bool operator == (const PanAndTiltControl& other_) const;
    bool operator != (const PanAndTiltControl& other_) const;

    void swap(PanAndTiltControl& other_) noexcept ;

  private:

    uint32_t m_panandtiltID_;
    ::Power m_pan_left_;
    ::Power m_pan_right_;
    ::Power m_power_;
    ::Power m_tilt_down_;
    ::Power m_tilt_up_;

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
        struct topic_type_name< ::LampControlCustom > {
            NDDSUSERDllExport static std::string value() {
                return "LampControlCustom";
            }
        };

        template<>
        struct is_topic_type< ::LampControlCustom > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::LampControlCustom > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::LampControlCustom& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::LampControlCustom& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::LampControlCustom& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::LampControlCustom& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::CameraControlCustom > {
            NDDSUSERDllExport static std::string value() {
                return "CameraControlCustom";
            }
        };

        template<>
        struct is_topic_type< ::CameraControlCustom > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::CameraControlCustom > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::CameraControlCustom& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::CameraControlCustom& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::CameraControlCustom& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::CameraControlCustom& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::PanAndTiltControlCustom > {
            NDDSUSERDllExport static std::string value() {
                return "PanAndTiltControlCustom";
            }
        };

        template<>
        struct is_topic_type< ::PanAndTiltControlCustom > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::PanAndTiltControlCustom > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::PanAndTiltControlCustom& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::PanAndTiltControlCustom& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::PanAndTiltControlCustom& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::PanAndTiltControlCustom& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::Power > {
            NDDSUSERDllExport static std::string value() {
                return "Power";
            }
        };

        template<>
        struct is_topic_type< ::Power > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::Power > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::Power& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::Power& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::Power& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::Power& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
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
        struct dynamic_type< ::LampControlCustom > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::LampControlCustom > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::CameraControlCustom > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::CameraControlCustom > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::PanAndTiltControlCustom > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::PanAndTiltControlCustom > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::Power > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::Power > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

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

#endif // plc_493952328_hpp

