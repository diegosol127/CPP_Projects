# Minimum required version of CMake
CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

# Project name and version
PROJECT(MyProject VERSION 1.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add and executable
add_executable(MyProject
  src/main.cpp
  src/MyLibrary.cpp
)

# Include directories
target_include_directories(MyProject PUBLIC include)
