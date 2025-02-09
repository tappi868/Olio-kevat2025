cmake_minimum_required(VERSION 3.16)

project(vk5_tht LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vk5_tht main.cpp
    seuraaja.h
    notifikaatori.h
    seuraaja.cpp
    notifikaattori.cpp)

include(GNUInstallDirs)
install(TARGETS vk5_tht
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
