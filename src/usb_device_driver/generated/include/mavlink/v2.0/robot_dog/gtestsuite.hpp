/** @file
 *	@brief MAVLink comm testsuite protocol generated from robot_dog.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <gtest/gtest.h>
#include "robot_dog.hpp"

#ifdef TEST_INTEROP
using namespace mavlink;
#undef MAVLINK_HELPER
#include "mavlink.h"
#endif


TEST(robot_dog, DOG_MOTORS_CMD)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::robot_dog::msg::DOG_MOTORS_CMD packet_in{};
    packet_in.timestamp = 93372036854775807ULL;
    packet_in.motors_id = {{ 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104 }};
    packet_in.target_positions = {{ 73.0, 74.0, 75.0, 76.0, 77.0, 78.0, 79.0, 80.0, 81.0, 82.0, 83.0, 84.0 }};
    packet_in.target_velocities = {{ 409.0, 410.0, 411.0, 412.0, 413.0, 414.0, 415.0, 416.0, 417.0, 418.0, 419.0, 420.0 }};
    packet_in.target_torques = {{ 745.0, 746.0, 747.0, 748.0, 749.0, 750.0, 751.0, 752.0, 753.0, 754.0, 755.0, 756.0 }};
    packet_in.kp = {{ 25139, 25140, 25141, 25142, 25143, 25144, 25145, 25146, 25147, 25148, 25149, 25150 }};
    packet_in.kd = {{ 26387, 26388, 26389, 26390, 26391, 26392, 26393, 26394, 26395, 26396, 26397, 26398 }};

    mavlink::robot_dog::msg::DOG_MOTORS_CMD packet1{};
    mavlink::robot_dog::msg::DOG_MOTORS_CMD packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timestamp, packet2.timestamp);
    EXPECT_EQ(packet1.motors_id, packet2.motors_id);
    EXPECT_EQ(packet1.target_positions, packet2.target_positions);
    EXPECT_EQ(packet1.target_velocities, packet2.target_velocities);
    EXPECT_EQ(packet1.target_torques, packet2.target_torques);
    EXPECT_EQ(packet1.kp, packet2.kp);
    EXPECT_EQ(packet1.kd, packet2.kd);
}

#ifdef TEST_INTEROP
TEST(robot_dog_interop, DOG_MOTORS_CMD)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_dog_motors_cmd_t packet_c {
         93372036854775807ULL, { 73.0, 74.0, 75.0, 76.0, 77.0, 78.0, 79.0, 80.0, 81.0, 82.0, 83.0, 84.0 }, { 409.0, 410.0, 411.0, 412.0, 413.0, 414.0, 415.0, 416.0, 417.0, 418.0, 419.0, 420.0 }, { 745.0, 746.0, 747.0, 748.0, 749.0, 750.0, 751.0, 752.0, 753.0, 754.0, 755.0, 756.0 }, { 25139, 25140, 25141, 25142, 25143, 25144, 25145, 25146, 25147, 25148, 25149, 25150 }, { 26387, 26388, 26389, 26390, 26391, 26392, 26393, 26394, 26395, 26396, 26397, 26398 }, { 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104 }
    };

    mavlink::robot_dog::msg::DOG_MOTORS_CMD packet_in{};
    packet_in.timestamp = 93372036854775807ULL;
    packet_in.motors_id = {{ 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104 }};
    packet_in.target_positions = {{ 73.0, 74.0, 75.0, 76.0, 77.0, 78.0, 79.0, 80.0, 81.0, 82.0, 83.0, 84.0 }};
    packet_in.target_velocities = {{ 409.0, 410.0, 411.0, 412.0, 413.0, 414.0, 415.0, 416.0, 417.0, 418.0, 419.0, 420.0 }};
    packet_in.target_torques = {{ 745.0, 746.0, 747.0, 748.0, 749.0, 750.0, 751.0, 752.0, 753.0, 754.0, 755.0, 756.0 }};
    packet_in.kp = {{ 25139, 25140, 25141, 25142, 25143, 25144, 25145, 25146, 25147, 25148, 25149, 25150 }};
    packet_in.kd = {{ 26387, 26388, 26389, 26390, 26391, 26392, 26393, 26394, 26395, 26396, 26397, 26398 }};

    mavlink::robot_dog::msg::DOG_MOTORS_CMD packet2{};

    mavlink_msg_dog_motors_cmd_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timestamp, packet2.timestamp);
    EXPECT_EQ(packet_in.motors_id, packet2.motors_id);
    EXPECT_EQ(packet_in.target_positions, packet2.target_positions);
    EXPECT_EQ(packet_in.target_velocities, packet2.target_velocities);
    EXPECT_EQ(packet_in.target_torques, packet2.target_torques);
    EXPECT_EQ(packet_in.kp, packet2.kp);
    EXPECT_EQ(packet_in.kd, packet2.kd);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(robot_dog, DOG_MOTORS_STATE)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::robot_dog::msg::DOG_MOTORS_STATE packet_in{};
    packet_in.timestamp = 93372036854775807ULL;
    packet_in.motors_id = {{ 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104 }};
    packet_in.positions = {{ 73.0, 74.0, 75.0, 76.0, 77.0, 78.0, 79.0, 80.0, 81.0, 82.0, 83.0, 84.0 }};
    packet_in.velocities = {{ 409.0, 410.0, 411.0, 412.0, 413.0, 414.0, 415.0, 416.0, 417.0, 418.0, 419.0, 420.0 }};
    packet_in.torques = {{ 745.0, 746.0, 747.0, 748.0, 749.0, 750.0, 751.0, 752.0, 753.0, 754.0, 755.0, 756.0 }};
    packet_in.currents = {{ 1081.0, 1082.0, 1083.0, 1084.0, 1085.0, 1086.0, 1087.0, 1088.0, 1089.0, 1090.0, 1091.0, 1092.0 }};
    packet_in.temperatures = {{ 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140 }};
    packet_in.statuses = {{ 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176 }};

    mavlink::robot_dog::msg::DOG_MOTORS_STATE packet1{};
    mavlink::robot_dog::msg::DOG_MOTORS_STATE packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timestamp, packet2.timestamp);
    EXPECT_EQ(packet1.motors_id, packet2.motors_id);
    EXPECT_EQ(packet1.positions, packet2.positions);
    EXPECT_EQ(packet1.velocities, packet2.velocities);
    EXPECT_EQ(packet1.torques, packet2.torques);
    EXPECT_EQ(packet1.currents, packet2.currents);
    EXPECT_EQ(packet1.temperatures, packet2.temperatures);
    EXPECT_EQ(packet1.statuses, packet2.statuses);
}

#ifdef TEST_INTEROP
TEST(robot_dog_interop, DOG_MOTORS_STATE)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_dog_motors_state_t packet_c {
         93372036854775807ULL, { 73.0, 74.0, 75.0, 76.0, 77.0, 78.0, 79.0, 80.0, 81.0, 82.0, 83.0, 84.0 }, { 409.0, 410.0, 411.0, 412.0, 413.0, 414.0, 415.0, 416.0, 417.0, 418.0, 419.0, 420.0 }, { 745.0, 746.0, 747.0, 748.0, 749.0, 750.0, 751.0, 752.0, 753.0, 754.0, 755.0, 756.0 }, { 1081.0, 1082.0, 1083.0, 1084.0, 1085.0, 1086.0, 1087.0, 1088.0, 1089.0, 1090.0, 1091.0, 1092.0 }, { 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104 }, { 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140 }, { 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176 }
    };

    mavlink::robot_dog::msg::DOG_MOTORS_STATE packet_in{};
    packet_in.timestamp = 93372036854775807ULL;
    packet_in.motors_id = {{ 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104 }};
    packet_in.positions = {{ 73.0, 74.0, 75.0, 76.0, 77.0, 78.0, 79.0, 80.0, 81.0, 82.0, 83.0, 84.0 }};
    packet_in.velocities = {{ 409.0, 410.0, 411.0, 412.0, 413.0, 414.0, 415.0, 416.0, 417.0, 418.0, 419.0, 420.0 }};
    packet_in.torques = {{ 745.0, 746.0, 747.0, 748.0, 749.0, 750.0, 751.0, 752.0, 753.0, 754.0, 755.0, 756.0 }};
    packet_in.currents = {{ 1081.0, 1082.0, 1083.0, 1084.0, 1085.0, 1086.0, 1087.0, 1088.0, 1089.0, 1090.0, 1091.0, 1092.0 }};
    packet_in.temperatures = {{ 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140 }};
    packet_in.statuses = {{ 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176 }};

    mavlink::robot_dog::msg::DOG_MOTORS_STATE packet2{};

    mavlink_msg_dog_motors_state_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timestamp, packet2.timestamp);
    EXPECT_EQ(packet_in.motors_id, packet2.motors_id);
    EXPECT_EQ(packet_in.positions, packet2.positions);
    EXPECT_EQ(packet_in.velocities, packet2.velocities);
    EXPECT_EQ(packet_in.torques, packet2.torques);
    EXPECT_EQ(packet_in.currents, packet2.currents);
    EXPECT_EQ(packet_in.temperatures, packet2.temperatures);
    EXPECT_EQ(packet_in.statuses, packet2.statuses);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(robot_dog, DOG_IMU_DATA)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::robot_dog::msg::DOG_IMU_DATA packet_in{};
    packet_in.timestamp = 93372036854775807ULL;
    packet_in.qw = 73.0;
    packet_in.qx = 101.0;
    packet_in.qy = 129.0;
    packet_in.qz = 157.0;
    packet_in.ax = 185.0;
    packet_in.ay = 213.0;
    packet_in.az = 241.0;
    packet_in.gx = 269.0;
    packet_in.gy = 297.0;
    packet_in.gz = 325.0;

    mavlink::robot_dog::msg::DOG_IMU_DATA packet1{};
    mavlink::robot_dog::msg::DOG_IMU_DATA packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timestamp, packet2.timestamp);
    EXPECT_EQ(packet1.qw, packet2.qw);
    EXPECT_EQ(packet1.qx, packet2.qx);
    EXPECT_EQ(packet1.qy, packet2.qy);
    EXPECT_EQ(packet1.qz, packet2.qz);
    EXPECT_EQ(packet1.ax, packet2.ax);
    EXPECT_EQ(packet1.ay, packet2.ay);
    EXPECT_EQ(packet1.az, packet2.az);
    EXPECT_EQ(packet1.gx, packet2.gx);
    EXPECT_EQ(packet1.gy, packet2.gy);
    EXPECT_EQ(packet1.gz, packet2.gz);
}

#ifdef TEST_INTEROP
TEST(robot_dog_interop, DOG_IMU_DATA)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_dog_imu_data_t packet_c {
         93372036854775807ULL, 73.0, 101.0, 129.0, 157.0, 185.0, 213.0, 241.0, 269.0, 297.0, 325.0
    };

    mavlink::robot_dog::msg::DOG_IMU_DATA packet_in{};
    packet_in.timestamp = 93372036854775807ULL;
    packet_in.qw = 73.0;
    packet_in.qx = 101.0;
    packet_in.qy = 129.0;
    packet_in.qz = 157.0;
    packet_in.ax = 185.0;
    packet_in.ay = 213.0;
    packet_in.az = 241.0;
    packet_in.gx = 269.0;
    packet_in.gy = 297.0;
    packet_in.gz = 325.0;

    mavlink::robot_dog::msg::DOG_IMU_DATA packet2{};

    mavlink_msg_dog_imu_data_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timestamp, packet2.timestamp);
    EXPECT_EQ(packet_in.qw, packet2.qw);
    EXPECT_EQ(packet_in.qx, packet2.qx);
    EXPECT_EQ(packet_in.qy, packet2.qy);
    EXPECT_EQ(packet_in.qz, packet2.qz);
    EXPECT_EQ(packet_in.ax, packet2.ax);
    EXPECT_EQ(packet_in.ay, packet2.ay);
    EXPECT_EQ(packet_in.az, packet2.az);
    EXPECT_EQ(packet_in.gx, packet2.gx);
    EXPECT_EQ(packet_in.gy, packet2.gy);
    EXPECT_EQ(packet_in.gz, packet2.gz);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif
