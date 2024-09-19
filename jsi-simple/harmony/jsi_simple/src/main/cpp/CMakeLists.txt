cmake_minimum_required(VERSION 3.13)
set(CMAKE_VERBOSE_MAKEFILE on)

file(GLOB rnoh_jsi_simple_SRC CONFIGURE_DEPENDS *.cpp)

# "${CMAKE_SOURCE_DIR}/../../../../../cpp" is stable within entry or jsi_simple
# ${CMAKE_CURRENT_SOURCE_DIR} is either entry/oh_modules/jsi_simple or jsi_simple
set(rnoh_jsi_simple_common_dir "${CMAKE_SOURCE_DIR}/../../../../../cpp")
file(GLOB rnoh_jsi_simple_common_SRC "${rnoh_jsi_simple_common_dir}/*.cpp")

add_library(rnoh_jsi_simple SHARED
    ${rnoh_jsi_simple_SRC}
    ${rnoh_jsi_simple_common_SRC})

target_include_directories(rnoh_jsi_simple PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${rnoh_jsi_simple_common_dir})

target_link_libraries(rnoh_jsi_simple PUBLIC rnoh)
