// MESSAGE DOG_MOTORS_CMD support class

#pragma once

namespace mavlink {
namespace robot_dog {
namespace msg {

/**
 * @brief DOG_MOTORS_CMD message
 *
 * 12个电机的控制指令(合并)
 */
struct DOG_MOTORS_CMD : mavlink::Message {
    static constexpr msgid_t MSG_ID = 230;
    static constexpr size_t LENGTH = 212;
    static constexpr size_t MIN_LENGTH = 212;
    static constexpr uint8_t CRC_EXTRA = 83;
    static constexpr auto NAME = "DOG_MOTORS_CMD";


    uint64_t timestamp; /*< [ns] 时间戳 */
    std::array<uint8_t, 12> motors_id; /*<  电机ID数组 */
    std::array<float, 12> target_positions; /*< [rad] 目标位置数组 */
    std::array<float, 12> target_velocities; /*< [rad/s] 目标速度数组 */
    std::array<float, 12> target_torques; /*< [Nm] 目标力矩数组 */
    std::array<uint16_t, 12> kp; /*<  位置环比例增益数组 */
    std::array<uint16_t, 12> kd; /*<  速度环微分增益数组 */


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
        ss << "  motors_id: [" << to_string(motors_id) << "]" << std::endl;
        ss << "  target_positions: [" << to_string(target_positions) << "]" << std::endl;
        ss << "  target_velocities: [" << to_string(target_velocities) << "]" << std::endl;
        ss << "  target_torques: [" << to_string(target_torques) << "]" << std::endl;
        ss << "  kp: [" << to_string(kp) << "]" << std::endl;
        ss << "  kd: [" << to_string(kd) << "]" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timestamp;                     // offset: 0
        map << target_positions;              // offset: 8
        map << target_velocities;             // offset: 56
        map << target_torques;                // offset: 104
        map << kp;                            // offset: 152
        map << kd;                            // offset: 176
        map << motors_id;                     // offset: 200
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timestamp;                     // offset: 0
        map >> target_positions;              // offset: 8
        map >> target_velocities;             // offset: 56
        map >> target_torques;                // offset: 104
        map >> kp;                            // offset: 152
        map >> kd;                            // offset: 176
        map >> motors_id;                     // offset: 200
    }
};

} // namespace msg
} // namespace robot_dog
} // namespace mavlink
