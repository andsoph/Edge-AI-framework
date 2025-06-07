add_library(ml_module
    ml_model.cpp
)

target_include_directories(ml_module PUBLIC ${CMAKE_SOURCE_DIR}/include)
