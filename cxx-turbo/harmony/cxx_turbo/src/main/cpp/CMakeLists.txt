cmake_minimum_required(VERSION 3.13)
set(CMAKE_VERBOSE_MAKEFILE on)

file(GLOB rnoh_cxx_turbo_SRC CONFIGURE_DEPENDS *.cpp)

# "${CMAKE_SOURCE_DIR}/../../../../../cpp" is stable within entry or cxx_turbo
# ${CMAKE_CURRENT_SOURCE_DIR} is either entry/oh_modules/cxx_turbo or cxx_turbo
set(rnoh_cxx_turbo_common_dir "${CMAKE_SOURCE_DIR}/../../../../../cpp")
file(GLOB rnoh_cxx_turbo_common_SRC "${rnoh_cxx_turbo_common_dir}/*.cpp")

add_library(rnoh_cxx_turbo SHARED
    ${rnoh_cxx_turbo_SRC}
    ${rnoh_cxx_turbo_common_SRC})

target_include_directories(rnoh_cxx_turbo PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${rnoh_cxx_turbo_common_dir})

target_link_libraries(rnoh_cxx_turbo PUBLIC rnoh)
