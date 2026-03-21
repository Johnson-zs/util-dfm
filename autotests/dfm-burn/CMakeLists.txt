cmake_minimum_required(VERSION 3.10)

project(dfm-burn-autotests)

# 根据主项目 Qt 版本设置库名称
if(QT_VERSION_MAJOR EQUAL 6)
    find_package(Qt6 COMPONENTS Core REQUIRED)
    set(QT_TEST_TARGET Qt6::Test)
    set(DFM_LIB_TARGET dfm6-burn)
else()
    find_package(Qt5 COMPONENTS Core REQUIRED)
    set(QT_TEST_TARGET Qt5::Test)
    set(DFM_LIB_TARGET dfm-burn)
endif()

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(TEST_SRCS
    tst_dfmburn.cpp
)

add_executable(dfm-burn-test ${TEST_SRCS})
target_link_libraries(dfm-burn-test
    ${QT_TEST_TARGET}
    ${DFM_LIB_TARGET}
)

add_test(NAME dfm-burn-test COMMAND dfm-burn-test)
