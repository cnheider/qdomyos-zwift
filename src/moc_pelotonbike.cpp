/****************************************************************************
** Meta object code from reading C++ file 'pelotonbike.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "pelotonbike.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pelotonbike.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pelotonbike_t {
    QByteArrayData data[10];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pelotonbike_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pelotonbike_t qt_meta_stringdata_pelotonbike = {
    {
QT_MOC_LITERAL(0, 0, 11), // "pelotonbike"
QT_MOC_LITERAL(1, 12, 12), // "disconnected"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "debug"
QT_MOC_LITERAL(4, 32, 6), // "string"
QT_MOC_LITERAL(5, 39, 33), // "pelotonOCRprocessPendingDatag..."
QT_MOC_LITERAL(6, 73, 26), // "changeInclinationRequested"
QT_MOC_LITERAL(7, 100, 5), // "grade"
QT_MOC_LITERAL(8, 106, 10), // "percentage"
QT_MOC_LITERAL(9, 117, 6) // "update"

    },
    "pelotonbike\0disconnected\0\0debug\0string\0"
    "pelotonOCRprocessPendingDatagrams\0"
    "changeInclinationRequested\0grade\0"
    "percentage\0update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pelotonbike[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   43,    2, 0x08 /* Private */,
       6,    2,   44,    2, 0x08 /* Private */,
       9,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    7,    8,
    QMetaType::Void,

       0        // eod
};

void pelotonbike::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<pelotonbike *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->disconnected(); break;
        case 1: _t->debug((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->pelotonOCRprocessPendingDatagrams(); break;
        case 3: _t->changeInclinationRequested((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (pelotonbike::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pelotonbike::disconnected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (pelotonbike::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pelotonbike::debug)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject pelotonbike::staticMetaObject = { {
    QMetaObject::SuperData::link<bike::staticMetaObject>(),
    qt_meta_stringdata_pelotonbike.data,
    qt_meta_data_pelotonbike,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *pelotonbike::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pelotonbike::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pelotonbike.stringdata0))
        return static_cast<void*>(this);
    return bike::qt_metacast(_clname);
}

int pelotonbike::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = bike::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void pelotonbike::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pelotonbike::debug(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
