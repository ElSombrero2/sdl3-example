add_library(app STATIC app.cpp)

target_include_directories(app PUBLIC ${PROJECT_SOURCE_DIR}/include)
