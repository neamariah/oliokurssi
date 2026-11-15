cmake_minimum_required(VERSION 3.16)

project(vektori_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vektori_2 main.cpp
    person.h person.cpp)

include(GNUInstallDirs)
install(TARGETS vektori_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
