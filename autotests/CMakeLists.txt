cmake_minimum_required(VERSION 3.10)

project(autotests)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DQT_DEBUG")
set(PROJECT_SOURCE_PATH "${CMAKE_SOURCE_DIR}/../src")

if(QT_VERSION_MAJOR EQUAL 6)
    find_package(Qt6 COMPONENTS Test REQUIRED)
else()
    find_package(Qt5 COMPONENTS Test REQUIRED)
endif()

include_directories(${PROJECT_SOURCE_PATH})

add_subdirectory(dfm-io)
add_subdirectory(dfm-mount)
add_subdirectory(dfm-burn)
add_subdirectory(dfm-search)
