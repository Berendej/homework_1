cmake_minimum_required( VERSION 3.0 )
project( homework1 VERSION 1.0.0.1)

set(PATCH_VERSION "2" CACHE INTERNAL "Patch version")

configure_file( version_config.in ${CMAKE_BINARY_DIR}/generated/version_config.h )
include_directories ( ${CMAKE_BINARY_DIR}/generated/ )
find_package(Boost COMPONENTS unit_test_framework REQUIRED)
add_library( homework1_lib homework1_version.cpp )
add_executable( homework1 homework1.cpp )
add_executable( homework1_test homework1_test.cpp )

target_link_libraries(homework1 PRIVATE homework1_lib )

target_link_libraries(homework1_test PRIVATE homework1_lib )

# package part which enables
# run: cmake --build . --target package
install(TARGETS homework1 RUNTIME DESTINATION bin)
set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PATCH_VERSION}")
set(CPACK_PACKAGE_CONTACT example@example.com)
include(CPack)

#testing part which enables
# cmake --build . --target test
enable_testing()
add_test(test_version homework1_test) 