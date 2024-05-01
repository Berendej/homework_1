cmake_minimum_required( VERSION 3.0 )
project( homework1 VERSION 1.0.0.1)
configure_file( version_config.in ${CMAKE_BINARY_DIR}/generated/version_config.h )
include_directories ( ${CMAKE_BINARY_DIR}/generated/ )
find_package(Boost COMPONENTS unit_test_framework REQUIRED)
add_library( homework1_lib homework1_version.cpp )
add_executable( homework1 homework1.cpp )
add_executable( homework1_test homework1_test.cpp )

target_link_libraries(homework1 PRIVATE homework1_lib )

target_link_libraries(homework1_test PRIVATE homework1_lib )
