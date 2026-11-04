cmake_minimum_required(VERSION 3.16)

project(H1_tehtava1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H1_tehtava1 main.cpp)

include(GNUInstallDirs)
install(TARGETS H1_tehtava1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
