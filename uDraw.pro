#-------------------------------------------------
#
# Project created by QtCreator 2015-12-03T20:24:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = uDrawn
TEMPLATE = app


SOURCES   +=    main.cpp\
                mainwindow.cpp \
                paintscene.cpp \
                ajuda.cpp \
                elipse.cpp \
                figura.cpp \
                linha.cpp \
                ponto.cpp \
                losango.cpp \
                retangulo.cpp \
                triangulo.cpp

HEADERS   +=    mainwindow.h \
                paintscene.h \
                ajuda.h \
                elipse.h \
                figura.h \
                linha.h \
                ponto.h \
                losango.h \
                retangulo.h \
                triangulo.h
RESOURCES +=    paintscene.qrc
FORMS     +=    mainwindow.ui \
                ajuda.ui
