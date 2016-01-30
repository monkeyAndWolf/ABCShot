#-------------------------------------------------
#
# Project created by QtCreator 2015-10-21T19:55:36
#
#-------------------------------------------------

QT       -= gui

TARGET = ABCShots
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    abcshots.c \
    abc2ps.c \
    abcparse.c \
    buffer.c \
    deco.c \
    draw.c \
    format.c \
    front.c \
    glyph.c \
    music.c \
    parse.c \
    slre.c \
    subs.c \
    svg.c \
    syms.c

HEADERS += abcshots.h \
    abc2ps.h \
    abcparse.h \
    config.h \
    front.h \
    slre.h
unix {
    target.path = ../ShotGlass
    INSTALLS += target
}

DISTFILES += \
    ABCShots.pro.user \
    config.h.in
