TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += "/src/main.cpp" \
    "/src/finder.cpp" \
    src/finder.cpp \
    src/main.cpp

HEADERS += \
    /src/finder.h \
    src/finder.h
