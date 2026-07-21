include("C:/Users/BLUE0409/Documents/spotify/build/Desktop_Qt_6_11_1_MinGW_64_bit_Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/spotify-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase;qtmultimedia")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "C:/Users/BLUE0409/Documents/spotify/build/Desktop_Qt_6_11_1_MinGW_64_bit_Debug/spotify.exe"
    GENERATE_QT_CONF
)
