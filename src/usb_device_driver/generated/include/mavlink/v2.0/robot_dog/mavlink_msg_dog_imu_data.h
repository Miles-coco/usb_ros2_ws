#pragma once
// MESSAGE DOG_IMU_DATA PACKING

#define MAVLINK_MSG_ID_DOG_IMU_DATA 232


typedef struct __mavlink_dog_imu_data_t {
 uint64_t timestamp; /*< [ns] 时间戳*/
 float qw; /*<  四元数 W*/
 float qx; /*<  四元数 X*/
 float qy; /*<  四元数 Y*/
 float qz; /*<  四元数 Z*/
 float ax; /*< [m/s/s] X加速度*/
 float ay; /*< [m/s/s] Y加速度*/
 float az; /*< [m/s/s] Z加速度*/
 float gx; /*< [rad/s] X角速度*/
 float gy; /*< [rad/s] Y角速度*/
 float gz; /*< [rad/s] Z角速度*/
} mavlink_dog_imu_data_t;

#define MAVLINK_MSG_ID_DOG_IMU_DATA_LEN 48
#define MAVLINK_MSG_ID_DOG_IMU_DATA_MIN_LEN 48
#define MAVLINK_MSG_ID_232_LEN 48
#define MAVLINK_MSG_ID_232_MIN_LEN 48

#define MAVLINK_MSG_ID_DOG_IMU_DATA_CRC 36
#define MAVLINK_MSG_ID_232_CRC 36



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DOG_IMU_DATA { \
    232, \
    "DOG_IMU_DATA", \
    11, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_dog_imu_data_t, timestamp) }, \
         { "qw", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_dog_imu_data_t, qw) }, \
         { "qx", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_dog_imu_data_t, qx) }, \
         { "qy", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_dog_imu_data_t, qy) }, \
         { "qz", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_dog_imu_data_t, qz) }, \
         { "ax", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_dog_imu_data_t, ax) }, \
         { "ay", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_dog_imu_data_t, ay) }, \
         { "az", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_dog_imu_data_t, az) }, \
         { "gx", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_dog_imu_data_t, gx) }, \
         { "gy", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_dog_imu_data_t, gy) }, \
         { "gz", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_dog_imu_data_t, gz) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DOG_IMU_DATA { \
    "DOG_IMU_DATA", \
    11, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_dog_imu_data_t, timestamp) }, \
         { "qw", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_dog_imu_data_t, qw) }, \
         { "qx", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_dog_imu_data_t, qx) }, \
         { "qy", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_dog_imu_data_t, qy) }, \
         { "qz", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_dog_imu_data_t, qz) }, \
         { "ax", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_dog_imu_data_t, ax) }, \
         { "ay", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_dog_imu_data_t, ay) }, \
         { "az", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_dog_imu_data_t, az) }, \
         { "gx", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_dog_imu_data_t, gx) }, \
         { "gy", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_dog_imu_data_t, gy) }, \
         { "gz", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_dog_imu_data_t, gz) }, \
         } \
}
#endif

/**
 * @brief Pack a dog_imu_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [ns] 时间戳
 * @param qw  四元数 W
 * @param qx  四元数 X
 * @param qy  四元数 Y
 * @param qz  四元数 Z
 * @param ax [m/s/s] X加速度
 * @param ay [m/s/s] Y加速度
 * @param az [m/s/s] Z加速度
 * @param gx [rad/s] X角速度
 * @param gy [rad/s] Y角速度
 * @param gz [rad/s] Z角速度
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dog_imu_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, float qw, float qx, float qy, float qz, float ax, float ay, float az, float gx, float gy, float gz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOG_IMU_DATA_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, qw);
    _mav_put_float(buf, 12, qx);
    _mav_put_float(buf, 16, qy);
    _mav_put_float(buf, 20, qz);
    _mav_put_float(buf, 24, ax);
    _mav_put_float(buf, 28, ay);
    _mav_put_float(buf, 32, az);
    _mav_put_float(buf, 36, gx);
    _mav_put_float(buf, 40, gy);
    _mav_put_float(buf, 44, gz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DOG_IMU_DATA_LEN);
#else
    mavlink_dog_imu_data_t packet;
    packet.timestamp = timestamp;
    packet.qw = qw;
    packet.qx = qx;
    packet.qy = qy;
    packet.qz = qz;
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.gx = gx;
    packet.gy = gy;
    packet.gz = gz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DOG_IMU_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DOG_IMU_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DOG_IMU_DATA_MIN_LEN, MAVLINK_MSG_ID_DOG_IMU_DATA_LEN, MAVLINK_MSG_ID_DOG_IMU_DATA_CRC);
}

/**
 * @brief Pack a dog_imu_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [ns] 时间戳
 * @param qw  四元数 W
 * @param qx  四元数 X
 * @param qy  四元数 Y
 * @param qz  四元数 Z
 * @param ax [m/s/s] X加速度
 * @param ay [m/s/s] Y加速度
 * @param az [m/s/s] Z加速度
 * @param gx [rad/s] X角速度
 * @param gy [rad/s] Y角速度
 * @param gz [rad/s] Z角速度
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dog_imu_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, float qw, float qx, float qy, float qz, float ax, float ay, float az, float gx, float gy, float gz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOG_IMU_DATA_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, qw);
    _mav_put_float(buf, 12, qx);
    _mav_put_float(buf, 16, qy);
    _mav_put_float(buf, 20, qz);
    _mav_put_float(buf, 24, ax);
    _mav_put_float(buf, 28, ay);
    _mav_put_float(buf, 32, az);
    _mav_put_float(buf, 36, gx);
    _mav_put_float(buf, 40, gy);
    _mav_put_float(buf, 44, gz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DOG_IMU_DATA_LEN);
#else
    mavlink_dog_imu_data_t packet;
    packet.timestamp = timestamp;
    packet.qw = qw;
    packet.qx = qx;
    packet.qy = qy;
    packet.qz = qz;
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.gx = gx;
    packet.gy = gy;
    packet.gz = gz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DOG_IMU_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DOG_IMU_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DOG_IMU_DATA_MIN_LEN, MAVLINK_MSG_ID_DOG_IMU_DATA_LEN, MAVLINK_MSG_ID_DOG_IMU_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DOG_IMU_DATA_MIN_LEN, MAVLINK_MSG_ID_DOG_IMU_DATA_LEN);
#endif
}

/**
 * @brief Pack a dog_imu_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp [ns] 时间戳
 * @param qw  四元数 W
 * @param qx  四元数 X
 * @param qy  四元数 Y
 * @param qz  四元数 Z
 * @param ax [m/s/s] X加速度
 * @param ay [m/s/s] Y加速度
 * @param az [m/s/s] Z加速度
 * @param gx [rad/s] X角速度
 * @param gy [rad/s] Y角速度
 * @param gz [rad/s] Z角速度
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dog_imu_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,float qw,float qx,float qy,float qz,float ax,float ay,float az,float gx,float gy,float gz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOG_IMU_DATA_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, qw);
    _mav_put_float(buf, 12, qx);
    _mav_put_float(buf, 16, qy);
    _mav_put_float(buf, 20, qz);
    _mav_put_float(buf, 24, ax);
    _mav_put_float(buf, 28, ay);
    _mav_put_float(buf, 32, az);
    _mav_put_float(buf, 36, gx);
    _mav_put_float(buf, 40, gy);
    _mav_put_float(buf, 44, gz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DOG_IMU_DATA_LEN);
#else
    mavlink_dog_imu_data_t packet;
    packet.timestamp = timestamp;
    packet.qw = qw;
    packet.qx = qx;
    packet.qy = qy;
    packet.qz = qz;
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.gx = gx;
    packet.gy = gy;
    packet.gz = gz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DOG_IMU_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DOG_IMU_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DOG_IMU_DATA_MIN_LEN, MAVLINK_MSG_ID_DOG_IMU_DATA_LEN, MAVLINK_MSG_ID_DOG_IMU_DATA_CRC);
}

/**
 * @brief Encode a dog_imu_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param dog_imu_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dog_imu_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_dog_imu_data_t* dog_imu_data)
{
    return mavlink_msg_dog_imu_data_pack(system_id, component_id, msg, dog_imu_data->timestamp, dog_imu_data->qw, dog_imu_data->qx, dog_imu_data->qy, dog_imu_data->qz, dog_imu_data->ax, dog_imu_data->ay, dog_imu_data->az, dog_imu_data->gx, dog_imu_data->gy, dog_imu_data->gz);
}

/**
 * @brief Encode a dog_imu_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dog_imu_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dog_imu_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_dog_imu_data_t* dog_imu_data)
{
    return mavlink_msg_dog_imu_data_pack_chan(system_id, component_id, chan, msg, dog_imu_data->timestamp, dog_imu_data->qw, dog_imu_data->qx, dog_imu_data->qy, dog_imu_data->qz, dog_imu_data->ax, dog_imu_data->ay, dog_imu_data->az, dog_imu_data->gx, dog_imu_data->gy, dog_imu_data->gz);
}

/**
 * @brief Encode a dog_imu_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param dog_imu_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dog_imu_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_dog_imu_data_t* dog_imu_data)
{
    return mavlink_msg_dog_imu_data_pack_status(system_id, component_id, _status, msg,  dog_imu_data->timestamp, dog_imu_data->qw, dog_imu_data->qx, dog_imu_data->qy, dog_imu_data->qz, dog_imu_data->ax, dog_imu_data->ay, dog_imu_data->az, dog_imu_data->gx, dog_imu_data->gy, dog_imu_data->gz);
}

/**
 * @brief Send a dog_imu_data message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp [ns] 时间戳
 * @param qw  四元数 W
 * @param qx  四元数 X
 * @param qy  四元数 Y
 * @param qz  四元数 Z
 * @param ax [m/s/s] X加速度
 * @param ay [m/s/s] Y加速度
 * @param az [m/s/s] Z加速度
 * @param gx [rad/s] X角速度
 * @param gy [rad/s] Y角速度
 * @param gz [rad/s] Z角速度
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_dog_imu_data_send(mavlink_channel_t chan, uint64_t timestamp, float qw, float qx, float qy, float qz, float ax, float ay, float az, float gx, float gy, float gz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOG_IMU_DATA_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, qw);
    _mav_put_float(buf, 12, qx);
    _mav_put_float(buf, 16, qy);
    _mav_put_float(buf, 20, qz);
    _mav_put_float(buf, 24, ax);
    _mav_put_float(buf, 28, ay);
    _mav_put_float(buf, 32, az);
    _mav_put_float(buf, 36, gx);
    _mav_put_float(buf, 40, gy);
    _mav_put_float(buf, 44, gz);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOG_IMU_DATA, buf, MAVLINK_MSG_ID_DOG_IMU_DATA_MIN_LEN, MAVLINK_MSG_ID_DOG_IMU_DATA_LEN, MAVLINK_MSG_ID_DOG_IMU_DATA_CRC);
#else
    mavlink_dog_imu_data_t packet;
    packet.timestamp = timestamp;
    packet.qw = qw;
    packet.qx = qx;
    packet.qy = qy;
    packet.qz = qz;
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.gx = gx;
    packet.gy = gy;
    packet.gz = gz;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOG_IMU_DATA, (const char *)&packet, MAVLINK_MSG_ID_DOG_IMU_DATA_MIN_LEN, MAVLINK_MSG_ID_DOG_IMU_DATA_LEN, MAVLINK_MSG_ID_DOG_IMU_DATA_CRC);
#endif
}

/**
 * @brief Send a dog_imu_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_dog_imu_data_send_struct(mavlink_channel_t chan, const mavlink_dog_imu_data_t* dog_imu_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_dog_imu_data_send(chan, dog_imu_data->timestamp, dog_imu_data->qw, dog_imu_data->qx, dog_imu_data->qy, dog_imu_data->qz, dog_imu_data->ax, dog_imu_data->ay, dog_imu_data->az, dog_imu_data->gx, dog_imu_data->gy, dog_imu_data->gz);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOG_IMU_DATA, (const char *)dog_imu_data, MAVLINK_MSG_ID_DOG_IMU_DATA_MIN_LEN, MAVLINK_MSG_ID_DOG_IMU_DATA_LEN, MAVLINK_MSG_ID_DOG_IMU_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_DOG_IMU_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_dog_imu_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, float qw, float qx, float qy, float qz, float ax, float ay, float az, float gx, float gy, float gz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, qw);
    _mav_put_float(buf, 12, qx);
    _mav_put_float(buf, 16, qy);
    _mav_put_float(buf, 20, qz);
    _mav_put_float(buf, 24, ax);
    _mav_put_float(buf, 28, ay);
    _mav_put_float(buf, 32, az);
    _mav_put_float(buf, 36, gx);
    _mav_put_float(buf, 40, gy);
    _mav_put_float(buf, 44, gz);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOG_IMU_DATA, buf, MAVLINK_MSG_ID_DOG_IMU_DATA_MIN_LEN, MAVLINK_MSG_ID_DOG_IMU_DATA_LEN, MAVLINK_MSG_ID_DOG_IMU_DATA_CRC);
#else
    mavlink_dog_imu_data_t *packet = (mavlink_dog_imu_data_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->qw = qw;
    packet->qx = qx;
    packet->qy = qy;
    packet->qz = qz;
    packet->ax = ax;
    packet->ay = ay;
    packet->az = az;
    packet->gx = gx;
    packet->gy = gy;
    packet->gz = gz;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOG_IMU_DATA, (const char *)packet, MAVLINK_MSG_ID_DOG_IMU_DATA_MIN_LEN, MAVLINK_MSG_ID_DOG_IMU_DATA_LEN, MAVLINK_MSG_ID_DOG_IMU_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE DOG_IMU_DATA UNPACKING


/**
 * @brief Get field timestamp from dog_imu_data message
 *
 * @return [ns] 时间戳
 */
static inline uint64_t mavlink_msg_dog_imu_data_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field qw from dog_imu_data message
 *
 * @return  四元数 W
 */
static inline float mavlink_msg_dog_imu_data_get_qw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field qx from dog_imu_data message
 *
 * @return  四元数 X
 */
static inline float mavlink_msg_dog_imu_data_get_qx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field qy from dog_imu_data message
 *
 * @return  四元数 Y
 */
static inline float mavlink_msg_dog_imu_data_get_qy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field qz from dog_imu_data message
 *
 * @return  四元数 Z
 */
static inline float mavlink_msg_dog_imu_data_get_qz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field ax from dog_imu_data message
 *
 * @return [m/s/s] X加速度
 */
static inline float mavlink_msg_dog_imu_data_get_ax(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field ay from dog_imu_data message
 *
 * @return [m/s/s] Y加速度
 */
static inline float mavlink_msg_dog_imu_data_get_ay(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field az from dog_imu_data message
 *
 * @return [m/s/s] Z加速度
 */
static inline float mavlink_msg_dog_imu_data_get_az(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field gx from dog_imu_data message
 *
 * @return [rad/s] X角速度
 */
static inline float mavlink_msg_dog_imu_data_get_gx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field gy from dog_imu_data message
 *
 * @return [rad/s] Y角速度
 */
static inline float mavlink_msg_dog_imu_data_get_gy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field gz from dog_imu_data message
 *
 * @return [rad/s] Z角速度
 */
static inline float mavlink_msg_dog_imu_data_get_gz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Decode a dog_imu_data message into a struct
 *
 * @param msg The message to decode
 * @param dog_imu_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_dog_imu_data_decode(const mavlink_message_t* msg, mavlink_dog_imu_data_t* dog_imu_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    dog_imu_data->timestamp = mavlink_msg_dog_imu_data_get_timestamp(msg);
    dog_imu_data->qw = mavlink_msg_dog_imu_data_get_qw(msg);
    dog_imu_data->qx = mavlink_msg_dog_imu_data_get_qx(msg);
    dog_imu_data->qy = mavlink_msg_dog_imu_data_get_qy(msg);
    dog_imu_data->qz = mavlink_msg_dog_imu_data_get_qz(msg);
    dog_imu_data->ax = mavlink_msg_dog_imu_data_get_ax(msg);
    dog_imu_data->ay = mavlink_msg_dog_imu_data_get_ay(msg);
    dog_imu_data->az = mavlink_msg_dog_imu_data_get_az(msg);
    dog_imu_data->gx = mavlink_msg_dog_imu_data_get_gx(msg);
    dog_imu_data->gy = mavlink_msg_dog_imu_data_get_gy(msg);
    dog_imu_data->gz = mavlink_msg_dog_imu_data_get_gz(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DOG_IMU_DATA_LEN? msg->len : MAVLINK_MSG_ID_DOG_IMU_DATA_LEN;
        memset(dog_imu_data, 0, MAVLINK_MSG_ID_DOG_IMU_DATA_LEN);
    memcpy(dog_imu_data, _MAV_PAYLOAD(msg), len);
#endif
}
