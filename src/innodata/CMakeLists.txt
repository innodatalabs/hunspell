add_executable(main main.c)
add_definitions("-I ${CMAKE_INSTALL_PREFIX}/include")
target_link_libraries (main LINK_PUBLIC hunspell)
install(TARGETS main DESTINATION bin)