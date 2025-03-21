

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from plc.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef plc_493952772_hpp
#define plc_493952772_hpp

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

class NDDSUSERDllExport LampControl {
  public:

    LampControl();

    LampControl(float intensity_,int16_t power_);

    float& intensity() noexcept {
        return m_intensity_;
    }

    const float& intensity() const noexcept {
        return m_intensity_;
    }

    void intensity(float value) {

        m_intensity_ = value;
    }

    int16_t& power() noexcept {
        return m_power_;
    }

    const int16_t& power() const noexcept {
        return m_power_;
    }

    void power(int16_t value) {

        m_power_ = value;
    }

    bool operator == (const LampControl& other_) const;
    bool operator != (const LampControl& other_) const;

    void swap(LampControl& other_) noexcept ;

  private:

    float m_intensity_;
    int16_t m_power_;

};

inline void swap(LampControl& a, LampControl& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LampControl& sample);

class NDDSUSERDllExport CameraControl {
  public:

    CameraControl();

    CameraControl(int16_t focus_far_,int16_t focus_near_,int16_t LED_,int16_t power_,int16_t zoom_in_,int16_t zoom_out_);

    int16_t& focus_far() noexcept {
        return m_focus_far_;
    }

    const int16_t& focus_far() const noexcept {
        return m_focus_far_;
    }

    void focus_far(int16_t value) {

        m_focus_far_ = value;
    }

    int16_t& focus_near() noexcept {
        return m_focus_near_;
    }

    const int16_t& focus_near() const noexcept {
        return m_focus_near_;
    }

    void focus_near(int16_t value) {

        m_focus_near_ = value;
    }

    int16_t& LED() noexcept {
        return m_LED_;
    }

    const int16_t& LED() const noexcept {
        return m_LED_;
    }

    void LED(int16_t value) {

        m_LED_ = value;
    }

    int16_t& power() noexcept {
        return m_power_;
    }

    const int16_t& power() const noexcept {
        return m_power_;
    }

    void power(int16_t value) {

        m_power_ = value;
    }

    int16_t& zoom_in() noexcept {
        return m_zoom_in_;
    }

    const int16_t& zoom_in() const noexcept {
        return m_zoom_in_;
    }

    void zoom_in(int16_t value) {

        m_zoom_in_ = value;
    }

    int16_t& zoom_out() noexcept {
        return m_zoom_out_;
    }

    const int16_t& zoom_out() const noexcept {
        return m_zoom_out_;
    }

    void zoom_out(int16_t value) {

        m_zoom_out_ = value;
    }

    bool operator == (const CameraControl& other_) const;
    bool operator != (const CameraControl& other_) const;

    void swap(CameraControl& other_) noexcept ;

  private:

    int16_t m_focus_far_;
    int16_t m_focus_near_;
    int16_t m_LED_;
    int16_t m_power_;
    int16_t m_zoom_in_;
    int16_t m_zoom_out_;

};

inline void swap(CameraControl& a, CameraControl& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CameraControl& sample);

class NDDSUSERDllExport PanAndTiltControl {
  public:

    PanAndTiltControl();

    PanAndTiltControl(int16_t pan_left_,int16_t pan_right_,int16_t power_,int16_t tilt_down_,int16_t tilt_up_);

    int16_t& pan_left() noexcept {
        return m_pan_left_;
    }

    const int16_t& pan_left() const noexcept {
        return m_pan_left_;
    }

    void pan_left(int16_t value) {

        m_pan_left_ = value;
    }

    int16_t& pan_right() noexcept {
        return m_pan_right_;
    }

    const int16_t& pan_right() const noexcept {
        return m_pan_right_;
    }

    void pan_right(int16_t value) {

        m_pan_right_ = value;
    }

    int16_t& power() noexcept {
        return m_power_;
    }

    const int16_t& power() const noexcept {
        return m_power_;
    }

    void power(int16_t value) {

        m_power_ = value;
    }

    int16_t& tilt_down() noexcept {
        return m_tilt_down_;
    }

    const int16_t& tilt_down() const noexcept {
        return m_tilt_down_;
    }

    void tilt_down(int16_t value) {

        m_tilt_down_ = value;
    }

    int16_t& tilt_up() noexcept {
        return m_tilt_up_;
    }

    const int16_t& tilt_up() const noexcept {
        return m_tilt_up_;
    }

    void tilt_up(int16_t value) {

        m_tilt_up_ = value;
    }

    bool operator == (const PanAndTiltControl& other_) const;
    bool operator != (const PanAndTiltControl& other_) const;

    void swap(PanAndTiltControl& other_) noexcept ;

  private:

    int16_t m_pan_left_;
    int16_t m_pan_right_;
    int16_t m_power_;
    int16_t m_tilt_down_;
    int16_t m_tilt_up_;

};

inline void swap(PanAndTiltControl& a, PanAndTiltControl& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PanAndTiltControl& sample);

class NDDSUSERDllExport PanAndTiltPositionSubscriber {
  public:

    PanAndTiltPositionSubscriber();

    PanAndTiltPositionSubscriber(float pan_one_,float tilt_one_,float pan_two_,float tilt_two_,float pan_three_,float tilt_three_,float pan_four_,float tilt_four_,float pan_five_,float tilt_five_,float pan_six_,float tilt_six_,float pan_seven_,float tilt_seven_,float pan_eight_,float tilt_eight_);

    float& pan_one() noexcept {
        return m_pan_one_;
    }

    const float& pan_one() const noexcept {
        return m_pan_one_;
    }

    void pan_one(float value) {

        m_pan_one_ = value;
    }

    float& tilt_one() noexcept {
        return m_tilt_one_;
    }

    const float& tilt_one() const noexcept {
        return m_tilt_one_;
    }

    void tilt_one(float value) {

        m_tilt_one_ = value;
    }

    float& pan_two() noexcept {
        return m_pan_two_;
    }

    const float& pan_two() const noexcept {
        return m_pan_two_;
    }

    void pan_two(float value) {

        m_pan_two_ = value;
    }

    float& tilt_two() noexcept {
        return m_tilt_two_;
    }

    const float& tilt_two() const noexcept {
        return m_tilt_two_;
    }

    void tilt_two(float value) {

        m_tilt_two_ = value;
    }

    float& pan_three() noexcept {
        return m_pan_three_;
    }

    const float& pan_three() const noexcept {
        return m_pan_three_;
    }

    void pan_three(float value) {

        m_pan_three_ = value;
    }

    float& tilt_three() noexcept {
        return m_tilt_three_;
    }

    const float& tilt_three() const noexcept {
        return m_tilt_three_;
    }

    void tilt_three(float value) {

        m_tilt_three_ = value;
    }

    float& pan_four() noexcept {
        return m_pan_four_;
    }

    const float& pan_four() const noexcept {
        return m_pan_four_;
    }

    void pan_four(float value) {

        m_pan_four_ = value;
    }

    float& tilt_four() noexcept {
        return m_tilt_four_;
    }

    const float& tilt_four() const noexcept {
        return m_tilt_four_;
    }

    void tilt_four(float value) {

        m_tilt_four_ = value;
    }

    float& pan_five() noexcept {
        return m_pan_five_;
    }

    const float& pan_five() const noexcept {
        return m_pan_five_;
    }

    void pan_five(float value) {

        m_pan_five_ = value;
    }

    float& tilt_five() noexcept {
        return m_tilt_five_;
    }

    const float& tilt_five() const noexcept {
        return m_tilt_five_;
    }

    void tilt_five(float value) {

        m_tilt_five_ = value;
    }

    float& pan_six() noexcept {
        return m_pan_six_;
    }

    const float& pan_six() const noexcept {
        return m_pan_six_;
    }

    void pan_six(float value) {

        m_pan_six_ = value;
    }

    float& tilt_six() noexcept {
        return m_tilt_six_;
    }

    const float& tilt_six() const noexcept {
        return m_tilt_six_;
    }

    void tilt_six(float value) {

        m_tilt_six_ = value;
    }

    float& pan_seven() noexcept {
        return m_pan_seven_;
    }

    const float& pan_seven() const noexcept {
        return m_pan_seven_;
    }

    void pan_seven(float value) {

        m_pan_seven_ = value;
    }

    float& tilt_seven() noexcept {
        return m_tilt_seven_;
    }

    const float& tilt_seven() const noexcept {
        return m_tilt_seven_;
    }

    void tilt_seven(float value) {

        m_tilt_seven_ = value;
    }

    float& pan_eight() noexcept {
        return m_pan_eight_;
    }

    const float& pan_eight() const noexcept {
        return m_pan_eight_;
    }

    void pan_eight(float value) {

        m_pan_eight_ = value;
    }

    float& tilt_eight() noexcept {
        return m_tilt_eight_;
    }

    const float& tilt_eight() const noexcept {
        return m_tilt_eight_;
    }

    void tilt_eight(float value) {

        m_tilt_eight_ = value;
    }

    bool operator == (const PanAndTiltPositionSubscriber& other_) const;
    bool operator != (const PanAndTiltPositionSubscriber& other_) const;

    void swap(PanAndTiltPositionSubscriber& other_) noexcept ;

  private:

    float m_pan_one_;
    float m_tilt_one_;
    float m_pan_two_;
    float m_tilt_two_;
    float m_pan_three_;
    float m_tilt_three_;
    float m_pan_four_;
    float m_tilt_four_;
    float m_pan_five_;
    float m_tilt_five_;
    float m_pan_six_;
    float m_tilt_six_;
    float m_pan_seven_;
    float m_tilt_seven_;
    float m_pan_eight_;
    float m_tilt_eight_;

};

inline void swap(PanAndTiltPositionSubscriber& a, PanAndTiltPositionSubscriber& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PanAndTiltPositionSubscriber& sample);

class NDDSUSERDllExport Quaternion {
  public:

    Quaternion();

    Quaternion(float x_,float y_,float z_,float w_);

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

    float& w() noexcept {
        return m_w_;
    }

    const float& w() const noexcept {
        return m_w_;
    }

    void w(float value) {

        m_w_ = value;
    }

    bool operator == (const Quaternion& other_) const;
    bool operator != (const Quaternion& other_) const;

    void swap(Quaternion& other_) noexcept ;

  private:

    float m_x_;
    float m_y_;
    float m_z_;
    float m_w_;

};

inline void swap(Quaternion& a, Quaternion& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Quaternion& sample);

class NDDSUSERDllExport PanAndTiltPositionPublisher {
  public:

    PanAndTiltPositionPublisher();

    PanAndTiltPositionPublisher(uint32_t panandtiltID_,const ::Quaternion& angle_);

    uint32_t& panandtiltID() noexcept {
        return m_panandtiltID_;
    }

    const uint32_t& panandtiltID() const noexcept {
        return m_panandtiltID_;
    }

    void panandtiltID(uint32_t value) {

        m_panandtiltID_ = value;
    }

    ::Quaternion& angle() noexcept {
        return m_angle_;
    }

    const ::Quaternion& angle() const noexcept {
        return m_angle_;
    }

    void angle(const ::Quaternion& value) {

        m_angle_ = value;
    }

    void angle(::Quaternion&& value) {
        m_angle_ = std::move(value);
    }
    bool operator == (const PanAndTiltPositionPublisher& other_) const;
    bool operator != (const PanAndTiltPositionPublisher& other_) const;

    void swap(PanAndTiltPositionPublisher& other_) noexcept ;

  private:

    uint32_t m_panandtiltID_;
    ::Quaternion m_angle_;

};

inline void swap(PanAndTiltPositionPublisher& a, PanAndTiltPositionPublisher& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PanAndTiltPositionPublisher& sample);

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
        template<>
        struct topic_type_name< ::PanAndTiltPositionSubscriber > {
            NDDSUSERDllExport static std::string value() {
                return "PanAndTiltPositionSubscriber";
            }
        };

        template<>
        struct is_topic_type< ::PanAndTiltPositionSubscriber > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::PanAndTiltPositionSubscriber > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::PanAndTiltPositionSubscriber& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::PanAndTiltPositionSubscriber& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::PanAndTiltPositionSubscriber& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::PanAndTiltPositionSubscriber& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::Quaternion > {
            NDDSUSERDllExport static std::string value() {
                return "Quaternion";
            }
        };

        template<>
        struct is_topic_type< ::Quaternion > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::Quaternion > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::Quaternion& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::Quaternion& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::Quaternion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::Quaternion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::PanAndTiltPositionPublisher > {
            NDDSUSERDllExport static std::string value() {
                return "PanAndTiltPositionPublisher";
            }
        };

        template<>
        struct is_topic_type< ::PanAndTiltPositionPublisher > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::PanAndTiltPositionPublisher > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::PanAndTiltPositionPublisher& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::PanAndTiltPositionPublisher& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::PanAndTiltPositionPublisher& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::PanAndTiltPositionPublisher& sample, int, int);

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

        template<>
        struct dynamic_type< ::PanAndTiltPositionSubscriber > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::PanAndTiltPositionSubscriber > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::Quaternion > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::Quaternion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::PanAndTiltPositionPublisher > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::PanAndTiltPositionPublisher > {
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

#endif // plc_493952772_hpp

