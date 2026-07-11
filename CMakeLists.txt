cmake_minimum_required(VERSION 3.19)
project(spotify LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(spotify
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    Account.h
    Account.cpp
    PlayList.h
    Song.h
    Song.cpp
    PlayList.cpp
    Album.h
    Album.cpp
    AbstractRepository.h
    AccountRepository.h
    AlbumRepository.h
    AlbumRepository.cpp
    ArtistRepository.h
    ArtistRepository.cpp
    ListenerRepository.h
    ListenerRepository.cpp
    PlaylistRepository.h
    PlaylistRepository.cpp
    SongRepository.h
    SongRepository.cpp
    Artist.h
    Artist.cpp
    Listener.h
    Listener.cpp
)

target_link_libraries(spotify
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS spotify
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET spotify
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
