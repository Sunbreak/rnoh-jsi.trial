cmake_minimum_required(VERSION 3.13)
set(CMAKE_VERBOSE_MAKEFILE on)

file(GLOB rnoh_jsi_simple_SRC CONFIGURE_DEPENDS *.cpp)

set(rnoh_jsi_simple_common_dir "${CMAKE_CURRENT_SOURCE_DIR}/../../../../..")

add_library(rnoh_jsi_simple SHARED
    ${rnoh_jsi_simple_SRC}
    "${rnoh_jsi_simple_common_dir}/../../cpp/react-native-jsi-simple.cpp")

target_include_directories(rnoh_jsi_simple PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    "${rnoh_jsi_simple_common_dir}/cpp")

target_link_libraries(rnoh_jsi_simple PUBLIC rnoh)
