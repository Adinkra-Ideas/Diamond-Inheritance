cmake_minimum_required(VERSION 3.5)

project(ex00 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(AllFiles main.cpp
            Car.cpp
            cr.cpp
            Car.hpp
            cr.hpp)

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

add_executable(ex00 ${AllFiles})


include(GNUInstallDirs)
install(TARGETS ex00
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)