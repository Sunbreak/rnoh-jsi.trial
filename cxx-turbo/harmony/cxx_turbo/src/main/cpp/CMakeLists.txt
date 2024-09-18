cmake_minimum_required(VERSION 3.13)
set(CMAKE_VERBOSE_MAKEFILE on)

set(rnoh_cxx_turbo_generated_dir "${CMAKE_CURRENT_SOURCE_DIR}/generated/react_native_cxx_turbo")
file(GLOB_RECURSE rnoh_cxx_turbo_generated_SRC "${rnoh_cxx_turbo_generated_dir}/**/*.cpp")
file(GLOB rnoh_cxx_turbo_SRC CONFIGURE_DEPENDS *.cpp)
add_library(rnoh_cxx_turbo SHARED ${rnoh_cxx_turbo_SRC} ${rnoh_cxx_turbo_generated_SRC})
target_include_directories(rnoh_cxx_turbo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${rnoh_cxx_turbo_generated_dir})
target_link_libraries(rnoh_cxx_turbo PUBLIC rnoh)
