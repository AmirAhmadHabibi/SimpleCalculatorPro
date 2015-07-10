
cmake_minimum_required(VERSION 3.2)
project(SimpleCalculatorPro)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})

add_definitions(${GTK3_CFLAGS_OTHER})

add_executable(SimpleCalculatorPro SCP.cpp Calculator.cpp Calculator.h Arithmetics.cpp Arithmetics.h History.cpp History.h Interface.cpp Interface.h)
target_link_libraries(SimpleCalculatorPro ${GTK3_LIBRARIES})
