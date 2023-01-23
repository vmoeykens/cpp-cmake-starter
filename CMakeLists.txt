cmake_minimum_required(VERSION 3.10)
project(starter_project)

# Set C++ standard to C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add external libraries
find_package(Boost REQUIRED)

# Add local libraries
add_subdirectory(lib)

# Add executable
add_executable(starter_project main.cpp)

# Link against external and local libraries
target_link_libraries(starter_project Boost::boost)
target_link_libraries(starter_project local_library)

# Add test executable
add_executable(test_starter_project test/test.cpp)

# Link against external and local libraries
target_link_libraries(test_starter_project Boost::boost)
target_link_libraries(test_starter_project local_library)

# Enable testing
enable_testing()
add_test(NAME starter_project_tests COMMAND test_starter_project)