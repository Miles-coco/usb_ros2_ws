// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from usb_device_driver:msg/MotorsCmd.idl
// generated code does not contain a copyright notice

#ifndef USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_CMD__TRAITS_HPP_
#define USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "usb_device_driver/msg/detail/motors_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace usb_device_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorsCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: motor_ids
  {
    if (msg.motor_ids.size() == 0) {
      out << "motor_ids: []";
    } else {
      out << "motor_ids: [";
      size_t pending_items = msg.motor_ids.size();
      for (auto item : msg.motor_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_positions
  {
    if (msg.target_positions.size() == 0) {
      out << "target_positions: []";
    } else {
      out << "target_positions: [";
      size_t pending_items = msg.target_positions.size();
      for (auto item : msg.target_positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_velocities
  {
    if (msg.target_velocities.size() == 0) {
      out << "target_velocities: []";
    } else {
      out << "target_velocities: [";
      size_t pending_items = msg.target_velocities.size();
      for (auto item : msg.target_velocities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_torques
  {
    if (msg.target_torques.size() == 0) {
      out << "target_torques: []";
    } else {
      out << "target_torques: [";
      size_t pending_items = msg.target_torques.size();
      for (auto item : msg.target_torques) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: kp
  {
    if (msg.kp.size() == 0) {
      out << "kp: []";
    } else {
      out << "kp: [";
      size_t pending_items = msg.kp.size();
      for (auto item : msg.kp) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: kd
  {
    if (msg.kd.size() == 0) {
      out << "kd: []";
    } else {
      out << "kd: [";
      size_t pending_items = msg.kd.size();
      for (auto item : msg.kd) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorsCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: motor_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_ids.size() == 0) {
      out << "motor_ids: []\n";
    } else {
      out << "motor_ids:\n";
      for (auto item : msg.motor_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_positions.size() == 0) {
      out << "target_positions: []\n";
    } else {
      out << "target_positions:\n";
      for (auto item : msg.target_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_velocities.size() == 0) {
      out << "target_velocities: []\n";
    } else {
      out << "target_velocities:\n";
      for (auto item : msg.target_velocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_torques
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_torques.size() == 0) {
      out << "target_torques: []\n";
    } else {
      out << "target_torques:\n";
      for (auto item : msg.target_torques) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.kp.size() == 0) {
      out << "kp: []\n";
    } else {
      out << "kp:\n";
      for (auto item : msg.kp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.kd.size() == 0) {
      out << "kd: []\n";
    } else {
      out << "kd:\n";
      for (auto item : msg.kd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorsCmd & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace usb_device_driver

namespace rosidl_generator_traits
{

[[deprecated("use usb_device_driver::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const usb_device_driver::msg::MotorsCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  usb_device_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use usb_device_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const usb_device_driver::msg::MotorsCmd & msg)
{
  return usb_device_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<usb_device_driver::msg::MotorsCmd>()
{
  return "usb_device_driver::msg::MotorsCmd";
}

template<>
inline const char * name<usb_device_driver::msg::MotorsCmd>()
{
  return "usb_device_driver/msg/MotorsCmd";
}

template<>
struct has_fixed_size<usb_device_driver::msg::MotorsCmd>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<usb_device_driver::msg::MotorsCmd>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<usb_device_driver::msg::MotorsCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_CMD__TRAITS_HPP_
