add_library(hw_module
    hw_driver.cpp
)

target_include_directories(hw_module PUBLIC ${CMAKE_SOURCE_DIR}/include)
