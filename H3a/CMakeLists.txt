cmake_minimum_required(VERSION 3.16)

project(H3a LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H3a main.cpp
    chef.h chef.cpp
    italianchef.h italianchef.cpp)

include(GNUInstallDirs)
install(TARGETS H3a
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
