# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux
TARGET = VueMeteoTester
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui widgets
SOURCES += ../ClasseMetier/Observable.cpp ../ClasseMetier/Observateur.cpp ClasseMetier/BulletinMeteo.cpp VueMeteo.cpp_1.cc main.cpp
HEADERS += ../ClasseMetier/Observable.h ../ClasseMetier/Observateur.h ClasseMetier/BulletinMeteo.h VueMeteo.h
FORMS += VueMeteo.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
