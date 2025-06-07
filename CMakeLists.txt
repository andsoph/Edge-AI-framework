cmake_minimum_required(VERSION 3.10)
project(edge_ai)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include subdirectories
add_subdirectory(src/data)
add_subdirectory(src/ml)
add_subdirectory(src/hw)

# Add executable
add_executable(example_app examples/main.cpp)

# Include path
target_include_directories(example_app PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Link the modules
target_link_libraries(example_app
    data_module
    ml_module
    hw_module
)