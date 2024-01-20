cmake_minimum_required(VERSION 3.28.1)

project(locker_tracker)

add_executable(${PROJECT_NAME} main.cpp handlers.cpp colorText.cpp assets.cpp utilityFunctions.cpp)

set(CMAKE_TOOLCHAIN_FILE "/home/osa/Documents/locker-tracker/vcpkg/scripts/buildsystems/vcpkg.cmake")
set (CMAKE_PREFIX_PATH "/home/osa/Documents/locker-tracker/vcpkg/installed/x64-linux/share")

find_package(jsoncpp CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE jsoncpp_lib)

#find_package(jsoncpp CONFIG REQUIRED)
#target_link_libraries(${PROJECT_NAME} PRIVATE Jsoncpp::Jsoncpp)