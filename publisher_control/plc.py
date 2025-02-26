
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from plc.idl
# using RTI Code Generator (rtiddsgen) version 4.3.0.
# The rtiddsgen tool is part of the RTI Connext DDS distribution.
# For more information, type 'rtiddsgen -help' at a command shell
# or consult the Code Generator User's Manual.

from dataclasses import field
from typing import Union, Sequence, Optional
import rti.idl as idl
from enum import IntEnum
import sys
import os


@idl.struct(
    member_annotations = {
        'lampID': [idl.key, ],
    }
)
class LampControlCustom:
    lampID: idl.uint32 = 0
    intensity: idl.float32 = 0.0
    power: bool = False

@idl.struct(
    member_annotations = {
        'cameraID': [idl.key, ],
    }
)
class CameraControlCustom:
    cameraID: idl.uint32 = 0
    power: bool = False
    light: bool = False
    focus: idl.float32 = 0.0
    zoom: idl.float32 = 0.0

@idl.struct(
    member_annotations = {
        'panandtiltID': [idl.key, ],
    }
)
class PanAndTiltControlCustom:
    panandtiltID: idl.uint32 = 0
    x: idl.float32 = 0.0
    y: idl.float32 = 0.0
    z: idl.float32 = 0.0

@idl.struct
class Power:
    CMD: idl.uint8 = 0
    On: idl.uint8 = 0

@idl.struct(
    member_annotations = {
        'lampID': [idl.key, ],
    }
)
class LampControl:
    lampID: idl.uint32 = 0
    intensity: idl.float32 = 0.0
    power: Power = field(default_factory = Power)

@idl.struct(
    member_annotations = {
        'cameraID': [idl.key, ],
    }
)
class CameraControl:
    cameraID: idl.uint32 = 0
    focus_far: Power = field(default_factory = Power)
    focus_near: Power = field(default_factory = Power)
    LED: Power = field(default_factory = Power)
    power: Power = field(default_factory = Power)
    zoom_in: Power = field(default_factory = Power)
    zoom_out: Power = field(default_factory = Power)

@idl.struct(
    member_annotations = {
        'panandtiltID': [idl.key, ],
    }
)
class PanAndTiltControl:
    panandtiltID: idl.uint32 = 0
    pan_left: Power = field(default_factory = Power)
    pan_right: Power = field(default_factory = Power)
    power: Power = field(default_factory = Power)
    tilt_down: Power = field(default_factory = Power)
    tilt_up: Power = field(default_factory = Power)
