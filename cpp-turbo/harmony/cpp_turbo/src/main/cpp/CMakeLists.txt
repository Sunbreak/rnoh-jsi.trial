cmake_minimum_required(VERSION 3.13)
set(CMAKE_VERBOSE_MAKEFILE on)

file(GLOB rnoh_cpp_turbo_SRC CONFIGURE_DEPENDS *.cpp)

set(rnoh_cpp_turbo_generated_dir "${CMAKE_CURRENT_SOURCE_DIR}/generated/react_native_cpp_turbo")
file(GLOB_RECURSE rnoh_cpp_turbo_generated_SRC "${rnoh_cpp_turbo_generated_dir}/**/*.cpp")

# "${CMAKE_SOURCE_DIR}/../../../../../cpp" is stable within entry or cpp_turbo
# ${CMAKE_CURRENT_SOURCE_DIR} is either entry/oh_modules/cpp_turbo or cpp_turbo
set(rnoh_cpp_turbo_common_dir "${CMAKE_SOURCE_DIR}/../../../../../cpp")
file(GLOB rnoh_cpp_turbo_common_SRC "${rnoh_cpp_turbo_common_dir}/*.cpp")

add_library(rnoh_cpp_turbo SHARED
    ${rnoh_cpp_turbo_SRC}
    ${rnoh_cpp_turbo_generated_SRC}
    ${rnoh_cpp_turbo_common_SRC})

target_include_directories(rnoh_cpp_turbo PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${rnoh_cpp_turbo_generated_dir}
    ${rnoh_cpp_turbo_common_dir})

target_link_libraries(rnoh_cpp_turbo PUBLIC rnoh)
