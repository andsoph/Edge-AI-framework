add_library(data_module
    data_processing.cpp
)

target_include_directories(data_module PUBLIC ${CMAKE_SOURCE_DIR}/include)
