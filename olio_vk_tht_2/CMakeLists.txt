cmake_minimum_required(VERSION 3.16)

project(olio_vk_tht_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(olio_vk_tht_2 main.cpp
    game.cpp
    game.h)

include(GNUInstallDirs)
install(TARGETS olio_vk_tht_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
