/** @file
 *    @brief MAVLink comm protocol testsuite generated from robot_dog.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef ROBOT_DOG_TESTSUITE_H
#define ROBOT_DOG_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_robot_dog(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_robot_dog(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_dog_motors_cmd(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DOG_MOTORS_CMD >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_dog_motors_cmd_t packet_in = {
        93372036854775807ULL,{ 73.0, 74.0, 75.0, 76.0, 77.0, 78.0, 79.0, 80.0, 81.0, 82.0, 83.0, 84.0 },{ 409.0, 410.0, 411.0, 412.0, 413.0, 414.0, 415.0, 416.0, 417.0, 418.0, 419.0, 420.0 },{ 745.0, 746.0, 747.0, 748.0, 749.0, 750.0, 751.0, 752.0, 753.0, 754.0, 755.0, 756.0 },{ 25139, 25140, 25141, 25142, 25143, 25144, 25145, 25146, 25147, 25148, 25149, 25150 },{ 26387, 26388, 26389, 26390, 26391, 26392, 26393, 26394, 26395, 26396, 26397, 26398 },{ 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104 }
    };
    mavlink_dog_motors_cmd_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        
        mav_array_memcpy(packet1.target_positions, packet_in.target_positions, sizeof(float)*12);
        mav_array_memcpy(packet1.target_velocities, packet_in.target_velocities, sizeof(float)*12);
        mav_array_memcpy(packet1.target_torques, packet_in.target_torques, sizeof(float)*12);
        mav_array_memcpy(packet1.kp, packet_in.kp, sizeof(uint16_t)*12);
        mav_array_memcpy(packet1.kd, packet_in.kd, sizeof(uint16_t)*12);
        mav_array_memcpy(packet1.motors_id, packet_in.motors_id, sizeof(uint8_t)*12);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DOG_MOTORS_CMD_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DOG_MOTORS_CMD_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dog_motors_cmd_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_dog_motors_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dog_motors_cmd_pack(system_id, component_id, &msg , packet1.timestamp , packet1.motors_id , packet1.target_positions , packet1.target_velocities , packet1.target_torques , packet1.kp , packet1.kd );
    mavlink_msg_dog_motors_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dog_motors_cmd_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.motors_id , packet1.target_positions , packet1.target_velocities , packet1.target_torques , packet1.kp , packet1.kd );
    mavlink_msg_dog_motors_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_dog_motors_cmd_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dog_motors_cmd_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.motors_id , packet1.target_positions , packet1.target_velocities , packet1.target_torques , packet1.kp , packet1.kd );
    mavlink_msg_dog_motors_cmd_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("DOG_MOTORS_CMD") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_DOG_MOTORS_CMD) != NULL);
#endif
}

static void mavlink_test_dog_motors_state(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DOG_MOTORS_STATE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_dog_motors_state_t packet_in = {
        93372036854775807ULL,{ 73.0, 74.0, 75.0, 76.0, 77.0, 78.0, 79.0, 80.0, 81.0, 82.0, 83.0, 84.0 },{ 409.0, 410.0, 411.0, 412.0, 413.0, 414.0, 415.0, 416.0, 417.0, 418.0, 419.0, 420.0 },{ 745.0, 746.0, 747.0, 748.0, 749.0, 750.0, 751.0, 752.0, 753.0, 754.0, 755.0, 756.0 },{ 1081.0, 1082.0, 1083.0, 1084.0, 1085.0, 1086.0, 1087.0, 1088.0, 1089.0, 1090.0, 1091.0, 1092.0 },{ 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104 },{ 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140 },{ 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176 }
    };
    mavlink_dog_motors_state_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        
        mav_array_memcpy(packet1.positions, packet_in.positions, sizeof(float)*12);
        mav_array_memcpy(packet1.velocities, packet_in.velocities, sizeof(float)*12);
        mav_array_memcpy(packet1.torques, packet_in.torques, sizeof(float)*12);
        mav_array_memcpy(packet1.currents, packet_in.currents, sizeof(float)*12);
        mav_array_memcpy(packet1.motors_id, packet_in.motors_id, sizeof(uint8_t)*12);
        mav_array_memcpy(packet1.temperatures, packet_in.temperatures, sizeof(uint8_t)*12);
        mav_array_memcpy(packet1.statuses, packet_in.statuses, sizeof(uint8_t)*12);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DOG_MOTORS_STATE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DOG_MOTORS_STATE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dog_motors_state_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_dog_motors_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dog_motors_state_pack(system_id, component_id, &msg , packet1.timestamp , packet1.motors_id , packet1.positions , packet1.velocities , packet1.torques , packet1.currents , packet1.temperatures , packet1.statuses );
    mavlink_msg_dog_motors_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dog_motors_state_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.motors_id , packet1.positions , packet1.velocities , packet1.torques , packet1.currents , packet1.temperatures , packet1.statuses );
    mavlink_msg_dog_motors_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_dog_motors_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dog_motors_state_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.motors_id , packet1.positions , packet1.velocities , packet1.torques , packet1.currents , packet1.temperatures , packet1.statuses );
    mavlink_msg_dog_motors_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("DOG_MOTORS_STATE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_DOG_MOTORS_STATE) != NULL);
#endif
}

static void mavlink_test_dog_imu_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DOG_IMU_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_dog_imu_data_t packet_in = {
        93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0
    };
    mavlink_dog_imu_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.qw = packet_in.qw;
        packet1.qx = packet_in.qx;
        packet1.qy = packet_in.qy;
        packet1.qz = packet_in.qz;
        packet1.ax = packet_in.ax;
        packet1.ay = packet_in.ay;
        packet1.az = packet_in.az;
        packet1.gx = packet_in.gx;
        packet1.gy = packet_in.gy;
        packet1.gz = packet_in.gz;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DOG_IMU_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DOG_IMU_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dog_imu_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_dog_imu_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dog_imu_data_pack(system_id, component_id, &msg , packet1.timestamp , packet1.qw , packet1.qx , packet1.qy , packet1.qz , packet1.ax , packet1.ay , packet1.az , packet1.gx , packet1.gy , packet1.gz );
    mavlink_msg_dog_imu_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dog_imu_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.qw , packet1.qx , packet1.qy , packet1.qz , packet1.ax , packet1.ay , packet1.az , packet1.gx , packet1.gy , packet1.gz );
    mavlink_msg_dog_imu_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_dog_imu_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dog_imu_data_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.qw , packet1.qx , packet1.qy , packet1.qz , packet1.ax , packet1.ay , packet1.az , packet1.gx , packet1.gy , packet1.gz );
    mavlink_msg_dog_imu_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("DOG_IMU_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_DOG_IMU_DATA) != NULL);
#endif
}

static void mavlink_test_robot_dog(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_dog_motors_cmd(system_id, component_id, last_msg);
    mavlink_test_dog_motors_state(system_id, component_id, last_msg);
    mavlink_test_dog_imu_data(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // ROBOT_DOG_TESTSUITE_H
