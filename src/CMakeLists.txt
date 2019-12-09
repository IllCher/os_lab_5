cmake_minimum_required(VERSION 3.10)
project(os_lab_5)
set(CMAKE_CXX_STANDARD 17)

add_library(${PROJECT_NAME}_lib SHARED lib/vecmd5.cpp)

target_include_directories(${PROJECT_NAME}_lib PUBLIC ${PROJECT_SOURCE_DIR}/lib)


add_executable(${PROJECT_NAME} test1.cpp)
add_executable(${PROJECT_NAME}2 test2.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE ${PROJECT_NAME}_lib)
