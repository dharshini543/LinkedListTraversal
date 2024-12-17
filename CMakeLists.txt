cmake_minimum_required(VERSION 3.16)

project(LinkedListTraversal LANGUAGES C)

add_executable(LinkedListTraversal main.c)

include(GNUInstallDirs)
install(TARGETS LinkedListTraversal
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
