// MESSAGE DOG_MOTORS_STATE support class

#pragma once

namespace mavlink {
namespace robot_dog {
namespace msg {

/**
 * @brief DOG_MOTORS_STATE message
 *
 * 12个电机的状态反馈(合并)
 */
struct DOG_MOTORS_STATE : mavlink::Message {
    static constexpr msgid_t MSG_ID = 231;
    static constexpr size_t LENGTH = 236;
    static constexpr size_t MIN_LENGTH = 236;
    static constexpr uint8_t CRC_EXTRA = 5;
    static constexpr auto NAME = "DOG_MOTORS_STATE";


    uint64_t timestamp; /*< [ns] 时间戳 */
    std::array<uint8_t, 12> motors_id; /*<  电机ID数组 */
    std::array<float, 12> positions; /*< [rad] 当前位置数组 */
    std::array<float, 12> velocities; /*< [rad/s] 当前速度数组 */
    std::array<float, 12> torques; /*< [Nm] 当前力矩数组 */
    std::array<float, 12> currents; /*< [A] 电流数组 */
    std::array<uint8_t, 12> temperatures; /*< [degC] 温度数组 */
    std::array<uint8_t, 12> statuses; /*<  状态数组 */


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
        ss << "  positions: [" << to_string(positions) << "]" << std::endl;
        ss << "  velocities: [" << to_string(velocities) << "]" << std::endl;
        ss << "  torques: [" << to_string(torques) << "]" << std::endl;
        ss << "  currents: [" << to_string(currents) << "]" << std::endl;
        ss << "  temperatures: [" << to_string(temperatures) << "]" << std::endl;
        ss << "  statuses: [" << to_string(statuses) << "]" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timestamp;                     // offset: 0
        map << positions;                     // offset: 8
        map << velocities;                    // offset: 56
        map << torques;                       // offset: 104
        map << currents;                      // offset: 152
        map << motors_id;                     // offset: 200
        map << temperatures;                  // offset: 212
        map << statuses;                      // offset: 224
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timestamp;                     // offset: 0
        map >> positions;                     // offset: 8
        map >> velocities;                    // offset: 56
        map >> torques;                       // offset: 104
        map >> currents;                      // offset: 152
        map >> motors_id;                     // offset: 200
        map >> temperatures;                  // offset: 212
        map >> statuses;                      // offset: 224
    }
};

} // namespace msg
} // namespace robot_dog
} // namespace mavlink
