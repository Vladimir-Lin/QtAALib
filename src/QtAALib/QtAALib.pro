NAME         = QtAALib
TARGET       = $${NAME}
QT           = core
QT          -= gui
CONFIG(static,static|shared) {
# static version does not support Qt Script now
QT          -= script
} else {
QT          += script
}

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}/../../include/QtAALib

HEADERS     += $${PWD}/../../include/QtAALib/QtAALib
HEADERS     += $${PWD}/../../include/QtAALib/qtaalib.h

SOURCES     += $${PWD}/qtaalib.cpp

include ($${PWD}/aalib/aalib.pri)

OTHER_FILES += $${PWD}/../../include/$${NAME}/headers.pri

include ($${PWD}/../../doc/Qt/Qt.pri)
