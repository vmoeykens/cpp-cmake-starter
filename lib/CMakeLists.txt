add_library(local_library local_library.cpp)
target_include_directories(local_library PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")