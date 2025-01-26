cmake_minimum_required(VERSION 3.16)

project(vk3_tht LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vk3_tht main.cpp
    chef.h
    italianChef.h
    chef.cpp
    italianChef.cpp)

include(GNUInstallDirs)
install(TARGETS vk3_tht
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
