#-------------------------------------------------
#
# Project created by QtCreator 2013-08-11T12:42:15
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 3D_Projection_POC
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    glscene.cpp \
    projectedobject.cpp \
    projectedcube.cpp

HEADERS  += mainwindow.h \
    glscene.h \
    projectedobject.h \
    projectedcube.h

FORMS    += mainwindow.ui

LIBS += -L/usr/local/lib -lGLU
