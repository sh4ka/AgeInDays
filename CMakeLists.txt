cmake_minimum_required(VERSION 3.22)
project(AgeInDays)

set(CMAKE_CXX_STANDARD 17)
FIND_PACKAGE(Boost 1.58.0 REQUIRED COMPONENTS log_setup log)

add_executable(AgeInDays src/main.cpp src/Common/logger.cpp)

target_include_directories(AgeInDays
        PUBLIC
        ${Boost_INCLUDE_DIRS}
        "${CMAKE_CURRENT_SOURCE_DIR}/src"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/Common"
        )

target_link_libraries(AgeInDays
        PUBLIC
        Boost::log_setup
        Boost::log
        )

target_compile_options(AgeInDays
        PUBLIC
        -DBOOST_LOG_DYN_LINK
        )