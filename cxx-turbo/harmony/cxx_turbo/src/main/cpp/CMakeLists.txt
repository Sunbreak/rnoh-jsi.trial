cmake_minimum_required(VERSION 3.13)
set(CMAKE_VERBOSE_MAKEFILE on)

file(GLOB rnoh_cxx_turbo_SRC CONFIGURE_DEPENDS *.cpp)

set(rnoh_cxx_turbo_common_dir "${CMAKE_CURRENT_SOURCE_DIR}/../../../../..")

add_library(rnoh_cxx_turbo SHARED
    ${rnoh_cxx_turbo_SRC}
    "${rnoh_cxx_turbo_common_dir}/../../cpp/react-native-cxx-turbo.cpp")

target_include_directories(rnoh_cxx_turbo PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    "${rnoh_cxx_turbo_common_dir}/cpp")

target_link_libraries(rnoh_cxx_turbo PUBLIC rnoh)
