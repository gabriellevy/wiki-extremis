#-------------------------------------------------
#
# Project created by QtCreator 2020-02-22T19:47:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TLMContreTLMCoutume
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        Bataille/bataille.cpp \
        Bataille/etatguerrier.cpp \
        Bataille/guerrier.cpp \
        Coutume/commandement.cpp \
        Coutume/faction.cpp \
        Coutume/principe.cpp \
        Coutume/ucoutume.cpp \
        Factions/croisadefranque.cpp \
        TLMContreTLM/action.cpp \
        TLMContreTLM/affrontement.cpp \
        TLMContreTLM/case.cpp \
        TLMContreTLM/complement.cpp \
        TLMContreTLM/compterendu.cpp \
        TLMContreTLM/condition.cpp \
        TLMContreTLM/etatunite.cpp \
        TLMContreTLM/ordre.cpp \
        TLMContreTLM/plateau.cpp \
        TLMContreTLM/scene.cpp \
        TLMContreTLM/unite.cpp \
        TLMContreTLM/verbe.cpp \
        main.cpp \
        visionneur.cpp

HEADERS += \
        Bataille/bataille.h \
        Bataille/etatguerrier.h \
        Bataille/guerrier.h \
        Coutume/commandement.h \
        Coutume/faction.h \
        Coutume/principe.h \
        Coutume/ucoutume.h \
        Factions/croisadefranque.h \
        TLMContreTLM/action.h \
        TLMContreTLM/affrontement.h \
        TLMContreTLM/case.h \
        TLMContreTLM/complement.h \
        TLMContreTLM/compterendu.h \
        TLMContreTLM/condition.h \
        TLMContreTLM/etatunite.h \
        TLMContreTLM/ordre.h \
        TLMContreTLM/plateau.h \
        TLMContreTLM/scene.h \
        TLMContreTLM/unite.h \
        TLMContreTLM/verbe.h \
        visionneur.h

FORMS += \
        visionneur.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
