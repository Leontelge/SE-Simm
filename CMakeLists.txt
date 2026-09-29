cmake_minimum_required(VERSION 3.19)
project(Simmulation LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets LinguistTools)

qt_standard_project_setup()

qt_add_executable(Simmulation
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui


    raum.h raum.cpp
    wetterstation.h wetterstation.cpp
    sensorbox.h sensorbox.cpp
    fenster.h fenster.cpp
    UI.ui
    steuerelement.h steuerelement.cpp
    profil.h profil.cpp
    modus.h modus.cpp
    drehsensor.h drehsensor.cpp
)

target_link_libraries(Simmulation
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS Simmulation
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET Simmulation
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
