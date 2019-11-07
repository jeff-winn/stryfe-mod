#include "CustomUuid.h"

// These GUIDs were generated using the following website: https://mcdaniel.ws/Utility/Guidgen
// However they are also little-endian on the MCU, and will require conversion to big-endian on other hardware.

// *************************************************************************************************************
// 1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16
// 0xf0,0xf1,0x29,0x87,0xd0,0xc4,0xbe,0x47,0xb0,0x95,0xc6,0x63,0x09,0xff,0x17,0x68  - Little Endian (On Arduino)
// 0x09,0xFF,0x17,0x68,0xC6,0x63,0xB0,0x95,0x47,0xBE,0xC4,0xD0,0x87,0x29,0xF1,0xF0  - Big Endian (On Windows)
// 13   14   15   16   11   12   9    10   8    7    6    5    4    3    2    1
// *************************************************************************************************************

// Services
uint8_t UUID128_SVC_NERF_BLASTER[16]       = { 0xf0,0xf1,0x29,0x87,0xd0,0xc4,0xbe,0x47,0xb0,0x95,0xc6,0x63,0x09,0xff,0x17,0x68 };        // 6817ff09-63c6-95b0-47be-c4d08729f1f0

// Characteristics
uint8_t UUID128_CHR_FLYWHEEL_SPEED[16]     = { 0xf0,0xf1,0x29,0x87,0xd0,0xc4,0xbe,0x47,0xb0,0x95,0xc6,0x63,0x00,0x01,0x00,0x00 };        // 00000100-63c6-95b0-47be-c4d08729f1f0