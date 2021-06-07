QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../build-ZooLib-Desktop_Qt_5_12_6_MinGW_64_bit-Debug/release/ -lZooLib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../build-ZooLib-Desktop_Qt_5_12_6_MinGW_64_bit-Debug/debug/ -lZooLib
else:unix: LIBS += -L$$PWD/../../build-ZooLib-Desktop_Qt_5_12_6_MinGW_64_bit-Debug/ -lZooLib

INCLUDEPATH += $$PWD/../../ZooLib
DEPENDPATH += $$PWD/../../ZooLib

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../build-ZooLib-Desktop_Qt_5_12_6_MinGW_64_bit-Debug/release/libZooLib.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../build-ZooLib-Desktop_Qt_5_12_6_MinGW_64_bit-Debug/debug/libZooLib.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../build-ZooLib-Desktop_Qt_5_12_6_MinGW_64_bit-Debug/release/ZooLib.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../build-ZooLib-Desktop_Qt_5_12_6_MinGW_64_bit-Debug/debug/ZooLib.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../build-ZooLib-Desktop_Qt_5_12_6_MinGW_64_bit-Debug/libZooLib.a
