
cmake_minimum_required(VERSION 3.2)
project(SimpleCalculatorPro)


find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})

add_definitions(${GTK3_CFLAGS_OTHER})

add_executable(SimpleCalculatorPro SCP.cpp Calculator.cpp Calculator.h Arithmetics.cpp Arithmetics.h History.cpp History.h)
target_link_libraries(SimpleCalculatorPro ${GTK3_LIBRARIES})
