/** @file
 *  @brief MAVLink comm protocol generated from robot_dog.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_ROBOT_DOG_H
#define MAVLINK_ROBOT_DOG_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_ROBOT_DOG.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_ROBOT_DOG_XML_HASH 3417896407714766341

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{230, 83, 212, 212, 0, 0, 0}, {231, 5, 236, 236, 0, 0, 0}, {232, 36, 48, 48, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_ROBOT_DOG

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_dog_motors_cmd.h"
#include "./mavlink_msg_dog_motors_state.h"
#include "./mavlink_msg_dog_imu_data.h"

// base include



#if MAVLINK_ROBOT_DOG_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_DOG_MOTORS_CMD, MAVLINK_MESSAGE_INFO_DOG_MOTORS_STATE, MAVLINK_MESSAGE_INFO_DOG_IMU_DATA}
# define MAVLINK_MESSAGE_NAMES {{ "DOG_IMU_DATA", 232 }, { "DOG_MOTORS_CMD", 230 }, { "DOG_MOTORS_STATE", 231 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_ROBOT_DOG_H
