#-------------------------------------------------
#
# Project created by QtCreator 2013-08-11T12:42:15
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 3D_Projection_POC
TEMPLATE = app

INCLUDEPATH += . includes

UI_HEADERS_DIR += ui

SOURCES += src/main.cpp\
        src/mainwindow.cpp \
    src/glscene.cpp \
    src/projectedobject.cpp \
    src/projectedcube.cpp

HEADERS  += includes/mainwindow.h \
    includes/glscene.h \
    includes/projectedobject.h \
    includes/projectedcube.h

FORMS    += ui/mainwindow.ui

LIBS += -L/usr/local/lib -lGLU
