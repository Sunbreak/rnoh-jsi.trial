cmake_minimum_required(VERSION 3.13)
set(CMAKE_VERBOSE_MAKEFILE on)

set(rnoh_my_mod_generated_dir "${CMAKE_CURRENT_SOURCE_DIR}/generated/react_native_my_mod")
file(GLOB_RECURSE rnoh_my_mod_generated_SRC "${rnoh_my_mod_generated_dir}/**/*.cpp")
file(GLOB rnoh_my_mod_SRC CONFIGURE_DEPENDS *.cpp)
add_library(rnoh_my_mod SHARED ${rnoh_my_mod_SRC} ${rnoh_my_mod_generated_SRC})
target_include_directories(rnoh_my_mod PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${rnoh_my_mod_generated_dir})
target_link_libraries(rnoh_my_mod PUBLIC rnoh)
