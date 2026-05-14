// MESSAGE DOG_IMU_DATA support class

#pragma once

namespace mavlink {
namespace robot_dog {
namespace msg {

/**
 * @brief DOG_IMU_DATA message
 *
 * IMU数据
 */
struct DOG_IMU_DATA : mavlink::Message {
    static constexpr msgid_t MSG_ID = 232;
    static constexpr size_t LENGTH = 48;
    static constexpr size_t MIN_LENGTH = 48;
    static constexpr uint8_t CRC_EXTRA = 36;
    static constexpr auto NAME = "DOG_IMU_DATA";


    uint64_t timestamp; /*< [ns] 时间戳 */
    float qw; /*<  四元数 W */
    float qx; /*<  四元数 X */
    float qy; /*<  四元数 Y */
    float qz; /*<  四元数 Z */
    float ax; /*< [m/s/s] X加速度 */
    float ay; /*< [m/s/s] Y加速度 */
    float az; /*< [m/s/s] Z加速度 */
    float gx; /*< [rad/s] X角速度 */
    float gy; /*< [rad/s] Y角速度 */
    float gz; /*< [rad/s] Z角速度 */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  timestamp: " << timestamp << std::endl;
        ss << "  qw: " << qw << std::endl;
        ss << "  qx: " << qx << std::endl;
        ss << "  qy: " << qy << std::endl;
        ss << "  qz: " << qz << std::endl;
        ss << "  ax: " << ax << std::endl;
        ss << "  ay: " << ay << std::endl;
        ss << "  az: " << az << std::endl;
        ss << "  gx: " << gx << std::endl;
        ss << "  gy: " << gy << std::endl;
        ss << "  gz: " << gz << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timestamp;                     // offset: 0
        map << qw;                            // offset: 8
        map << qx;                            // offset: 12
        map << qy;                            // offset: 16
        map << qz;                            // offset: 20
        map << ax;                            // offset: 24
        map << ay;                            // offset: 28
        map << az;                            // offset: 32
        map << gx;                            // offset: 36
        map << gy;                            // offset: 40
        map << gz;                            // offset: 44
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timestamp;                     // offset: 0
        map >> qw;                            // offset: 8
        map >> qx;                            // offset: 12
        map >> qy;                            // offset: 16
        map >> qz;                            // offset: 20
        map >> ax;                            // offset: 24
        map >> ay;                            // offset: 28
        map >> az;                            // offset: 32
        map >> gx;                            // offset: 36
        map >> gy;                            // offset: 40
        map >> gz;                            // offset: 44
    }
};

} // namespace msg
} // namespace robot_dog
} // namespace mavlink
