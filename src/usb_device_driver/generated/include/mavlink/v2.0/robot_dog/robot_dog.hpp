/** @file
 *	@brief MAVLink comm protocol generated from robot_dog.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <array>
#include <cstdint>
#include <sstream>

#ifndef MAVLINK_STX
#define MAVLINK_STX 253
#endif

#include "../message.hpp"

namespace mavlink {
namespace robot_dog {

/**
 * Array of msg_entry needed for @p mavlink_parse_char() (through @p mavlink_get_msg_entry())
 */
constexpr std::array<mavlink_msg_entry_t, 3> MESSAGE_ENTRIES {{ {230, 83, 212, 212, 0, 0, 0}, {231, 5, 236, 236, 0, 0, 0}, {232, 36, 48, 48, 0, 0, 0} }};

//! MAVLINK VERSION
constexpr auto MAVLINK_VERSION = 2;


// ENUM DEFINITIONS




} // namespace robot_dog
} // namespace mavlink

// MESSAGE DEFINITIONS
#include "./mavlink_msg_dog_motors_cmd.hpp"
#include "./mavlink_msg_dog_motors_state.hpp"
#include "./mavlink_msg_dog_imu_data.hpp"

// base include

