cmake_minimum_required(VERSION 3.5)

project(ex01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(AllFiles main.cpp
            cr.cpp
            Parts_base.cpp
            Brand_mid.cpp
            Engine_mid.cpp
            Wheel_mid.cpp
            Car_top.cpp
            cr.hpp
            Parts_base.hpp
            Brand_mid.hpp
            Engine_mid.hpp
            Wheel_mid.hpp
            Car_top.hpp)

if (MSVC)
    # warning level 4
    add_compile_options(/W4)
else()
    # additional warnings
    add_compile_options(
          -Wextra
          -Werror
          -Wall
          -Wpedantic)
endif()

add_executable(ex01 ${AllFiles})


include(GNUInstallDirs)
install(TARGETS ex01
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
