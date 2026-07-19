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

    registerwindow.h registerwindow.cpp registerwindow.ui
    loginwindow.h loginwindow.cpp loginwindow.ui
    artistwindow.h artistwindow.cpp artistwindow.ui
    resources.qrc
    addalbumwindow.h addalbumwindow.cpp addalbumwindow.ui
    addsongwindow.h addsongwindow.cpp addsongwindow.ui
    albumwindow.h albumwindow.cpp albumwindow.ui
    editalbumwindow.h editalbumwindow.cpp editalbumwindow.ui
    selectalbumwindow.h selectalbumwindow.cpp selectalbumwindow.ui
    selectalbum2window.h selectalbum2window.cpp selectalbum2window.ui
    editsongwindow.h editsongwindow.cpp editsongwindow.ui
    listenerwindow.h listenerwindow.cpp listenerwindow.ui
    createplaylistwindow.h createplaylistwindow.cpp createplaylistwindow.ui
    selectplaylistwindow.h selectplaylistwindow.cpp selectplaylistwindow.ui
    selectplaylistwindow.h selectplaylistwindow.cpp selectplaylistwindow.ui
    selectplaylist2window.h selectplaylist2window.cpp selectplaylist2window.ui
    editplaylistwindow.h editplaylistwindow.cpp editplaylistwindow.ui
    exploremusicwindow.h exploremusicwindow.cpp exploremusicwindow.ui
    AccountRepository.cpp
    album_artist_window.h album_artist_window.cpp album_artist_window.ui
    album_song_window.h album_song_window.cpp album_song_window.ui
    selectplaylistforsongwindow.h selectplaylistforsongwindow.cpp selectplaylistforsongwindow.ui
    playlistsongswindow.h playlistsongswindow.cpp playlistsongswindow.ui
    likedSongsRepository.h
    likedSongsRepository.cpp
    likedsongwindow.h likedsongwindow.cpp likedsongwindow.ui
    editaccountwindow.h editaccountwindow.cpp editaccountwindow.ui


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
