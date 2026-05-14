#pragma once
// MESSAGE DOG_MOTORS_STATE PACKING

#define MAVLINK_MSG_ID_DOG_MOTORS_STATE 231


typedef struct __mavlink_dog_motors_state_t {
 uint64_t timestamp; /*< [ns] 时间戳*/
 float positions[12]; /*< [rad] 当前位置数组*/
 float velocities[12]; /*< [rad/s] 当前速度数组*/
 float torques[12]; /*< [Nm] 当前力矩数组*/
 float currents[12]; /*< [A] 电流数组*/
 uint8_t motors_id[12]; /*<  电机ID数组*/
 uint8_t temperatures[12]; /*< [degC] 温度数组*/
 uint8_t statuses[12]; /*<  状态数组*/
} mavlink_dog_motors_state_t;

#define MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN 236
#define MAVLINK_MSG_ID_DOG_MOTORS_STATE_MIN_LEN 236
#define MAVLINK_MSG_ID_231_LEN 236
#define MAVLINK_MSG_ID_231_MIN_LEN 236

#define MAVLINK_MSG_ID_DOG_MOTORS_STATE_CRC 5
#define MAVLINK_MSG_ID_231_CRC 5

#define MAVLINK_MSG_DOG_MOTORS_STATE_FIELD_POSITIONS_LEN 12
#define MAVLINK_MSG_DOG_MOTORS_STATE_FIELD_VELOCITIES_LEN 12
#define MAVLINK_MSG_DOG_MOTORS_STATE_FIELD_TORQUES_LEN 12
#define MAVLINK_MSG_DOG_MOTORS_STATE_FIELD_CURRENTS_LEN 12
#define MAVLINK_MSG_DOG_MOTORS_STATE_FIELD_MOTORS_ID_LEN 12
#define MAVLINK_MSG_DOG_MOTORS_STATE_FIELD_TEMPERATURES_LEN 12
#define MAVLINK_MSG_DOG_MOTORS_STATE_FIELD_STATUSES_LEN 12

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DOG_MOTORS_STATE { \
    231, \
    "DOG_MOTORS_STATE", \
    8, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_dog_motors_state_t, timestamp) }, \
         { "motors_id", NULL, MAVLINK_TYPE_UINT8_T, 12, 200, offsetof(mavlink_dog_motors_state_t, motors_id) }, \
         { "positions", NULL, MAVLINK_TYPE_FLOAT, 12, 8, offsetof(mavlink_dog_motors_state_t, positions) }, \
         { "velocities", NULL, MAVLINK_TYPE_FLOAT, 12, 56, offsetof(mavlink_dog_motors_state_t, velocities) }, \
         { "torques", NULL, MAVLINK_TYPE_FLOAT, 12, 104, offsetof(mavlink_dog_motors_state_t, torques) }, \
         { "currents", NULL, MAVLINK_TYPE_FLOAT, 12, 152, offsetof(mavlink_dog_motors_state_t, currents) }, \
         { "temperatures", NULL, MAVLINK_TYPE_UINT8_T, 12, 212, offsetof(mavlink_dog_motors_state_t, temperatures) }, \
         { "statuses", NULL, MAVLINK_TYPE_UINT8_T, 12, 224, offsetof(mavlink_dog_motors_state_t, statuses) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DOG_MOTORS_STATE { \
    "DOG_MOTORS_STATE", \
    8, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_dog_motors_state_t, timestamp) }, \
         { "motors_id", NULL, MAVLINK_TYPE_UINT8_T, 12, 200, offsetof(mavlink_dog_motors_state_t, motors_id) }, \
         { "positions", NULL, MAVLINK_TYPE_FLOAT, 12, 8, offsetof(mavlink_dog_motors_state_t, positions) }, \
         { "velocities", NULL, MAVLINK_TYPE_FLOAT, 12, 56, offsetof(mavlink_dog_motors_state_t, velocities) }, \
         { "torques", NULL, MAVLINK_TYPE_FLOAT, 12, 104, offsetof(mavlink_dog_motors_state_t, torques) }, \
         { "currents", NULL, MAVLINK_TYPE_FLOAT, 12, 152, offsetof(mavlink_dog_motors_state_t, currents) }, \
         { "temperatures", NULL, MAVLINK_TYPE_UINT8_T, 12, 212, offsetof(mavlink_dog_motors_state_t, temperatures) }, \
         { "statuses", NULL, MAVLINK_TYPE_UINT8_T, 12, 224, offsetof(mavlink_dog_motors_state_t, statuses) }, \
         } \
}
#endif

/**
 * @brief Pack a dog_motors_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [ns] 时间戳
 * @param motors_id  电机ID数组
 * @param positions [rad] 当前位置数组
 * @param velocities [rad/s] 当前速度数组
 * @param torques [Nm] 当前力矩数组
 * @param currents [A] 电流数组
 * @param temperatures [degC] 温度数组
 * @param statuses  状态数组
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dog_motors_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, const uint8_t *motors_id, const float *positions, const float *velocities, const float *torques, const float *currents, const uint8_t *temperatures, const uint8_t *statuses)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float_array(buf, 8, positions, 12);
    _mav_put_float_array(buf, 56, velocities, 12);
    _mav_put_float_array(buf, 104, torques, 12);
    _mav_put_float_array(buf, 152, currents, 12);
    _mav_put_uint8_t_array(buf, 200, motors_id, 12);
    _mav_put_uint8_t_array(buf, 212, temperatures, 12);
    _mav_put_uint8_t_array(buf, 224, statuses, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN);
#else
    mavlink_dog_motors_state_t packet;
    packet.timestamp = timestamp;
    mav_array_assign_float(packet.positions, positions, 12);
    mav_array_assign_float(packet.velocities, velocities, 12);
    mav_array_assign_float(packet.torques, torques, 12);
    mav_array_assign_float(packet.currents, currents, 12);
    mav_array_assign_uint8_t(packet.motors_id, motors_id, 12);
    mav_array_assign_uint8_t(packet.temperatures, temperatures, 12);
    mav_array_assign_uint8_t(packet.statuses, statuses, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DOG_MOTORS_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DOG_MOTORS_STATE_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN, MAVLINK_MSG_ID_DOG_MOTORS_STATE_CRC);
}

/**
 * @brief Pack a dog_motors_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [ns] 时间戳
 * @param motors_id  电机ID数组
 * @param positions [rad] 当前位置数组
 * @param velocities [rad/s] 当前速度数组
 * @param torques [Nm] 当前力矩数组
 * @param currents [A] 电流数组
 * @param temperatures [degC] 温度数组
 * @param statuses  状态数组
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dog_motors_state_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, const uint8_t *motors_id, const float *positions, const float *velocities, const float *torques, const float *currents, const uint8_t *temperatures, const uint8_t *statuses)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float_array(buf, 8, positions, 12);
    _mav_put_float_array(buf, 56, velocities, 12);
    _mav_put_float_array(buf, 104, torques, 12);
    _mav_put_float_array(buf, 152, currents, 12);
    _mav_put_uint8_t_array(buf, 200, motors_id, 12);
    _mav_put_uint8_t_array(buf, 212, temperatures, 12);
    _mav_put_uint8_t_array(buf, 224, statuses, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN);
#else
    mavlink_dog_motors_state_t packet;
    packet.timestamp = timestamp;
    mav_array_memcpy(packet.positions, positions, sizeof(float)*12);
    mav_array_memcpy(packet.velocities, velocities, sizeof(float)*12);
    mav_array_memcpy(packet.torques, torques, sizeof(float)*12);
    mav_array_memcpy(packet.currents, currents, sizeof(float)*12);
    mav_array_memcpy(packet.motors_id, motors_id, sizeof(uint8_t)*12);
    mav_array_memcpy(packet.temperatures, temperatures, sizeof(uint8_t)*12);
    mav_array_memcpy(packet.statuses, statuses, sizeof(uint8_t)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DOG_MOTORS_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DOG_MOTORS_STATE_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN, MAVLINK_MSG_ID_DOG_MOTORS_STATE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DOG_MOTORS_STATE_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN);
#endif
}

/**
 * @brief Pack a dog_motors_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp [ns] 时间戳
 * @param motors_id  电机ID数组
 * @param positions [rad] 当前位置数组
 * @param velocities [rad/s] 当前速度数组
 * @param torques [Nm] 当前力矩数组
 * @param currents [A] 电流数组
 * @param temperatures [degC] 温度数组
 * @param statuses  状态数组
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dog_motors_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,const uint8_t *motors_id,const float *positions,const float *velocities,const float *torques,const float *currents,const uint8_t *temperatures,const uint8_t *statuses)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float_array(buf, 8, positions, 12);
    _mav_put_float_array(buf, 56, velocities, 12);
    _mav_put_float_array(buf, 104, torques, 12);
    _mav_put_float_array(buf, 152, currents, 12);
    _mav_put_uint8_t_array(buf, 200, motors_id, 12);
    _mav_put_uint8_t_array(buf, 212, temperatures, 12);
    _mav_put_uint8_t_array(buf, 224, statuses, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN);
#else
    mavlink_dog_motors_state_t packet;
    packet.timestamp = timestamp;
    mav_array_assign_float(packet.positions, positions, 12);
    mav_array_assign_float(packet.velocities, velocities, 12);
    mav_array_assign_float(packet.torques, torques, 12);
    mav_array_assign_float(packet.currents, currents, 12);
    mav_array_assign_uint8_t(packet.motors_id, motors_id, 12);
    mav_array_assign_uint8_t(packet.temperatures, temperatures, 12);
    mav_array_assign_uint8_t(packet.statuses, statuses, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DOG_MOTORS_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DOG_MOTORS_STATE_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN, MAVLINK_MSG_ID_DOG_MOTORS_STATE_CRC);
}

/**
 * @brief Encode a dog_motors_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param dog_motors_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dog_motors_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_dog_motors_state_t* dog_motors_state)
{
    return mavlink_msg_dog_motors_state_pack(system_id, component_id, msg, dog_motors_state->timestamp, dog_motors_state->motors_id, dog_motors_state->positions, dog_motors_state->velocities, dog_motors_state->torques, dog_motors_state->currents, dog_motors_state->temperatures, dog_motors_state->statuses);
}

/**
 * @brief Encode a dog_motors_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dog_motors_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dog_motors_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_dog_motors_state_t* dog_motors_state)
{
    return mavlink_msg_dog_motors_state_pack_chan(system_id, component_id, chan, msg, dog_motors_state->timestamp, dog_motors_state->motors_id, dog_motors_state->positions, dog_motors_state->velocities, dog_motors_state->torques, dog_motors_state->currents, dog_motors_state->temperatures, dog_motors_state->statuses);
}

/**
 * @brief Encode a dog_motors_state struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param dog_motors_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dog_motors_state_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_dog_motors_state_t* dog_motors_state)
{
    return mavlink_msg_dog_motors_state_pack_status(system_id, component_id, _status, msg,  dog_motors_state->timestamp, dog_motors_state->motors_id, dog_motors_state->positions, dog_motors_state->velocities, dog_motors_state->torques, dog_motors_state->currents, dog_motors_state->temperatures, dog_motors_state->statuses);
}

/**
 * @brief Send a dog_motors_state message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp [ns] 时间戳
 * @param motors_id  电机ID数组
 * @param positions [rad] 当前位置数组
 * @param velocities [rad/s] 当前速度数组
 * @param torques [Nm] 当前力矩数组
 * @param currents [A] 电流数组
 * @param temperatures [degC] 温度数组
 * @param statuses  状态数组
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_dog_motors_state_send(mavlink_channel_t chan, uint64_t timestamp, const uint8_t *motors_id, const float *positions, const float *velocities, const float *torques, const float *currents, const uint8_t *temperatures, const uint8_t *statuses)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float_array(buf, 8, positions, 12);
    _mav_put_float_array(buf, 56, velocities, 12);
    _mav_put_float_array(buf, 104, torques, 12);
    _mav_put_float_array(buf, 152, currents, 12);
    _mav_put_uint8_t_array(buf, 200, motors_id, 12);
    _mav_put_uint8_t_array(buf, 212, temperatures, 12);
    _mav_put_uint8_t_array(buf, 224, statuses, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOG_MOTORS_STATE, buf, MAVLINK_MSG_ID_DOG_MOTORS_STATE_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN, MAVLINK_MSG_ID_DOG_MOTORS_STATE_CRC);
#else
    mavlink_dog_motors_state_t packet;
    packet.timestamp = timestamp;
    mav_array_assign_float(packet.positions, positions, 12);
    mav_array_assign_float(packet.velocities, velocities, 12);
    mav_array_assign_float(packet.torques, torques, 12);
    mav_array_assign_float(packet.currents, currents, 12);
    mav_array_assign_uint8_t(packet.motors_id, motors_id, 12);
    mav_array_assign_uint8_t(packet.temperatures, temperatures, 12);
    mav_array_assign_uint8_t(packet.statuses, statuses, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOG_MOTORS_STATE, (const char *)&packet, MAVLINK_MSG_ID_DOG_MOTORS_STATE_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN, MAVLINK_MSG_ID_DOG_MOTORS_STATE_CRC);
#endif
}

/**
 * @brief Send a dog_motors_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_dog_motors_state_send_struct(mavlink_channel_t chan, const mavlink_dog_motors_state_t* dog_motors_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_dog_motors_state_send(chan, dog_motors_state->timestamp, dog_motors_state->motors_id, dog_motors_state->positions, dog_motors_state->velocities, dog_motors_state->torques, dog_motors_state->currents, dog_motors_state->temperatures, dog_motors_state->statuses);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOG_MOTORS_STATE, (const char *)dog_motors_state, MAVLINK_MSG_ID_DOG_MOTORS_STATE_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN, MAVLINK_MSG_ID_DOG_MOTORS_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_dog_motors_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, const uint8_t *motors_id, const float *positions, const float *velocities, const float *torques, const float *currents, const uint8_t *temperatures, const uint8_t *statuses)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float_array(buf, 8, positions, 12);
    _mav_put_float_array(buf, 56, velocities, 12);
    _mav_put_float_array(buf, 104, torques, 12);
    _mav_put_float_array(buf, 152, currents, 12);
    _mav_put_uint8_t_array(buf, 200, motors_id, 12);
    _mav_put_uint8_t_array(buf, 212, temperatures, 12);
    _mav_put_uint8_t_array(buf, 224, statuses, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOG_MOTORS_STATE, buf, MAVLINK_MSG_ID_DOG_MOTORS_STATE_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN, MAVLINK_MSG_ID_DOG_MOTORS_STATE_CRC);
#else
    mavlink_dog_motors_state_t *packet = (mavlink_dog_motors_state_t *)msgbuf;
    packet->timestamp = timestamp;
    mav_array_assign_float(packet->positions, positions, 12);
    mav_array_assign_float(packet->velocities, velocities, 12);
    mav_array_assign_float(packet->torques, torques, 12);
    mav_array_assign_float(packet->currents, currents, 12);
    mav_array_assign_uint8_t(packet->motors_id, motors_id, 12);
    mav_array_assign_uint8_t(packet->temperatures, temperatures, 12);
    mav_array_assign_uint8_t(packet->statuses, statuses, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOG_MOTORS_STATE, (const char *)packet, MAVLINK_MSG_ID_DOG_MOTORS_STATE_MIN_LEN, MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN, MAVLINK_MSG_ID_DOG_MOTORS_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE DOG_MOTORS_STATE UNPACKING


/**
 * @brief Get field timestamp from dog_motors_state message
 *
 * @return [ns] 时间戳
 */
static inline uint64_t mavlink_msg_dog_motors_state_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field motors_id from dog_motors_state message
 *
 * @return  电机ID数组
 */
static inline uint16_t mavlink_msg_dog_motors_state_get_motors_id(const mavlink_message_t* msg, uint8_t *motors_id)
{
    return _MAV_RETURN_uint8_t_array(msg, motors_id, 12,  200);
}

/**
 * @brief Get field positions from dog_motors_state message
 *
 * @return [rad] 当前位置数组
 */
static inline uint16_t mavlink_msg_dog_motors_state_get_positions(const mavlink_message_t* msg, float *positions)
{
    return _MAV_RETURN_float_array(msg, positions, 12,  8);
}

/**
 * @brief Get field velocities from dog_motors_state message
 *
 * @return [rad/s] 当前速度数组
 */
static inline uint16_t mavlink_msg_dog_motors_state_get_velocities(const mavlink_message_t* msg, float *velocities)
{
    return _MAV_RETURN_float_array(msg, velocities, 12,  56);
}

/**
 * @brief Get field torques from dog_motors_state message
 *
 * @return [Nm] 当前力矩数组
 */
static inline uint16_t mavlink_msg_dog_motors_state_get_torques(const mavlink_message_t* msg, float *torques)
{
    return _MAV_RETURN_float_array(msg, torques, 12,  104);
}

/**
 * @brief Get field currents from dog_motors_state message
 *
 * @return [A] 电流数组
 */
static inline uint16_t mavlink_msg_dog_motors_state_get_currents(const mavlink_message_t* msg, float *currents)
{
    return _MAV_RETURN_float_array(msg, currents, 12,  152);
}

/**
 * @brief Get field temperatures from dog_motors_state message
 *
 * @return [degC] 温度数组
 */
static inline uint16_t mavlink_msg_dog_motors_state_get_temperatures(const mavlink_message_t* msg, uint8_t *temperatures)
{
    return _MAV_RETURN_uint8_t_array(msg, temperatures, 12,  212);
}

/**
 * @brief Get field statuses from dog_motors_state message
 *
 * @return  状态数组
 */
static inline uint16_t mavlink_msg_dog_motors_state_get_statuses(const mavlink_message_t* msg, uint8_t *statuses)
{
    return _MAV_RETURN_uint8_t_array(msg, statuses, 12,  224);
}

/**
 * @brief Decode a dog_motors_state message into a struct
 *
 * @param msg The message to decode
 * @param dog_motors_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_dog_motors_state_decode(const mavlink_message_t* msg, mavlink_dog_motors_state_t* dog_motors_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    dog_motors_state->timestamp = mavlink_msg_dog_motors_state_get_timestamp(msg);
    mavlink_msg_dog_motors_state_get_positions(msg, dog_motors_state->positions);
    mavlink_msg_dog_motors_state_get_velocities(msg, dog_motors_state->velocities);
    mavlink_msg_dog_motors_state_get_torques(msg, dog_motors_state->torques);
    mavlink_msg_dog_motors_state_get_currents(msg, dog_motors_state->currents);
    mavlink_msg_dog_motors_state_get_motors_id(msg, dog_motors_state->motors_id);
    mavlink_msg_dog_motors_state_get_temperatures(msg, dog_motors_state->temperatures);
    mavlink_msg_dog_motors_state_get_statuses(msg, dog_motors_state->statuses);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN? msg->len : MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN;
        memset(dog_motors_state, 0, MAVLINK_MSG_ID_DOG_MOTORS_STATE_LEN);
    memcpy(dog_motors_state, _MAV_PAYLOAD(msg), len);
#endif
}
