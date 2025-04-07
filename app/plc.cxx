

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

// ---- Power: 

Power::Power() :
    m_intensity_one_ (0.0f) ,
    m_intensity_two_ (0.0f) ,
    m_intensity_three_ (0.0f) ,
    m_intensity_four_ (0.0f) ,
    m_intensity_five_ (0.0f) ,
    m_intensity_six_ (0.0f) ,
    m_intensity_seven_ (0.0f) ,
    m_intensity_eight_ (0.0f) ,
    m_intensity_nine_ (0.0f) ,
    m_intensity_ten_ (0.0f) ,
    m_intensity_eleven_ (0.0f) ,
    m_intensity_twelve_ (0.0f) ,
    m_intensity_thirteen_ (0.0f) ,
    m_intensity_fourteen_ (0.0f) ,
    m_intensity_fifteen_ (0.0f) ,
    m_intensity_sixteen_ (0.0f)  {

}   

Power::Power (float intensity_one_,float intensity_two_,float intensity_three_,float intensity_four_,float intensity_five_,float intensity_six_,float intensity_seven_,float intensity_eight_,float intensity_nine_,float intensity_ten_,float intensity_eleven_,float intensity_twelve_,float intensity_thirteen_,float intensity_fourteen_,float intensity_fifteen_,float intensity_sixteen_):
    m_intensity_one_(intensity_one_), 
    m_intensity_two_(intensity_two_), 
    m_intensity_three_(intensity_three_), 
    m_intensity_four_(intensity_four_), 
    m_intensity_five_(intensity_five_), 
    m_intensity_six_(intensity_six_), 
    m_intensity_seven_(intensity_seven_), 
    m_intensity_eight_(intensity_eight_), 
    m_intensity_nine_(intensity_nine_), 
    m_intensity_ten_(intensity_ten_), 
    m_intensity_eleven_(intensity_eleven_), 
    m_intensity_twelve_(intensity_twelve_), 
    m_intensity_thirteen_(intensity_thirteen_), 
    m_intensity_fourteen_(intensity_fourteen_), 
    m_intensity_fifteen_(intensity_fifteen_), 
    m_intensity_sixteen_(intensity_sixteen_) {
}

void Power::swap(Power& other_)  noexcept 
{
    using std::swap;
    swap(m_intensity_one_, other_.m_intensity_one_);
    swap(m_intensity_two_, other_.m_intensity_two_);
    swap(m_intensity_three_, other_.m_intensity_three_);
    swap(m_intensity_four_, other_.m_intensity_four_);
    swap(m_intensity_five_, other_.m_intensity_five_);
    swap(m_intensity_six_, other_.m_intensity_six_);
    swap(m_intensity_seven_, other_.m_intensity_seven_);
    swap(m_intensity_eight_, other_.m_intensity_eight_);
    swap(m_intensity_nine_, other_.m_intensity_nine_);
    swap(m_intensity_ten_, other_.m_intensity_ten_);
    swap(m_intensity_eleven_, other_.m_intensity_eleven_);
    swap(m_intensity_twelve_, other_.m_intensity_twelve_);
    swap(m_intensity_thirteen_, other_.m_intensity_thirteen_);
    swap(m_intensity_fourteen_, other_.m_intensity_fourteen_);
    swap(m_intensity_fifteen_, other_.m_intensity_fifteen_);
    swap(m_intensity_sixteen_, other_.m_intensity_sixteen_);
}  

bool Power::operator == (const Power& other_) const {
    if (std::fabs(m_intensity_one_ - other_.m_intensity_one_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_intensity_one_ - other_.m_intensity_one_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_intensity_two_ - other_.m_intensity_two_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_intensity_two_ - other_.m_intensity_two_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_intensity_three_ - other_.m_intensity_three_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_intensity_three_ - other_.m_intensity_three_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_intensity_four_ - other_.m_intensity_four_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_intensity_four_ - other_.m_intensity_four_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_intensity_five_ - other_.m_intensity_five_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_intensity_five_ - other_.m_intensity_five_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_intensity_six_ - other_.m_intensity_six_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_intensity_six_ - other_.m_intensity_six_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_intensity_seven_ - other_.m_intensity_seven_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_intensity_seven_ - other_.m_intensity_seven_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_intensity_eight_ - other_.m_intensity_eight_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_intensity_eight_ - other_.m_intensity_eight_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_intensity_nine_ - other_.m_intensity_nine_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_intensity_nine_ - other_.m_intensity_nine_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_intensity_ten_ - other_.m_intensity_ten_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_intensity_ten_ - other_.m_intensity_ten_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_intensity_eleven_ - other_.m_intensity_eleven_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_intensity_eleven_ - other_.m_intensity_eleven_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_intensity_twelve_ - other_.m_intensity_twelve_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_intensity_twelve_ - other_.m_intensity_twelve_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_intensity_thirteen_ - other_.m_intensity_thirteen_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_intensity_thirteen_ - other_.m_intensity_thirteen_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_intensity_fourteen_ - other_.m_intensity_fourteen_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_intensity_fourteen_ - other_.m_intensity_fourteen_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_intensity_fifteen_ - other_.m_intensity_fifteen_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_intensity_fifteen_ - other_.m_intensity_fifteen_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_intensity_sixteen_ - other_.m_intensity_sixteen_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_intensity_sixteen_ - other_.m_intensity_sixteen_) < (std::numeric_limits< float>::min)())) {
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
    o << "intensity_one: " << std::setprecision(9) << sample.intensity_one ()<<", ";
    o << "intensity_two: " << std::setprecision(9) << sample.intensity_two ()<<", ";
    o << "intensity_three: " << std::setprecision(9) << sample.intensity_three ()<<", ";
    o << "intensity_four: " << std::setprecision(9) << sample.intensity_four ()<<", ";
    o << "intensity_five: " << std::setprecision(9) << sample.intensity_five ()<<", ";
    o << "intensity_six: " << std::setprecision(9) << sample.intensity_six ()<<", ";
    o << "intensity_seven: " << std::setprecision(9) << sample.intensity_seven ()<<", ";
    o << "intensity_eight: " << std::setprecision(9) << sample.intensity_eight ()<<", ";
    o << "intensity_nine: " << std::setprecision(9) << sample.intensity_nine ()<<", ";
    o << "intensity_ten: " << std::setprecision(9) << sample.intensity_ten ()<<", ";
    o << "intensity_eleven: " << std::setprecision(9) << sample.intensity_eleven ()<<", ";
    o << "intensity_twelve: " << std::setprecision(9) << sample.intensity_twelve ()<<", ";
    o << "intensity_thirteen: " << std::setprecision(9) << sample.intensity_thirteen ()<<", ";
    o << "intensity_fourteen: " << std::setprecision(9) << sample.intensity_fourteen ()<<", ";
    o << "intensity_fifteen: " << std::setprecision(9) << sample.intensity_fifteen ()<<", ";
    o << "intensity_sixteen: " << std::setprecision(9) << sample.intensity_sixteen ();
    o <<"]";
    return o;
}

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
    m_cameraID_ (0u) ,
    m_power_ (0) ,
    m_light_ (0) ,
    m_focus_ (0.0f) ,
    m_zoom_ (0.0f)  {

}   

CameraControlCustom::CameraControlCustom (uint32_t cameraID_,bool power_,bool light_,float focus_,float zoom_):
    m_cameraID_(cameraID_), 
    m_power_(power_), 
    m_light_(light_), 
    m_focus_(focus_), 
    m_zoom_(zoom_) {
}

void CameraControlCustom::swap(CameraControlCustom& other_)  noexcept 
{
    using std::swap;
    swap(m_cameraID_, other_.m_cameraID_);
    swap(m_power_, other_.m_power_);
    swap(m_light_, other_.m_light_);
    swap(m_focus_, other_.m_focus_);
    swap(m_zoom_, other_.m_zoom_);
}  

bool CameraControlCustom::operator == (const CameraControlCustom& other_) const {
    if (m_cameraID_ != other_.m_cameraID_) {
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
    o << "cameraID: " << sample.cameraID ()<<", ";
    o << "power: " << sample.power ()<<", ";
    o << "light: " << sample.light ()<<", ";
    o << "focus: " << std::setprecision(9) << sample.focus ()<<", ";
    o << "zoom: " << std::setprecision(9) << sample.zoom ();
    o <<"]";
    return o;
}

// ---- PanAndTiltControlCustom: 

PanAndTiltControlCustom::PanAndTiltControlCustom() :
    m_panandtiltID_ (0u) ,
    m_x_ (0.0f) ,
    m_y_ (0.0f) ,
    m_z_ (0.0f)  {

}   

PanAndTiltControlCustom::PanAndTiltControlCustom (uint32_t panandtiltID_,float x_,float y_,float z_):
    m_panandtiltID_(panandtiltID_), 
    m_x_(x_), 
    m_y_(y_), 
    m_z_(z_) {
}

void PanAndTiltControlCustom::swap(PanAndTiltControlCustom& other_)  noexcept 
{
    using std::swap;
    swap(m_panandtiltID_, other_.m_panandtiltID_);
    swap(m_x_, other_.m_x_);
    swap(m_y_, other_.m_y_);
    swap(m_z_, other_.m_z_);
}  

bool PanAndTiltControlCustom::operator == (const PanAndTiltControlCustom& other_) const {
    if (m_panandtiltID_ != other_.m_panandtiltID_) {
        return false;
    }
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
    o << "panandtiltID: " << sample.panandtiltID ()<<", ";
    o << "x: " << std::setprecision(9) << sample.x ()<<", ";
    o << "y: " << std::setprecision(9) << sample.y ()<<", ";
    o << "z: " << std::setprecision(9) << sample.z ();
    o <<"]";
    return o;
}

// ---- LampControl: 

LampControl::LampControl() :
    m_power_ (0)  {

}   

LampControl::LampControl (const ::Power& intensity_,int16_t power_):
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
    if (m_intensity_ != other_.m_intensity_) {
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
    o << "intensity: " << sample.intensity ()<<", ";
    o << "power: " << sample.power ();
    o <<"]";
    return o;
}

// ---- CameraControl: 

CameraControl::CameraControl() :
    m_focus_far_ (0) ,
    m_focus_near_ (0) ,
    m_LED_ (0) ,
    m_power_ (0) ,
    m_zoom_in_ (0) ,
    m_zoom_out_ (0)  {

}   

CameraControl::CameraControl (int16_t focus_far_,int16_t focus_near_,int16_t LED_,int16_t power_,int16_t zoom_in_,int16_t zoom_out_):
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

PanAndTiltControl::PanAndTiltControl() :
    m_pan_left_ (0) ,
    m_pan_right_ (0) ,
    m_power_ (0) ,
    m_tilt_down_ (0) ,
    m_tilt_up_ (0)  {

}   

PanAndTiltControl::PanAndTiltControl (int16_t pan_left_,int16_t pan_right_,int16_t power_,int16_t tilt_down_,int16_t tilt_up_):
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

// ---- PanAndTiltPositionSubscriber: 

PanAndTiltPositionSubscriber::PanAndTiltPositionSubscriber() :
    m_pan_one_ (0.0f) ,
    m_tilt_one_ (0.0f) ,
    m_pan_two_ (0.0f) ,
    m_tilt_two_ (0.0f) ,
    m_pan_three_ (0.0f) ,
    m_tilt_three_ (0.0f) ,
    m_pan_four_ (0.0f) ,
    m_tilt_four_ (0.0f) ,
    m_pan_five_ (0.0f) ,
    m_tilt_five_ (0.0f) ,
    m_pan_six_ (0.0f) ,
    m_tilt_six_ (0.0f) ,
    m_pan_seven_ (0.0f) ,
    m_tilt_seven_ (0.0f) ,
    m_pan_eight_ (0.0f) ,
    m_tilt_eight_ (0.0f)  {

}   

PanAndTiltPositionSubscriber::PanAndTiltPositionSubscriber (float pan_one_,float tilt_one_,float pan_two_,float tilt_two_,float pan_three_,float tilt_three_,float pan_four_,float tilt_four_,float pan_five_,float tilt_five_,float pan_six_,float tilt_six_,float pan_seven_,float tilt_seven_,float pan_eight_,float tilt_eight_):
    m_pan_one_(pan_one_), 
    m_tilt_one_(tilt_one_), 
    m_pan_two_(pan_two_), 
    m_tilt_two_(tilt_two_), 
    m_pan_three_(pan_three_), 
    m_tilt_three_(tilt_three_), 
    m_pan_four_(pan_four_), 
    m_tilt_four_(tilt_four_), 
    m_pan_five_(pan_five_), 
    m_tilt_five_(tilt_five_), 
    m_pan_six_(pan_six_), 
    m_tilt_six_(tilt_six_), 
    m_pan_seven_(pan_seven_), 
    m_tilt_seven_(tilt_seven_), 
    m_pan_eight_(pan_eight_), 
    m_tilt_eight_(tilt_eight_) {
}

void PanAndTiltPositionSubscriber::swap(PanAndTiltPositionSubscriber& other_)  noexcept 
{
    using std::swap;
    swap(m_pan_one_, other_.m_pan_one_);
    swap(m_tilt_one_, other_.m_tilt_one_);
    swap(m_pan_two_, other_.m_pan_two_);
    swap(m_tilt_two_, other_.m_tilt_two_);
    swap(m_pan_three_, other_.m_pan_three_);
    swap(m_tilt_three_, other_.m_tilt_three_);
    swap(m_pan_four_, other_.m_pan_four_);
    swap(m_tilt_four_, other_.m_tilt_four_);
    swap(m_pan_five_, other_.m_pan_five_);
    swap(m_tilt_five_, other_.m_tilt_five_);
    swap(m_pan_six_, other_.m_pan_six_);
    swap(m_tilt_six_, other_.m_tilt_six_);
    swap(m_pan_seven_, other_.m_pan_seven_);
    swap(m_tilt_seven_, other_.m_tilt_seven_);
    swap(m_pan_eight_, other_.m_pan_eight_);
    swap(m_tilt_eight_, other_.m_tilt_eight_);
}  

bool PanAndTiltPositionSubscriber::operator == (const PanAndTiltPositionSubscriber& other_) const {
    if (std::fabs(m_pan_one_ - other_.m_pan_one_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_pan_one_ - other_.m_pan_one_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_tilt_one_ - other_.m_tilt_one_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_tilt_one_ - other_.m_tilt_one_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_pan_two_ - other_.m_pan_two_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_pan_two_ - other_.m_pan_two_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_tilt_two_ - other_.m_tilt_two_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_tilt_two_ - other_.m_tilt_two_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_pan_three_ - other_.m_pan_three_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_pan_three_ - other_.m_pan_three_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_tilt_three_ - other_.m_tilt_three_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_tilt_three_ - other_.m_tilt_three_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_pan_four_ - other_.m_pan_four_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_pan_four_ - other_.m_pan_four_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_tilt_four_ - other_.m_tilt_four_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_tilt_four_ - other_.m_tilt_four_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_pan_five_ - other_.m_pan_five_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_pan_five_ - other_.m_pan_five_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_tilt_five_ - other_.m_tilt_five_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_tilt_five_ - other_.m_tilt_five_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_pan_six_ - other_.m_pan_six_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_pan_six_ - other_.m_pan_six_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_tilt_six_ - other_.m_tilt_six_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_tilt_six_ - other_.m_tilt_six_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_pan_seven_ - other_.m_pan_seven_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_pan_seven_ - other_.m_pan_seven_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_tilt_seven_ - other_.m_tilt_seven_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_tilt_seven_ - other_.m_tilt_seven_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_pan_eight_ - other_.m_pan_eight_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_pan_eight_ - other_.m_pan_eight_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_tilt_eight_ - other_.m_tilt_eight_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_tilt_eight_ - other_.m_tilt_eight_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    return true;
}

bool PanAndTiltPositionSubscriber::operator != (const PanAndTiltPositionSubscriber& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const PanAndTiltPositionSubscriber& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "pan_one: " << std::setprecision(9) << sample.pan_one ()<<", ";
    o << "tilt_one: " << std::setprecision(9) << sample.tilt_one ()<<", ";
    o << "pan_two: " << std::setprecision(9) << sample.pan_two ()<<", ";
    o << "tilt_two: " << std::setprecision(9) << sample.tilt_two ()<<", ";
    o << "pan_three: " << std::setprecision(9) << sample.pan_three ()<<", ";
    o << "tilt_three: " << std::setprecision(9) << sample.tilt_three ()<<", ";
    o << "pan_four: " << std::setprecision(9) << sample.pan_four ()<<", ";
    o << "tilt_four: " << std::setprecision(9) << sample.tilt_four ()<<", ";
    o << "pan_five: " << std::setprecision(9) << sample.pan_five ()<<", ";
    o << "tilt_five: " << std::setprecision(9) << sample.tilt_five ()<<", ";
    o << "pan_six: " << std::setprecision(9) << sample.pan_six ()<<", ";
    o << "tilt_six: " << std::setprecision(9) << sample.tilt_six ()<<", ";
    o << "pan_seven: " << std::setprecision(9) << sample.pan_seven ()<<", ";
    o << "tilt_seven: " << std::setprecision(9) << sample.tilt_seven ()<<", ";
    o << "pan_eight: " << std::setprecision(9) << sample.pan_eight ()<<", ";
    o << "tilt_eight: " << std::setprecision(9) << sample.tilt_eight ();
    o <<"]";
    return o;
}

// ---- Quaternion: 

Quaternion::Quaternion() :
    m_x_ (0.0f) ,
    m_y_ (0.0f) ,
    m_z_ (0.0f) ,
    m_w_ (0.0f)  {

}   

Quaternion::Quaternion (float x_,float y_,float z_,float w_):
    m_x_(x_), 
    m_y_(y_), 
    m_z_(z_), 
    m_w_(w_) {
}

void Quaternion::swap(Quaternion& other_)  noexcept 
{
    using std::swap;
    swap(m_x_, other_.m_x_);
    swap(m_y_, other_.m_y_);
    swap(m_z_, other_.m_z_);
    swap(m_w_, other_.m_w_);
}  

bool Quaternion::operator == (const Quaternion& other_) const {
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
    if (std::fabs(m_w_ - other_.m_w_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_w_ - other_.m_w_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    return true;
}

bool Quaternion::operator != (const Quaternion& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const Quaternion& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "x: " << std::setprecision(9) << sample.x ()<<", ";
    o << "y: " << std::setprecision(9) << sample.y ()<<", ";
    o << "z: " << std::setprecision(9) << sample.z ()<<", ";
    o << "w: " << std::setprecision(9) << sample.w ();
    o <<"]";
    return o;
}

// ---- PanAndTiltPositionPublisher: 

PanAndTiltPositionPublisher::PanAndTiltPositionPublisher() :
    m_panandtiltID_ (0u)  {

}   

PanAndTiltPositionPublisher::PanAndTiltPositionPublisher (uint32_t panandtiltID_,const ::Quaternion& angle_):
    m_panandtiltID_(panandtiltID_), 
    m_angle_(angle_) {
}

void PanAndTiltPositionPublisher::swap(PanAndTiltPositionPublisher& other_)  noexcept 
{
    using std::swap;
    swap(m_panandtiltID_, other_.m_panandtiltID_);
    swap(m_angle_, other_.m_angle_);
}  

bool PanAndTiltPositionPublisher::operator == (const PanAndTiltPositionPublisher& other_) const {
    if (m_panandtiltID_ != other_.m_panandtiltID_) {
        return false;
    }
    if (m_angle_ != other_.m_angle_) {
        return false;
    }
    return true;
}

bool PanAndTiltPositionPublisher::operator != (const PanAndTiltPositionPublisher& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const PanAndTiltPositionPublisher& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "panandtiltID: " << sample.panandtiltID ()<<", ";
    o << "angle: " << sample.angle ();
    o <<"]";
    return o;
}

// ---- PanAndTiltTransformPublisher: 

PanAndTiltTransformPublisher::PanAndTiltTransformPublisher() :
    m_panandtiltID_ (0u) ,
    m_parent_frame_ ("") ,
    m_child_frame_ ("") ,
    m_timestamp_ (0ll)  {

}   

PanAndTiltTransformPublisher::PanAndTiltTransformPublisher (uint32_t panandtiltID_,const ::Quaternion& angle_,const std::string& parent_frame_,const std::string& child_frame_,int64_t timestamp_):
    m_panandtiltID_(panandtiltID_), 
    m_angle_(angle_), 
    m_parent_frame_(parent_frame_), 
    m_child_frame_(child_frame_), 
    m_timestamp_(timestamp_) {
}

void PanAndTiltTransformPublisher::swap(PanAndTiltTransformPublisher& other_)  noexcept 
{
    using std::swap;
    swap(m_panandtiltID_, other_.m_panandtiltID_);
    swap(m_angle_, other_.m_angle_);
    swap(m_parent_frame_, other_.m_parent_frame_);
    swap(m_child_frame_, other_.m_child_frame_);
    swap(m_timestamp_, other_.m_timestamp_);
}  

bool PanAndTiltTransformPublisher::operator == (const PanAndTiltTransformPublisher& other_) const {
    if (m_panandtiltID_ != other_.m_panandtiltID_) {
        return false;
    }
    if (m_angle_ != other_.m_angle_) {
        return false;
    }
    if (m_parent_frame_ != other_.m_parent_frame_) {
        return false;
    }
    if (m_child_frame_ != other_.m_child_frame_) {
        return false;
    }
    if (m_timestamp_ != other_.m_timestamp_) {
        return false;
    }
    return true;
}

bool PanAndTiltTransformPublisher::operator != (const PanAndTiltTransformPublisher& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const PanAndTiltTransformPublisher& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "panandtiltID: " << sample.panandtiltID ()<<", ";
    o << "angle: " << sample.angle ()<<", ";
    o << "parent_frame: " << sample.parent_frame ()<<", ";
    o << "child_frame: " << sample.child_frame ()<<", ";
    o << "timestamp: " << sample.timestamp ();
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
        struct native_type_code< ::Power > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Power_g_tc_members[16]=
                {

                    {
                        (char *)"intensity_one",/* Member name */
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
                        (char *)"intensity_two",/* Member name */
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
                        (char *)"intensity_three",/* Member name */
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
                        (char *)"intensity_four",/* Member name */
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
                        (char *)"intensity_five",/* Member name */
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
                        (char *)"intensity_six",/* Member name */
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
                    }, 
                    {
                        (char *)"intensity_seven",/* Member name */
                        {
                            6,/* Representation ID */
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
                        (char *)"intensity_eight",/* Member name */
                        {
                            7,/* Representation ID */
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
                        (char *)"intensity_nine",/* Member name */
                        {
                            8,/* Representation ID */
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
                        (char *)"intensity_ten",/* Member name */
                        {
                            9,/* Representation ID */
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
                        (char *)"intensity_eleven",/* Member name */
                        {
                            10,/* Representation ID */
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
                        (char *)"intensity_twelve",/* Member name */
                        {
                            11,/* Representation ID */
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
                        (char *)"intensity_thirteen",/* Member name */
                        {
                            12,/* Representation ID */
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
                        (char *)"intensity_fourteen",/* Member name */
                        {
                            13,/* Representation ID */
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
                        (char *)"intensity_fifteen",/* Member name */
                        {
                            14,/* Representation ID */
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
                        (char *)"intensity_sixteen",/* Member name */
                        {
                            15,/* Representation ID */
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
                        16, /* Number of members */
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

                Power_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Power_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Power_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Power_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Power_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Power_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Power_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Power_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Power_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Power_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Power_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Power_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Power_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Power_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Power_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Power_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                /* Initialize the values for member annotations. */
                Power_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[0]._annotations._defaultValue._u.float_value = 0.0f;
                Power_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Power_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Power_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[1]._annotations._defaultValue._u.float_value = 0.0f;
                Power_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[1]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Power_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[1]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Power_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[2]._annotations._defaultValue._u.float_value = 0.0f;
                Power_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[2]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Power_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[2]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Power_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[3]._annotations._defaultValue._u.float_value = 0.0f;
                Power_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[3]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Power_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[3]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Power_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[4]._annotations._defaultValue._u.float_value = 0.0f;
                Power_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[4]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Power_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[4]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Power_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[5]._annotations._defaultValue._u.float_value = 0.0f;
                Power_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[5]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Power_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[5]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Power_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[6]._annotations._defaultValue._u.float_value = 0.0f;
                Power_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[6]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Power_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[6]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Power_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[7]._annotations._defaultValue._u.float_value = 0.0f;
                Power_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[7]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Power_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[7]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Power_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[8]._annotations._defaultValue._u.float_value = 0.0f;
                Power_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[8]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Power_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[8]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Power_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[9]._annotations._defaultValue._u.float_value = 0.0f;
                Power_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[9]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Power_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[9]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Power_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[10]._annotations._defaultValue._u.float_value = 0.0f;
                Power_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[10]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Power_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[10]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Power_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[11]._annotations._defaultValue._u.float_value = 0.0f;
                Power_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[11]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Power_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[11]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Power_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[12]._annotations._defaultValue._u.float_value = 0.0f;
                Power_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[12]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Power_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[12]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Power_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[13]._annotations._defaultValue._u.float_value = 0.0f;
                Power_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[13]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Power_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[13]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Power_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[14]._annotations._defaultValue._u.float_value = 0.0f;
                Power_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[14]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Power_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[14]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Power_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[15]._annotations._defaultValue._u.float_value = 0.0f;
                Power_g_tc_members[15]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[15]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Power_g_tc_members[15]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Power_g_tc_members[15]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                Power_g_tc._data._sampleAccessInfo = sample_access_info();
                Power_g_tc._data._typePlugin = type_plugin_info();    

                return &Power_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::Power *sample;

                static RTIXCdrMemberAccessInfo Power_g_memberAccessInfos[16] =
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
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity_one() - (char *)sample);

                Power_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity_two() - (char *)sample);

                Power_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity_three() - (char *)sample);

                Power_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity_four() - (char *)sample);

                Power_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity_five() - (char *)sample);

                Power_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity_six() - (char *)sample);

                Power_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity_seven() - (char *)sample);

                Power_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity_eight() - (char *)sample);

                Power_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity_nine() - (char *)sample);

                Power_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity_ten() - (char *)sample);

                Power_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity_eleven() - (char *)sample);

                Power_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity_twelve() - (char *)sample);

                Power_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity_thirteen() - (char *)sample);

                Power_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity_fourteen() - (char *)sample);

                Power_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity_fifteen() - (char *)sample);

                Power_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->intensity_sixteen() - (char *)sample);

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
                        (char *)"cameraID",/* Member name */
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
                (RTIXCdrUnsignedLong) ((char *)&sample->cameraID() - (char *)sample);

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

                static DDS_TypeCode_Member PanAndTiltControlCustom_g_tc_members[4]=
                {

                    {
                        (char *)"panandtiltID",/* Member name */
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
                        (char *)"x",/* Member name */
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
                        (char *)"y",/* Member name */
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
                        (char *)"z",/* Member name */
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
                        4, /* Number of members */
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

                PanAndTiltControlCustom_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                PanAndTiltControlCustom_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltControlCustom_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltControlCustom_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                /* Initialize the values for member annotations. */
                PanAndTiltControlCustom_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                PanAndTiltControlCustom_g_tc_members[0]._annotations._defaultValue._u.ulong_value = 0u;
                PanAndTiltControlCustom_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                PanAndTiltControlCustom_g_tc_members[0]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                PanAndTiltControlCustom_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                PanAndTiltControlCustom_g_tc_members[0]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;
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
                PanAndTiltControlCustom_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControlCustom_g_tc_members[3]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltControlCustom_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControlCustom_g_tc_members[3]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltControlCustom_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltControlCustom_g_tc_members[3]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                PanAndTiltControlCustom_g_tc._data._sampleAccessInfo = sample_access_info();
                PanAndTiltControlCustom_g_tc._data._typePlugin = type_plugin_info();    

                return &PanAndTiltControlCustom_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::PanAndTiltControlCustom *sample;

                static RTIXCdrMemberAccessInfo PanAndTiltControlCustom_g_memberAccessInfos[4] =
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
                (RTIXCdrUnsignedLong) ((char *)&sample->panandtiltID() - (char *)sample);

                PanAndTiltControlCustom_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->x() - (char *)sample);

                PanAndTiltControlCustom_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->y() - (char *)sample);

                PanAndTiltControlCustom_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
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

                LampControl_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::Power>::get().native();
                LampControl_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                /* Initialize the values for member annotations. */
                LampControl_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_SHORT;
                LampControl_g_tc_members[1]._annotations._defaultValue._u.short_value = 0;
                LampControl_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_SHORT;
                LampControl_g_tc_members[1]._annotations._minValue._u.short_value = RTIXCdrShort_MIN;
                LampControl_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_SHORT;
                LampControl_g_tc_members[1]._annotations._maxValue._u.short_value = RTIXCdrShort_MAX;

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

                CameraControl_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
                CameraControl_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
                CameraControl_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
                CameraControl_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
                CameraControl_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
                CameraControl_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                /* Initialize the values for member annotations. */
                CameraControl_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[0]._annotations._defaultValue._u.short_value = 0;
                CameraControl_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[0]._annotations._minValue._u.short_value = RTIXCdrShort_MIN;
                CameraControl_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[0]._annotations._maxValue._u.short_value = RTIXCdrShort_MAX;
                CameraControl_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[1]._annotations._defaultValue._u.short_value = 0;
                CameraControl_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[1]._annotations._minValue._u.short_value = RTIXCdrShort_MIN;
                CameraControl_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[1]._annotations._maxValue._u.short_value = RTIXCdrShort_MAX;
                CameraControl_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[2]._annotations._defaultValue._u.short_value = 0;
                CameraControl_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[2]._annotations._minValue._u.short_value = RTIXCdrShort_MIN;
                CameraControl_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[2]._annotations._maxValue._u.short_value = RTIXCdrShort_MAX;
                CameraControl_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[3]._annotations._defaultValue._u.short_value = 0;
                CameraControl_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[3]._annotations._minValue._u.short_value = RTIXCdrShort_MIN;
                CameraControl_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[3]._annotations._maxValue._u.short_value = RTIXCdrShort_MAX;
                CameraControl_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[4]._annotations._defaultValue._u.short_value = 0;
                CameraControl_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[4]._annotations._minValue._u.short_value = RTIXCdrShort_MIN;
                CameraControl_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[4]._annotations._maxValue._u.short_value = RTIXCdrShort_MAX;
                CameraControl_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[5]._annotations._defaultValue._u.short_value = 0;
                CameraControl_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[5]._annotations._minValue._u.short_value = RTIXCdrShort_MIN;
                CameraControl_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_SHORT;
                CameraControl_g_tc_members[5]._annotations._maxValue._u.short_value = RTIXCdrShort_MAX;

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

                PanAndTiltControl_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
                PanAndTiltControl_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
                PanAndTiltControl_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
                PanAndTiltControl_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
                PanAndTiltControl_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                /* Initialize the values for member annotations. */
                PanAndTiltControl_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_SHORT;
                PanAndTiltControl_g_tc_members[0]._annotations._defaultValue._u.short_value = 0;
                PanAndTiltControl_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_SHORT;
                PanAndTiltControl_g_tc_members[0]._annotations._minValue._u.short_value = RTIXCdrShort_MIN;
                PanAndTiltControl_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_SHORT;
                PanAndTiltControl_g_tc_members[0]._annotations._maxValue._u.short_value = RTIXCdrShort_MAX;
                PanAndTiltControl_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_SHORT;
                PanAndTiltControl_g_tc_members[1]._annotations._defaultValue._u.short_value = 0;
                PanAndTiltControl_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_SHORT;
                PanAndTiltControl_g_tc_members[1]._annotations._minValue._u.short_value = RTIXCdrShort_MIN;
                PanAndTiltControl_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_SHORT;
                PanAndTiltControl_g_tc_members[1]._annotations._maxValue._u.short_value = RTIXCdrShort_MAX;
                PanAndTiltControl_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_SHORT;
                PanAndTiltControl_g_tc_members[2]._annotations._defaultValue._u.short_value = 0;
                PanAndTiltControl_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_SHORT;
                PanAndTiltControl_g_tc_members[2]._annotations._minValue._u.short_value = RTIXCdrShort_MIN;
                PanAndTiltControl_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_SHORT;
                PanAndTiltControl_g_tc_members[2]._annotations._maxValue._u.short_value = RTIXCdrShort_MAX;
                PanAndTiltControl_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_SHORT;
                PanAndTiltControl_g_tc_members[3]._annotations._defaultValue._u.short_value = 0;
                PanAndTiltControl_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_SHORT;
                PanAndTiltControl_g_tc_members[3]._annotations._minValue._u.short_value = RTIXCdrShort_MIN;
                PanAndTiltControl_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_SHORT;
                PanAndTiltControl_g_tc_members[3]._annotations._maxValue._u.short_value = RTIXCdrShort_MAX;
                PanAndTiltControl_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_SHORT;
                PanAndTiltControl_g_tc_members[4]._annotations._defaultValue._u.short_value = 0;
                PanAndTiltControl_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_SHORT;
                PanAndTiltControl_g_tc_members[4]._annotations._minValue._u.short_value = RTIXCdrShort_MIN;
                PanAndTiltControl_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_SHORT;
                PanAndTiltControl_g_tc_members[4]._annotations._maxValue._u.short_value = RTIXCdrShort_MAX;

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

        template<>
        struct native_type_code< ::PanAndTiltPositionSubscriber > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PanAndTiltPositionSubscriber_g_tc_members[16]=
                {

                    {
                        (char *)"pan_one",/* Member name */
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
                        (char *)"tilt_one",/* Member name */
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
                        (char *)"pan_two",/* Member name */
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
                        (char *)"tilt_two",/* Member name */
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
                        (char *)"pan_three",/* Member name */
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
                        (char *)"tilt_three",/* Member name */
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
                    }, 
                    {
                        (char *)"pan_four",/* Member name */
                        {
                            6,/* Representation ID */
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
                        (char *)"tilt_four",/* Member name */
                        {
                            7,/* Representation ID */
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
                        (char *)"pan_five",/* Member name */
                        {
                            8,/* Representation ID */
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
                        (char *)"tilt_five",/* Member name */
                        {
                            9,/* Representation ID */
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
                        (char *)"pan_six",/* Member name */
                        {
                            10,/* Representation ID */
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
                        (char *)"tilt_six",/* Member name */
                        {
                            11,/* Representation ID */
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
                        (char *)"pan_seven",/* Member name */
                        {
                            12,/* Representation ID */
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
                        (char *)"tilt_seven",/* Member name */
                        {
                            13,/* Representation ID */
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
                        (char *)"pan_eight",/* Member name */
                        {
                            14,/* Representation ID */
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
                        (char *)"tilt_eight",/* Member name */
                        {
                            15,/* Representation ID */
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

                static DDS_TypeCode PanAndTiltPositionSubscriber_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"PanAndTiltPositionSubscriber", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        16, /* Number of members */
                        PanAndTiltPositionSubscriber_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PanAndTiltPositionSubscriber*/

                if (is_initialized) {
                    return &PanAndTiltPositionSubscriber_g_tc;
                }

                is_initialized = RTI_TRUE;

                PanAndTiltPositionSubscriber_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PanAndTiltPositionSubscriber_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltPositionSubscriber_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltPositionSubscriber_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltPositionSubscriber_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltPositionSubscriber_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltPositionSubscriber_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltPositionSubscriber_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltPositionSubscriber_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltPositionSubscriber_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltPositionSubscriber_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltPositionSubscriber_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltPositionSubscriber_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltPositionSubscriber_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltPositionSubscriber_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltPositionSubscriber_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                PanAndTiltPositionSubscriber_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                /* Initialize the values for member annotations. */
                PanAndTiltPositionSubscriber_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[0]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltPositionSubscriber_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltPositionSubscriber_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltPositionSubscriber_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[1]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltPositionSubscriber_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[1]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltPositionSubscriber_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[1]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltPositionSubscriber_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[2]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltPositionSubscriber_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[2]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltPositionSubscriber_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[2]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltPositionSubscriber_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[3]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltPositionSubscriber_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[3]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltPositionSubscriber_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[3]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltPositionSubscriber_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[4]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltPositionSubscriber_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[4]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltPositionSubscriber_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[4]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltPositionSubscriber_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[5]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltPositionSubscriber_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[5]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltPositionSubscriber_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[5]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltPositionSubscriber_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[6]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltPositionSubscriber_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[6]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltPositionSubscriber_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[6]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltPositionSubscriber_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[7]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltPositionSubscriber_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[7]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltPositionSubscriber_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[7]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltPositionSubscriber_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[8]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltPositionSubscriber_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[8]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltPositionSubscriber_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[8]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltPositionSubscriber_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[9]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltPositionSubscriber_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[9]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltPositionSubscriber_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[9]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltPositionSubscriber_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[10]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltPositionSubscriber_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[10]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltPositionSubscriber_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[10]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltPositionSubscriber_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[11]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltPositionSubscriber_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[11]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltPositionSubscriber_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[11]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltPositionSubscriber_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[12]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltPositionSubscriber_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[12]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltPositionSubscriber_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[12]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltPositionSubscriber_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[13]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltPositionSubscriber_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[13]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltPositionSubscriber_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[13]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltPositionSubscriber_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[14]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltPositionSubscriber_g_tc_members[14]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[14]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltPositionSubscriber_g_tc_members[14]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[14]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                PanAndTiltPositionSubscriber_g_tc_members[15]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[15]._annotations._defaultValue._u.float_value = 0.0f;
                PanAndTiltPositionSubscriber_g_tc_members[15]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[15]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                PanAndTiltPositionSubscriber_g_tc_members[15]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                PanAndTiltPositionSubscriber_g_tc_members[15]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                PanAndTiltPositionSubscriber_g_tc._data._sampleAccessInfo = sample_access_info();
                PanAndTiltPositionSubscriber_g_tc._data._typePlugin = type_plugin_info();    

                return &PanAndTiltPositionSubscriber_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::PanAndTiltPositionSubscriber *sample;

                static RTIXCdrMemberAccessInfo PanAndTiltPositionSubscriber_g_memberAccessInfos[16] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PanAndTiltPositionSubscriber_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PanAndTiltPositionSubscriber_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::PanAndTiltPositionSubscriber);
                if (sample == NULL) {
                    return NULL;
                }

                PanAndTiltPositionSubscriber_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pan_one() - (char *)sample);

                PanAndTiltPositionSubscriber_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tilt_one() - (char *)sample);

                PanAndTiltPositionSubscriber_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pan_two() - (char *)sample);

                PanAndTiltPositionSubscriber_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tilt_two() - (char *)sample);

                PanAndTiltPositionSubscriber_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pan_three() - (char *)sample);

                PanAndTiltPositionSubscriber_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tilt_three() - (char *)sample);

                PanAndTiltPositionSubscriber_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pan_four() - (char *)sample);

                PanAndTiltPositionSubscriber_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tilt_four() - (char *)sample);

                PanAndTiltPositionSubscriber_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pan_five() - (char *)sample);

                PanAndTiltPositionSubscriber_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tilt_five() - (char *)sample);

                PanAndTiltPositionSubscriber_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pan_six() - (char *)sample);

                PanAndTiltPositionSubscriber_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tilt_six() - (char *)sample);

                PanAndTiltPositionSubscriber_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pan_seven() - (char *)sample);

                PanAndTiltPositionSubscriber_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tilt_seven() - (char *)sample);

                PanAndTiltPositionSubscriber_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pan_eight() - (char *)sample);

                PanAndTiltPositionSubscriber_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tilt_eight() - (char *)sample);

                PanAndTiltPositionSubscriber_g_sampleAccessInfo.memberAccessInfos = 
                PanAndTiltPositionSubscriber_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::PanAndTiltPositionSubscriber);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PanAndTiltPositionSubscriber_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PanAndTiltPositionSubscriber_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PanAndTiltPositionSubscriber_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PanAndTiltPositionSubscriber_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::PanAndTiltPositionSubscriber >;

                PanAndTiltPositionSubscriber_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PanAndTiltPositionSubscriber_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PanAndTiltPositionSubscriber_g_typePlugin = 
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

                return &PanAndTiltPositionSubscriber_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::PanAndTiltPositionSubscriber >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::PanAndTiltPositionSubscriber >::get())));
        }

        template<>
        struct native_type_code< ::Quaternion > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Quaternion_g_tc_members[4]=
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
                    }, 
                    {
                        (char *)"w",/* Member name */
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

                static DDS_TypeCode Quaternion_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Quaternion", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        Quaternion_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Quaternion*/

                if (is_initialized) {
                    return &Quaternion_g_tc;
                }

                is_initialized = RTI_TRUE;

                Quaternion_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Quaternion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Quaternion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Quaternion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                Quaternion_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                /* Initialize the values for member annotations. */
                Quaternion_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Quaternion_g_tc_members[0]._annotations._defaultValue._u.float_value = 0.0f;
                Quaternion_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Quaternion_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Quaternion_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Quaternion_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Quaternion_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Quaternion_g_tc_members[1]._annotations._defaultValue._u.float_value = 0.0f;
                Quaternion_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Quaternion_g_tc_members[1]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Quaternion_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Quaternion_g_tc_members[1]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Quaternion_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Quaternion_g_tc_members[2]._annotations._defaultValue._u.float_value = 0.0f;
                Quaternion_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Quaternion_g_tc_members[2]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Quaternion_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Quaternion_g_tc_members[2]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                Quaternion_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                Quaternion_g_tc_members[3]._annotations._defaultValue._u.float_value = 0.0f;
                Quaternion_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                Quaternion_g_tc_members[3]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                Quaternion_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                Quaternion_g_tc_members[3]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                Quaternion_g_tc._data._sampleAccessInfo = sample_access_info();
                Quaternion_g_tc._data._typePlugin = type_plugin_info();    

                return &Quaternion_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::Quaternion *sample;

                static RTIXCdrMemberAccessInfo Quaternion_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Quaternion_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Quaternion_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::Quaternion);
                if (sample == NULL) {
                    return NULL;
                }

                Quaternion_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->x() - (char *)sample);

                Quaternion_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->y() - (char *)sample);

                Quaternion_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->z() - (char *)sample);

                Quaternion_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->w() - (char *)sample);

                Quaternion_g_sampleAccessInfo.memberAccessInfos = 
                Quaternion_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::Quaternion);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Quaternion_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Quaternion_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Quaternion_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Quaternion_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::Quaternion >;

                Quaternion_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Quaternion_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Quaternion_g_typePlugin = 
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

                return &Quaternion_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::Quaternion >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::Quaternion >::get())));
        }

        template<>
        struct native_type_code< ::PanAndTiltPositionPublisher > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PanAndTiltPositionPublisher_g_tc_members[2]=
                {

                    {
                        (char *)"panandtiltID",/* Member name */
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
                        (char *)"angle",/* Member name */
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

                static DDS_TypeCode PanAndTiltPositionPublisher_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"PanAndTiltPositionPublisher", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PanAndTiltPositionPublisher_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PanAndTiltPositionPublisher*/

                if (is_initialized) {
                    return &PanAndTiltPositionPublisher_g_tc;
                }

                is_initialized = RTI_TRUE;

                PanAndTiltPositionPublisher_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PanAndTiltPositionPublisher_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                PanAndTiltPositionPublisher_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::Quaternion>::get().native();

                /* Initialize the values for member annotations. */
                PanAndTiltPositionPublisher_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                PanAndTiltPositionPublisher_g_tc_members[0]._annotations._defaultValue._u.ulong_value = 0u;
                PanAndTiltPositionPublisher_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                PanAndTiltPositionPublisher_g_tc_members[0]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                PanAndTiltPositionPublisher_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                PanAndTiltPositionPublisher_g_tc_members[0]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                PanAndTiltPositionPublisher_g_tc._data._sampleAccessInfo = sample_access_info();
                PanAndTiltPositionPublisher_g_tc._data._typePlugin = type_plugin_info();    

                return &PanAndTiltPositionPublisher_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::PanAndTiltPositionPublisher *sample;

                static RTIXCdrMemberAccessInfo PanAndTiltPositionPublisher_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PanAndTiltPositionPublisher_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PanAndTiltPositionPublisher_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::PanAndTiltPositionPublisher);
                if (sample == NULL) {
                    return NULL;
                }

                PanAndTiltPositionPublisher_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->panandtiltID() - (char *)sample);

                PanAndTiltPositionPublisher_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->angle() - (char *)sample);

                PanAndTiltPositionPublisher_g_sampleAccessInfo.memberAccessInfos = 
                PanAndTiltPositionPublisher_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::PanAndTiltPositionPublisher);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PanAndTiltPositionPublisher_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PanAndTiltPositionPublisher_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PanAndTiltPositionPublisher_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PanAndTiltPositionPublisher_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::PanAndTiltPositionPublisher >;

                PanAndTiltPositionPublisher_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PanAndTiltPositionPublisher_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PanAndTiltPositionPublisher_g_typePlugin = 
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

                return &PanAndTiltPositionPublisher_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::PanAndTiltPositionPublisher >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::PanAndTiltPositionPublisher >::get())));
        }

        template<>
        struct native_type_code< ::PanAndTiltTransformPublisher > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PanAndTiltTransformPublisher_g_tc_parent_frame_string;
                static DDS_TypeCode PanAndTiltTransformPublisher_g_tc_child_frame_string;

                static DDS_TypeCode_Member PanAndTiltTransformPublisher_g_tc_members[5]=
                {

                    {
                        (char *)"panandtiltID",/* Member name */
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
                        (char *)"angle",/* Member name */
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
                        (char *)"parent_frame",/* Member name */
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
                        (char *)"child_frame",/* Member name */
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
                        (char *)"timestamp",/* Member name */
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

                static DDS_TypeCode PanAndTiltTransformPublisher_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"PanAndTiltTransformPublisher", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        PanAndTiltTransformPublisher_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PanAndTiltTransformPublisher*/

                if (is_initialized) {
                    return &PanAndTiltTransformPublisher_g_tc;
                }

                is_initialized = RTI_TRUE;

                PanAndTiltTransformPublisher_g_tc_parent_frame_string = initialize_string_typecode((255L));
                PanAndTiltTransformPublisher_g_tc_child_frame_string = initialize_string_typecode((255L));

                PanAndTiltTransformPublisher_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PanAndTiltTransformPublisher_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                PanAndTiltTransformPublisher_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::Quaternion>::get().native();
                PanAndTiltTransformPublisher_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&PanAndTiltTransformPublisher_g_tc_parent_frame_string;
                PanAndTiltTransformPublisher_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&PanAndTiltTransformPublisher_g_tc_child_frame_string;
                PanAndTiltTransformPublisher_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

                /* Initialize the values for member annotations. */
                PanAndTiltTransformPublisher_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                PanAndTiltTransformPublisher_g_tc_members[0]._annotations._defaultValue._u.ulong_value = 0u;
                PanAndTiltTransformPublisher_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                PanAndTiltTransformPublisher_g_tc_members[0]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                PanAndTiltTransformPublisher_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                PanAndTiltTransformPublisher_g_tc_members[0]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;
                PanAndTiltTransformPublisher_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                PanAndTiltTransformPublisher_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                PanAndTiltTransformPublisher_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                PanAndTiltTransformPublisher_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                PanAndTiltTransformPublisher_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
                PanAndTiltTransformPublisher_g_tc_members[4]._annotations._defaultValue._u.long_long_value = 0ll;
                PanAndTiltTransformPublisher_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
                PanAndTiltTransformPublisher_g_tc_members[4]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
                PanAndTiltTransformPublisher_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
                PanAndTiltTransformPublisher_g_tc_members[4]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;

                PanAndTiltTransformPublisher_g_tc._data._sampleAccessInfo = sample_access_info();
                PanAndTiltTransformPublisher_g_tc._data._typePlugin = type_plugin_info();    

                return &PanAndTiltTransformPublisher_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::PanAndTiltTransformPublisher *sample;

                static RTIXCdrMemberAccessInfo PanAndTiltTransformPublisher_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PanAndTiltTransformPublisher_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PanAndTiltTransformPublisher_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::PanAndTiltTransformPublisher);
                if (sample == NULL) {
                    return NULL;
                }

                PanAndTiltTransformPublisher_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->panandtiltID() - (char *)sample);

                PanAndTiltTransformPublisher_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->angle() - (char *)sample);

                PanAndTiltTransformPublisher_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->parent_frame() - (char *)sample);

                PanAndTiltTransformPublisher_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->child_frame() - (char *)sample);

                PanAndTiltTransformPublisher_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timestamp() - (char *)sample);

                PanAndTiltTransformPublisher_g_sampleAccessInfo.memberAccessInfos = 
                PanAndTiltTransformPublisher_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::PanAndTiltTransformPublisher);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PanAndTiltTransformPublisher_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PanAndTiltTransformPublisher_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PanAndTiltTransformPublisher_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PanAndTiltTransformPublisher_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::PanAndTiltTransformPublisher >;

                PanAndTiltTransformPublisher_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PanAndTiltTransformPublisher_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PanAndTiltTransformPublisher_g_typePlugin = 
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

                return &PanAndTiltTransformPublisher_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::PanAndTiltTransformPublisher >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::PanAndTiltTransformPublisher >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
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
            sample.intensity_one(0.0f);
            sample.intensity_two(0.0f);
            sample.intensity_three(0.0f);
            sample.intensity_four(0.0f);
            sample.intensity_five(0.0f);
            sample.intensity_six(0.0f);
            sample.intensity_seven(0.0f);
            sample.intensity_eight(0.0f);
            sample.intensity_nine(0.0f);
            sample.intensity_ten(0.0f);
            sample.intensity_eleven(0.0f);
            sample.intensity_twelve(0.0f);
            sample.intensity_thirteen(0.0f);
            sample.intensity_fourteen(0.0f);
            sample.intensity_fifteen(0.0f);
            sample.intensity_sixteen(0.0f);
        }

        void topic_type_support< ::Power >::allocate_sample(::Power& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
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
            sample.cameraID(0u);
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
            sample.panandtiltID(0u);
            sample.x(0.0f);
            sample.y(0.0f);
            sample.z(0.0f);
        }

        void topic_type_support< ::PanAndTiltControlCustom >::allocate_sample(::PanAndTiltControlCustom& sample, int, int) 
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
            ::rti::topic::reset_sample(sample.intensity());
            sample.power(0);
        }

        void topic_type_support< ::LampControl >::allocate_sample(::LampControl& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.intensity(),  -1, -1);
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
            sample.focus_far(0);
            sample.focus_near(0);
            sample.LED(0);
            sample.power(0);
            sample.zoom_in(0);
            sample.zoom_out(0);
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
            sample.pan_left(0);
            sample.pan_right(0);
            sample.power(0);
            sample.tilt_down(0);
            sample.tilt_up(0);
        }

        void topic_type_support< ::PanAndTiltControl >::allocate_sample(::PanAndTiltControl& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
        void topic_type_support< ::PanAndTiltPositionSubscriber >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::PanAndTiltPositionSubscriberPlugin_new,
                ::PanAndTiltPositionSubscriberPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::PanAndTiltPositionSubscriber >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::PanAndTiltPositionSubscriber& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PanAndTiltPositionSubscriberPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PanAndTiltPositionSubscriberPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::PanAndTiltPositionSubscriber >::from_cdr_buffer(::PanAndTiltPositionSubscriber& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PanAndTiltPositionSubscriberPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::PanAndTiltPositionSubscriber from cdr buffer");
        }

        void topic_type_support< ::PanAndTiltPositionSubscriber >::reset_sample(::PanAndTiltPositionSubscriber& sample) 
        {
            sample.pan_one(0.0f);
            sample.tilt_one(0.0f);
            sample.pan_two(0.0f);
            sample.tilt_two(0.0f);
            sample.pan_three(0.0f);
            sample.tilt_three(0.0f);
            sample.pan_four(0.0f);
            sample.tilt_four(0.0f);
            sample.pan_five(0.0f);
            sample.tilt_five(0.0f);
            sample.pan_six(0.0f);
            sample.tilt_six(0.0f);
            sample.pan_seven(0.0f);
            sample.tilt_seven(0.0f);
            sample.pan_eight(0.0f);
            sample.tilt_eight(0.0f);
        }

        void topic_type_support< ::PanAndTiltPositionSubscriber >::allocate_sample(::PanAndTiltPositionSubscriber& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
        void topic_type_support< ::Quaternion >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::QuaternionPlugin_new,
                ::QuaternionPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::Quaternion >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::Quaternion& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = QuaternionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = QuaternionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::Quaternion >::from_cdr_buffer(::Quaternion& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = QuaternionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::Quaternion from cdr buffer");
        }

        void topic_type_support< ::Quaternion >::reset_sample(::Quaternion& sample) 
        {
            sample.x(0.0f);
            sample.y(0.0f);
            sample.z(0.0f);
            sample.w(0.0f);
        }

        void topic_type_support< ::Quaternion >::allocate_sample(::Quaternion& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
        void topic_type_support< ::PanAndTiltPositionPublisher >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::PanAndTiltPositionPublisherPlugin_new,
                ::PanAndTiltPositionPublisherPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::PanAndTiltPositionPublisher >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::PanAndTiltPositionPublisher& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PanAndTiltPositionPublisherPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PanAndTiltPositionPublisherPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::PanAndTiltPositionPublisher >::from_cdr_buffer(::PanAndTiltPositionPublisher& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PanAndTiltPositionPublisherPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::PanAndTiltPositionPublisher from cdr buffer");
        }

        void topic_type_support< ::PanAndTiltPositionPublisher >::reset_sample(::PanAndTiltPositionPublisher& sample) 
        {
            sample.panandtiltID(0u);
            ::rti::topic::reset_sample(sample.angle());
        }

        void topic_type_support< ::PanAndTiltPositionPublisher >::allocate_sample(::PanAndTiltPositionPublisher& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.angle(),  -1, -1);
        }
        void topic_type_support< ::PanAndTiltTransformPublisher >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::PanAndTiltTransformPublisherPlugin_new,
                ::PanAndTiltTransformPublisherPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::PanAndTiltTransformPublisher >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::PanAndTiltTransformPublisher& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PanAndTiltTransformPublisherPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PanAndTiltTransformPublisherPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::PanAndTiltTransformPublisher >::from_cdr_buffer(::PanAndTiltTransformPublisher& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PanAndTiltTransformPublisherPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::PanAndTiltTransformPublisher from cdr buffer");
        }

        void topic_type_support< ::PanAndTiltTransformPublisher >::reset_sample(::PanAndTiltTransformPublisher& sample) 
        {
            sample.panandtiltID(0u);
            ::rti::topic::reset_sample(sample.angle());
            sample.parent_frame("");
            sample.child_frame("");
            sample.timestamp(0ll);
        }

        void topic_type_support< ::PanAndTiltTransformPublisher >::allocate_sample(::PanAndTiltTransformPublisher& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.angle(),  -1, -1);
            ::rti::topic::allocate_sample(sample.parent_frame(),  -1, 255L);
            ::rti::topic::allocate_sample(sample.child_frame(),  -1, 255L);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
