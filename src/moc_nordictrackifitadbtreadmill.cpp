/****************************************************************************
** Meta object code from reading C++ file 'nordictrackifitadbtreadmill.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "nordictrackifitadbtreadmill.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nordictrackifitadbtreadmill.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_nordictrackifitadbtreadmillLogcatAdbThread_t {
    QByteArrayData data[9];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nordictrackifitadbtreadmillLogcatAdbThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nordictrackifitadbtreadmillLogcatAdbThread_t qt_meta_stringdata_nordictrackifitadbtreadmillLogcatAdbThread = {
    {
QT_MOC_LITERAL(0, 0, 42), // "nordictrackifitadbtreadmillLo..."
QT_MOC_LITERAL(1, 43, 18), // "onSpeedInclination"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 5), // "speed"
QT_MOC_LITERAL(4, 69, 11), // "inclination"
QT_MOC_LITERAL(5, 81, 5), // "debug"
QT_MOC_LITERAL(6, 87, 7), // "message"
QT_MOC_LITERAL(7, 95, 6), // "onWatt"
QT_MOC_LITERAL(8, 102, 4) // "watt"

    },
    "nordictrackifitadbtreadmillLogcatAdbThread\0"
    "onSpeedInclination\0\0speed\0inclination\0"
    "debug\0message\0onWatt\0watt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nordictrackifitadbtreadmillLogcatAdbThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    1,   34,    2, 0x06 /* Public */,
       7,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Double,    8,

       0        // eod
};

void nordictrackifitadbtreadmillLogcatAdbThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<nordictrackifitadbtreadmillLogcatAdbThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSpeedInclination((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->debug((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->onWatt((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (nordictrackifitadbtreadmillLogcatAdbThread::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&nordictrackifitadbtreadmillLogcatAdbThread::onSpeedInclination)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (nordictrackifitadbtreadmillLogcatAdbThread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&nordictrackifitadbtreadmillLogcatAdbThread::debug)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (nordictrackifitadbtreadmillLogcatAdbThread::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&nordictrackifitadbtreadmillLogcatAdbThread::onWatt)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject nordictrackifitadbtreadmillLogcatAdbThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_nordictrackifitadbtreadmillLogcatAdbThread.data,
    qt_meta_data_nordictrackifitadbtreadmillLogcatAdbThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *nordictrackifitadbtreadmillLogcatAdbThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nordictrackifitadbtreadmillLogcatAdbThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nordictrackifitadbtreadmillLogcatAdbThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int nordictrackifitadbtreadmillLogcatAdbThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void nordictrackifitadbtreadmillLogcatAdbThread::onSpeedInclination(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void nordictrackifitadbtreadmillLogcatAdbThread::debug(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void nordictrackifitadbtreadmillLogcatAdbThread::onWatt(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_nordictrackifitadbtreadmill_t {
    QByteArrayData data[15];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nordictrackifitadbtreadmill_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nordictrackifitadbtreadmill_t qt_meta_stringdata_nordictrackifitadbtreadmill = {
    {
QT_MOC_LITERAL(0, 0, 27), // "nordictrackifitadbtreadmill"
QT_MOC_LITERAL(1, 28, 12), // "disconnected"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 5), // "debug"
QT_MOC_LITERAL(4, 48, 6), // "string"
QT_MOC_LITERAL(5, 55, 18), // "onSpeedInclination"
QT_MOC_LITERAL(6, 74, 5), // "speed"
QT_MOC_LITERAL(7, 80, 11), // "inclination"
QT_MOC_LITERAL(8, 92, 6), // "onWatt"
QT_MOC_LITERAL(9, 99, 4), // "watt"
QT_MOC_LITERAL(10, 104, 23), // "processPendingDatagrams"
QT_MOC_LITERAL(11, 128, 26), // "changeInclinationRequested"
QT_MOC_LITERAL(12, 155, 5), // "grade"
QT_MOC_LITERAL(13, 161, 10), // "percentage"
QT_MOC_LITERAL(14, 172, 6) // "update"

    },
    "nordictrackifitadbtreadmill\0disconnected\0"
    "\0debug\0string\0onSpeedInclination\0speed\0"
    "inclination\0onWatt\0watt\0processPendingDatagrams\0"
    "changeInclinationRequested\0grade\0"
    "percentage\0update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nordictrackifitadbtreadmill[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   53,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,
      11,    2,   62,    2, 0x08 /* Private */,
      14,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    6,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   12,   13,
    QMetaType::Void,

       0        // eod
};

void nordictrackifitadbtreadmill::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<nordictrackifitadbtreadmill *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->disconnected(); break;
        case 1: _t->debug((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->onSpeedInclination((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->onWatt((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->processPendingDatagrams(); break;
        case 5: _t->changeInclinationRequested((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (nordictrackifitadbtreadmill::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&nordictrackifitadbtreadmill::disconnected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (nordictrackifitadbtreadmill::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&nordictrackifitadbtreadmill::debug)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject nordictrackifitadbtreadmill::staticMetaObject = { {
    QMetaObject::SuperData::link<treadmill::staticMetaObject>(),
    qt_meta_stringdata_nordictrackifitadbtreadmill.data,
    qt_meta_data_nordictrackifitadbtreadmill,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *nordictrackifitadbtreadmill::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nordictrackifitadbtreadmill::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nordictrackifitadbtreadmill.stringdata0))
        return static_cast<void*>(this);
    return treadmill::qt_metacast(_clname);
}

int nordictrackifitadbtreadmill::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = treadmill::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void nordictrackifitadbtreadmill::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void nordictrackifitadbtreadmill::debug(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
