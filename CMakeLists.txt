# CMakeLists.txt
cmake_minimum_required(VERSION 3.21)
project(cpp_template)

# Find dependencies provided by vcpkg.json (consumed by vcpkg.cmake).
find_package(Boost REQUIRED COMPONENTS filesystem)

# The `main` target.
add_executable(main)
target_sources(main PRIVATE src/main.cpp)
target_link_libraries(main PRIVATE Boost::boost Boost::filesystem Boost::diagnostic_definitions)
set_property(TARGET main PROPERTY CXX_STANDARD 20)


# The `tests` target.
add_executable(tests)
target_sources(tests PRIVATE src/main.cpp)
target_link_libraries(tests PRIVATE Boost::boost Boost::filesystem Boost::diagnostic_definitions)
set_property(TARGET tests PROPERTY CXX_STANDARD 20)
enable_testing()
add_test(tests tests)