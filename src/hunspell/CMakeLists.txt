
message(Hello)

set(LIBHUNSPELL_SOURCES affentry.cxx affentry.hxx affixmgr.cxx affixmgr.hxx
    atypes.hxx baseaffix.hxx csutil.cxx csutil.hxx
    filemgr.cxx filemgr.hxx hashmgr.cxx hashmgr.hxx
    htypes.hxx hunspell.cxx hunspell.h hunspell.hxx
    hunzip.cxx hunzip.hxx langnum.hxx
    phonet.cxx phonet.hxx replist.cxx replist.hxx
    suggestmgr.cxx suggestmgr.hxx utf_info.hxx w_char.hxx
)

add_library(hunspell STATIC ${LIBHUNSPELL_SOURCES})
add_definitions("-DBUILDING_LIBHUNSPELL")
add_definitions("-DHUNSPELL_STATIC")
target_include_directories (hunspell PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
install(TARGETS hunspell DESTINATION lib)
install(FILES hunspell.h DESTINATION include)
