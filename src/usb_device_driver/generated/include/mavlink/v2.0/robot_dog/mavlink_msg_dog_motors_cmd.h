#pragma once
// MESSAGE DOG_MOTORS_CMD PACKING

#define MAVLINK_MSG_ID_DOG_MOTORS_CMD 230


typedef struct __mavlink_dog_motors_cmd_t {
 uint64_t timestamp; /*< [ns] 时间戳*/
 float target_positions[12]; /*< [rad] 目标位置数组*/
 float target_velocities[12]; /*< [rad/s] 目标速度数组*/
 float target_torques[12]; /*< [Nm] 目标力矩数组*/
 uint16_t kp[12]; /*<  位置环比例增益数组*/
 uint16_t kd[12]; /*<  速度环微分增益数组*/
 uint8_t motors_id[12]; /*<  电机ID数组*/
} mavlink_dog_motors_cmd_t;

#define MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN 212
#define MAVLINK_MSG_ID_DOG_MOTORS_CMD_MIN_LEN 212
#define MAVLINK_MSG_ID_230_LEN 212
#define MAVLINK_MSG_ID_230_MIN_LEN 212

#define MAVLINK_MSG_ID_DOG_MOTORS_CMD_CRC 83
#define MAVLINK_MSG_ID_230_CRC 83

#define MAVLINK_MSG_DOG_MOTORS_CMD_FIELD_TARGET_POSITIONS_LEN 12
#define MAVLINK_MSG_DOG_MOTORS_CMD_FIELD_TARGET_VELOCITIES_LEN 12
#define MAVLINK_MSG_DOG_MOTORS_CMD_FIELD_TARGET_TORQUES_LEN 12
#define MAVLINK_MSG_DOG_MOTORS_CMD_FIELD_KP_LEN 12
#define MAVLINK_MSG_DOG_MOTORS_CMD_FIELD_KD_LEN 12
#define MAVLINK_MSG_DOG_MOTORS_CMD_FIELD_MOTORS_ID_LEN 12

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DOG_MOTORS_CMD { \
    230, \
    "DOG_MOTORS_CMD", \
    7, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_dog_motors_cmd_t, timestamp) }, \
         { "motors_id", NULL, MAVLINK_TYPE_UINT8_T, 12, 200, offsetof(mavlink_dog_motors_cmd_t, motors_id) }, \
         { "target_positions", NULL, MAVLINK_TYPE_FLOAT, 12, 8, offsetof(mavlink_dog_motors_cmd_t, target_positions) }, \
         { "target_velocities", NULL, MAVLINK_TYPE_FLOAT, 12, 56, offsetof(mavlink_dog_motors_cmd_t, target_velocities) }, \
         { "target_torques", NULL, MAVLINK_TYPE_FLOAT, 12, 104, offsetof(mavlink_dog_motors_cmd_t, target_torques) }, \
         { "kp", NULL, MAVLINK_TYPE_UINT16_T, 12, 152, offsetof(mavlink_dog_motors_cmd_t, kp) }, \
         { "kd", NULL, MAVLINK_TYPE_UINT16_T, 12, 176, offsetof(mavlink_dog_motors_cmd_t, kd) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DOG_MOTORS_CMD { \
    "DOG_MOTORS_CMD", \
    7, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_dog_motors_cmd_t, timestamp) }, \
         { "motors_id", NULL, MAVLINK_TYPE_UINT8_T, 12, 200, offsetof(mavlink_dog_motors_cmd_t, motors_id) }, \
         { "target_positions", NULL, MAVLINK_TYPE_FLOAT, 12, 8, offsetof(mavlink_dog_motors_cmd_t, target_positions) }, \
         { "target_velocities", NULL, MAVLINK_TYPE_FLOAT, 12, 56, offsetof(mavlink_dog_motors_cmd_t, target_velocities) }, \
         { "target_torques", NULL, MAVLINK_TYPE_FLOAT, 12, 104, offsetof(mavlink_dog_motors_cmd_t, target_torques) }, \
         { "kp", NULL, MAVLINK_TYPE_UINT16_T, 12, 152, offsetof(mavlink_dog_motors_cmd_t, kp) }, \
         { "kd", NULL, MAVLINK_TYPE_UINT16_T, 12, 176, offsetof(mavlink_dog_motors_cmd_t, kd) }, \
         } \
}
#endif

/**
 * @brief Pack a dog_motors_cmd message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [ns] 时间戳
 * @param motors_id  电机ID数组
 * @param target_positions [rad] 目标位置数组
 * @param target_velocities [rad/s] 目标速度数组
 * @param target_torques [Nm] 目标力矩数组
 * @param kp  位置环比例增益数组
 * @param kd  速度环微分增益数组
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dog_motors_cmd_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, const uint8_t *motors_id, const float *target_positions, const float *target_velocities, const float *target_torques, const uint16_t *kp, const uint16_t *kd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float_array(buf, 8, target_positions, 12);
    _mav_put_float_array(buf, 56, target_velocities, 12);
    _mav_put_float_array(buf, 104, target_torques, 12);
    _mav_put_uint16_t_array(buf, 152, kp, 12);
    _mav_put_uint16_t_array(buf, 176, kd, 12);
    _mav_put_uint8_t_array(buf, 200, motors_id, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN);
#else
    mavlink_dog_motors_cmd_t packet;
    packet.timestamp = timestamp;
    mav_array_assign_float(packet.target_positions, target_positions, 12);
    mav_array_assign_float(packet.target_velocities, target_velocities, 12);
    mav_array_assign_float(packet.target_torques, target_torques, 12);
    mav_array_assign_uint16_t(packet.kp, kp, 12);
    mav_array_assign_uint16_t(packet.kd, kd, 12);
    mav_array_assign_uint8_t(packet.motors_id, motors_id, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DOG_MOTORS_CMD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DOG_MOTORS_CMD_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN, MAVLINK_MSG_ID_DOG_MOTORS_CMD_CRC);
}

/**
 * @brief Pack a dog_motors_cmd message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [ns] 时间戳
 * @param motors_id  电机ID数组
 * @param target_positions [rad] 目标位置数组
 * @param target_velocities [rad/s] 目标速度数组
 * @param target_torques [Nm] 目标力矩数组
 * @param kp  位置环比例增益数组
 * @param kd  速度环微分增益数组
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dog_motors_cmd_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, const uint8_t *motors_id, const float *target_positions, const float *target_velocities, const float *target_torques, const uint16_t *kp, const uint16_t *kd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float_array(buf, 8, target_positions, 12);
    _mav_put_float_array(buf, 56, target_velocities, 12);
    _mav_put_float_array(buf, 104, target_torques, 12);
    _mav_put_uint16_t_array(buf, 152, kp, 12);
    _mav_put_uint16_t_array(buf, 176, kd, 12);
    _mav_put_uint8_t_array(buf, 200, motors_id, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN);
#else
    mavlink_dog_motors_cmd_t packet;
    packet.timestamp = timestamp;
    mav_array_memcpy(packet.target_positions, target_positions, sizeof(float)*12);
    mav_array_memcpy(packet.target_velocities, target_velocities, sizeof(float)*12);
    mav_array_memcpy(packet.target_torques, target_torques, sizeof(float)*12);
    mav_array_memcpy(packet.kp, kp, sizeof(uint16_t)*12);
    mav_array_memcpy(packet.kd, kd, sizeof(uint16_t)*12);
    mav_array_memcpy(packet.motors_id, motors_id, sizeof(uint8_t)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DOG_MOTORS_CMD;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DOG_MOTORS_CMD_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN, MAVLINK_MSG_ID_DOG_MOTORS_CMD_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DOG_MOTORS_CMD_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN);
#endif
}

/**
 * @brief Pack a dog_motors_cmd message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp [ns] 时间戳
 * @param motors_id  电机ID数组
 * @param target_positions [rad] 目标位置数组
 * @param target_velocities [rad/s] 目标速度数组
 * @param target_torques [Nm] 目标力矩数组
 * @param kp  位置环比例增益数组
 * @param kd  速度环微分增益数组
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dog_motors_cmd_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,const uint8_t *motors_id,const float *target_positions,const float *target_velocities,const float *target_torques,const uint16_t *kp,const uint16_t *kd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float_array(buf, 8, target_positions, 12);
    _mav_put_float_array(buf, 56, target_velocities, 12);
    _mav_put_float_array(buf, 104, target_torques, 12);
    _mav_put_uint16_t_array(buf, 152, kp, 12);
    _mav_put_uint16_t_array(buf, 176, kd, 12);
    _mav_put_uint8_t_array(buf, 200, motors_id, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN);
#else
    mavlink_dog_motors_cmd_t packet;
    packet.timestamp = timestamp;
    mav_array_assign_float(packet.target_positions, target_positions, 12);
    mav_array_assign_float(packet.target_velocities, target_velocities, 12);
    mav_array_assign_float(packet.target_torques, target_torques, 12);
    mav_array_assign_uint16_t(packet.kp, kp, 12);
    mav_array_assign_uint16_t(packet.kd, kd, 12);
    mav_array_assign_uint8_t(packet.motors_id, motors_id, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DOG_MOTORS_CMD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DOG_MOTORS_CMD_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN, MAVLINK_MSG_ID_DOG_MOTORS_CMD_CRC);
}

/**
 * @brief Encode a dog_motors_cmd struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param dog_motors_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dog_motors_cmd_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_dog_motors_cmd_t* dog_motors_cmd)
{
    return mavlink_msg_dog_motors_cmd_pack(system_id, component_id, msg, dog_motors_cmd->timestamp, dog_motors_cmd->motors_id, dog_motors_cmd->target_positions, dog_motors_cmd->target_velocities, dog_motors_cmd->target_torques, dog_motors_cmd->kp, dog_motors_cmd->kd);
}

/**
 * @brief Encode a dog_motors_cmd struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dog_motors_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dog_motors_cmd_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_dog_motors_cmd_t* dog_motors_cmd)
{
    return mavlink_msg_dog_motors_cmd_pack_chan(system_id, component_id, chan, msg, dog_motors_cmd->timestamp, dog_motors_cmd->motors_id, dog_motors_cmd->target_positions, dog_motors_cmd->target_velocities, dog_motors_cmd->target_torques, dog_motors_cmd->kp, dog_motors_cmd->kd);
}

/**
 * @brief Encode a dog_motors_cmd struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param dog_motors_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dog_motors_cmd_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_dog_motors_cmd_t* dog_motors_cmd)
{
    return mavlink_msg_dog_motors_cmd_pack_status(system_id, component_id, _status, msg,  dog_motors_cmd->timestamp, dog_motors_cmd->motors_id, dog_motors_cmd->target_positions, dog_motors_cmd->target_velocities, dog_motors_cmd->target_torques, dog_motors_cmd->kp, dog_motors_cmd->kd);
}

/**
 * @brief Send a dog_motors_cmd message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp [ns] 时间戳
 * @param motors_id  电机ID数组
 * @param target_positions [rad] 目标位置数组
 * @param target_velocities [rad/s] 目标速度数组
 * @param target_torques [Nm] 目标力矩数组
 * @param kp  位置环比例增益数组
 * @param kd  速度环微分增益数组
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_dog_motors_cmd_send(mavlink_channel_t chan, uint64_t timestamp, const uint8_t *motors_id, const float *target_positions, const float *target_velocities, const float *target_torques, const uint16_t *kp, const uint16_t *kd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float_array(buf, 8, target_positions, 12);
    _mav_put_float_array(buf, 56, target_velocities, 12);
    _mav_put_float_array(buf, 104, target_torques, 12);
    _mav_put_uint16_t_array(buf, 152, kp, 12);
    _mav_put_uint16_t_array(buf, 176, kd, 12);
    _mav_put_uint8_t_array(buf, 200, motors_id, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOG_MOTORS_CMD, buf, MAVLINK_MSG_ID_DOG_MOTORS_CMD_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN, MAVLINK_MSG_ID_DOG_MOTORS_CMD_CRC);
#else
    mavlink_dog_motors_cmd_t packet;
    packet.timestamp = timestamp;
    mav_array_assign_float(packet.target_positions, target_positions, 12);
    mav_array_assign_float(packet.target_velocities, target_velocities, 12);
    mav_array_assign_float(packet.target_torques, target_torques, 12);
    mav_array_assign_uint16_t(packet.kp, kp, 12);
    mav_array_assign_uint16_t(packet.kd, kd, 12);
    mav_array_assign_uint8_t(packet.motors_id, motors_id, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOG_MOTORS_CMD, (const char *)&packet, MAVLINK_MSG_ID_DOG_MOTORS_CMD_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN, MAVLINK_MSG_ID_DOG_MOTORS_CMD_CRC);
#endif
}

/**
 * @brief Send a dog_motors_cmd message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_dog_motors_cmd_send_struct(mavlink_channel_t chan, const mavlink_dog_motors_cmd_t* dog_motors_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_dog_motors_cmd_send(chan, dog_motors_cmd->timestamp, dog_motors_cmd->motors_id, dog_motors_cmd->target_positions, dog_motors_cmd->target_velocities, dog_motors_cmd->target_torques, dog_motors_cmd->kp, dog_motors_cmd->kd);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOG_MOTORS_CMD, (const char *)dog_motors_cmd, MAVLINK_MSG_ID_DOG_MOTORS_CMD_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN, MAVLINK_MSG_ID_DOG_MOTORS_CMD_CRC);
#endif
}

#if MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_dog_motors_cmd_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, const uint8_t *motors_id, const float *target_positions, const float *target_velocities, const float *target_torques, const uint16_t *kp, const uint16_t *kd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float_array(buf, 8, target_positions, 12);
    _mav_put_float_array(buf, 56, target_velocities, 12);
    _mav_put_float_array(buf, 104, target_torques, 12);
    _mav_put_uint16_t_array(buf, 152, kp, 12);
    _mav_put_uint16_t_array(buf, 176, kd, 12);
    _mav_put_uint8_t_array(buf, 200, motors_id, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOG_MOTORS_CMD, buf, MAVLINK_MSG_ID_DOG_MOTORS_CMD_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN, MAVLINK_MSG_ID_DOG_MOTORS_CMD_CRC);
#else
    mavlink_dog_motors_cmd_t *packet = (mavlink_dog_motors_cmd_t *)msgbuf;
    packet->timestamp = timestamp;
    mav_array_assign_float(packet->target_positions, target_positions, 12);
    mav_array_assign_float(packet->target_velocities, target_velocities, 12);
    mav_array_assign_float(packet->target_torques, target_torques, 12);
    mav_array_assign_uint16_t(packet->kp, kp, 12);
    mav_array_assign_uint16_t(packet->kd, kd, 12);
    mav_array_assign_uint8_t(packet->motors_id, motors_id, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOG_MOTORS_CMD, (const char *)packet, MAVLINK_MSG_ID_DOG_MOTORS_CMD_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN, MAVLINK_MSG_ID_DOG_MOTORS_CMD_CRC);
#endif
}
#endif

#endif

// MESSAGE DOG_MOTORS_CMD UNPACKING


/**
 * @brief Get field timestamp from dog_motors_cmd message
 *
 * @return [ns] 时间戳
 */
static inline uint64_t mavlink_msg_dog_motors_cmd_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field motors_id from dog_motors_cmd message
 *
 * @return  电机ID数组
 */
static inline uint16_t mavlink_msg_dog_motors_cmd_get_motors_id(const mavlink_message_t* msg, uint8_t *motors_id)
{
    return _MAV_RETURN_uint8_t_array(msg, motors_id, 12,  200);
}

/**
 * @brief Get field target_positions from dog_motors_cmd message
 *
 * @return [rad] 目标位置数组
 */
static inline uint16_t mavlink_msg_dog_motors_cmd_get_target_positions(const mavlink_message_t* msg, float *target_positions)
{
    return _MAV_RETURN_float_array(msg, target_positions, 12,  8);
}

/**
 * @brief Get field target_velocities from dog_motors_cmd message
 *
 * @return [rad/s] 目标速度数组
 */
static inline uint16_t mavlink_msg_dog_motors_cmd_get_target_velocities(const mavlink_message_t* msg, float *target_velocities)
{
    return _MAV_RETURN_float_array(msg, target_velocities, 12,  56);
}

/**
 * @brief Get field target_torques from dog_motors_cmd message
 *
 * @return [Nm] 目标力矩数组
 */
static inline uint16_t mavlink_msg_dog_motors_cmd_get_target_torques(const mavlink_message_t* msg, float *target_torques)
{
    return _MAV_RETURN_float_array(msg, target_torques, 12,  104);
}

/**
 * @brief Get field kp from dog_motors_cmd message
 *
 * @return  位置环比例增益数组
 */
static inline uint16_t mavlink_msg_dog_motors_cmd_get_kp(const mavlink_message_t* msg, uint16_t *kp)
{
    return _MAV_RETURN_uint16_t_array(msg, kp, 12,  152);
}

/**
 * @brief Get field kd from dog_motors_cmd message
 *
 * @return  速度环微分增益数组
 */
static inline uint16_t mavlink_msg_dog_motors_cmd_get_kd(const mavlink_message_t* msg, uint16_t *kd)
{
    return _MAV_RETURN_uint16_t_array(msg, kd, 12,  176);
}

/**
 * @brief Decode a dog_motors_cmd message into a struct
 *
 * @param msg The message to decode
 * @param dog_motors_cmd C-struct to decode the message contents into
 */
static inline void mavlink_msg_dog_motors_cmd_decode(const mavlink_message_t* msg, mavlink_dog_motors_cmd_t* dog_motors_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    dog_motors_cmd->timestamp = mavlink_msg_dog_motors_cmd_get_timestamp(msg);
    mavlink_msg_dog_motors_cmd_get_target_positions(msg, dog_motors_cmd->target_positions);
    mavlink_msg_dog_motors_cmd_get_target_velocities(msg, dog_motors_cmd->target_velocities);
    mavlink_msg_dog_motors_cmd_get_target_torques(msg, dog_motors_cmd->target_torques);
    mavlink_msg_dog_motors_cmd_get_kp(msg, dog_motors_cmd->kp);
    mavlink_msg_dog_motors_cmd_get_kd(msg, dog_motors_cmd->kd);
    mavlink_msg_dog_motors_cmd_get_motors_id(msg, dog_motors_cmd->motors_id);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN? msg->len : MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN;
        memset(dog_motors_cmd, 0, MAVLINK_MSG_ID_DOG_MOTORS_CMD_LEN);
    memcpy(dog_motors_cmd, _MAV_PAYLOAD(msg), len);
#endif
}
