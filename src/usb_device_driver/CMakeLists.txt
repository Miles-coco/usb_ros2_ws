cmake_minimum_required(VERSION 3.8)
project(usb_device_driver)

# 设置C++标准
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 查找依赖
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# 查找libserial
find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBSERIAL REQUIRED libserial)

# 如果没有找到libserial，尝试通过find_library查找
if(NOT LIBSERIAL_FOUND)
  find_library(LIBSERIAL_LIBRARY NAMES serial)
  if(LIBSERIAL_LIBRARY)
    set(LIBSERIAL_LIBRARIES ${LIBSERIAL_LIBRARY})
    set(LIBSERIAL_FOUND TRUE)
    message(STATUS "Found libserial: ${LIBSERIAL_LIBRARY}")
  else()
    message(FATAL_ERROR "libserial not found, install with: sudo apt-get install libserial-dev")
  endif()
endif()

# 生成自定义消息接口
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/IMUData.msg"
  "msg/MotorsCmd.msg"
  "msg/MotorsStates.msg"
  DEPENDENCIES std_msgs geometry_msgs
)

# 包含目录
include_directories(
  include
  ${LIBSERIAL_INCLUDE_DIRS}
  generated/include
)

# 创建可执行文件
add_executable(usb_reader_node
  src/main.cpp
  src/usb_reader_node.cpp
)

# 设置目标包含目录
target_include_directories(usb_reader_node PRIVATE
  include
  ${LIBSERIAL_INCLUDE_DIRS}
)

# 设置目标依赖
ament_target_dependencies(usb_reader_node
  rclcpp
  std_msgs
  geometry_msgs
)

# 链接库 - 包括消息库
target_link_libraries(usb_reader_node
  ${LIBSERIAL_LIBRARIES}
  ${PROJECT_NAME}__rosidl_typesupport_cpp
)

# 忽略MAVLink生成代码的警告
# target_compile_options(usb_reader_node PRIVATE -Wno-narrowing -Wno-pedantic -Wno-conversion)

# 安装目标
install(TARGETS
  usb_reader_node
  DESTINATION lib/${PROJECT_NAME}
)

# 安装可执行文件到bin目录
install(TARGETS
  usb_reader_node
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

# 安装头文件
install(DIRECTORY include/
  DESTINATION include/
)

# 安装launch文件
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)

# 安装配置文件
install(DIRECTORY
  config
  DESTINATION share/${PROJECT_NAME}/
)

# 导出依赖
ament_export_include_directories(include)
ament_export_dependencies(
  rclcpp
  std_msgs
  geometry_msgs
)

# 最后调用ament_package
ament_package()