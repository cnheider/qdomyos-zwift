/****************************************************************************
** Meta object code from reading C++ file 'sportsplusbike.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "sportsplusbike.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sportsplusbike.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sportsplusbike_t {
    QByteArrayData data[32];
    char stringdata0[501];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sportsplusbike_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sportsplusbike_t qt_meta_stringdata_sportsplusbike = {
    {
QT_MOC_LITERAL(0, 0, 14), // "sportsplusbike"
QT_MOC_LITERAL(1, 15, 12), // "disconnected"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "debug"
QT_MOC_LITERAL(4, 35, 6), // "string"
QT_MOC_LITERAL(5, 42, 14), // "packetReceived"
QT_MOC_LITERAL(6, 57, 16), // "deviceDiscovered"
QT_MOC_LITERAL(7, 74, 20), // "QBluetoothDeviceInfo"
QT_MOC_LITERAL(8, 95, 6), // "device"
QT_MOC_LITERAL(9, 102, 21), // "characteristicChanged"
QT_MOC_LITERAL(10, 124, 24), // "QLowEnergyCharacteristic"
QT_MOC_LITERAL(11, 149, 14), // "characteristic"
QT_MOC_LITERAL(12, 164, 8), // "newValue"
QT_MOC_LITERAL(13, 173, 21), // "characteristicWritten"
QT_MOC_LITERAL(14, 195, 17), // "descriptorWritten"
QT_MOC_LITERAL(15, 213, 20), // "QLowEnergyDescriptor"
QT_MOC_LITERAL(16, 234, 10), // "descriptor"
QT_MOC_LITERAL(17, 245, 12), // "stateChanged"
QT_MOC_LITERAL(18, 258, 31), // "QLowEnergyService::ServiceState"
QT_MOC_LITERAL(19, 290, 5), // "state"
QT_MOC_LITERAL(20, 296, 22), // "controllerStateChanged"
QT_MOC_LITERAL(21, 319, 37), // "QLowEnergyController::Control..."
QT_MOC_LITERAL(22, 357, 17), // "serviceDiscovered"
QT_MOC_LITERAL(23, 375, 14), // "QBluetoothUuid"
QT_MOC_LITERAL(24, 390, 4), // "gatt"
QT_MOC_LITERAL(25, 395, 15), // "serviceScanDone"
QT_MOC_LITERAL(26, 411, 6), // "update"
QT_MOC_LITERAL(27, 418, 5), // "error"
QT_MOC_LITERAL(28, 424, 27), // "QLowEnergyController::Error"
QT_MOC_LITERAL(29, 452, 3), // "err"
QT_MOC_LITERAL(30, 456, 12), // "errorService"
QT_MOC_LITERAL(31, 469, 31) // "QLowEnergyService::ServiceError"

    },
    "sportsplusbike\0disconnected\0\0debug\0"
    "string\0packetReceived\0deviceDiscovered\0"
    "QBluetoothDeviceInfo\0device\0"
    "characteristicChanged\0QLowEnergyCharacteristic\0"
    "characteristic\0newValue\0characteristicWritten\0"
    "descriptorWritten\0QLowEnergyDescriptor\0"
    "descriptor\0stateChanged\0"
    "QLowEnergyService::ServiceState\0state\0"
    "controllerStateChanged\0"
    "QLowEnergyController::ControllerState\0"
    "serviceDiscovered\0QBluetoothUuid\0gatt\0"
    "serviceScanDone\0update\0error\0"
    "QLowEnergyController::Error\0err\0"
    "errorService\0QLowEnergyService::ServiceError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sportsplusbike[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    1,   85,    2, 0x06 /* Public */,
       5,    0,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   89,    2, 0x0a /* Public */,
       9,    2,   92,    2, 0x08 /* Private */,
      13,    2,   97,    2, 0x08 /* Private */,
      14,    2,  102,    2, 0x08 /* Private */,
      17,    1,  107,    2, 0x08 /* Private */,
      20,    1,  110,    2, 0x08 /* Private */,
      22,    1,  113,    2, 0x08 /* Private */,
      25,    0,  116,    2, 0x08 /* Private */,
      26,    0,  117,    2, 0x08 /* Private */,
      27,    1,  118,    2, 0x08 /* Private */,
      30,    1,  121,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QByteArray,   11,   12,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QByteArray,   11,   12,
    QMetaType::Void, 0x80000000 | 15, QMetaType::QByteArray,   16,   12,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   19,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 31,    2,

       0        // eod
};

void sportsplusbike::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<sportsplusbike *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->disconnected(); break;
        case 1: _t->debug((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->packetReceived(); break;
        case 3: _t->deviceDiscovered((*reinterpret_cast< const QBluetoothDeviceInfo(*)>(_a[1]))); break;
        case 4: _t->characteristicChanged((*reinterpret_cast< const QLowEnergyCharacteristic(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 5: _t->characteristicWritten((*reinterpret_cast< const QLowEnergyCharacteristic(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 6: _t->descriptorWritten((*reinterpret_cast< const QLowEnergyDescriptor(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 7: _t->stateChanged((*reinterpret_cast< QLowEnergyService::ServiceState(*)>(_a[1]))); break;
        case 8: _t->controllerStateChanged((*reinterpret_cast< QLowEnergyController::ControllerState(*)>(_a[1]))); break;
        case 9: _t->serviceDiscovered((*reinterpret_cast< const QBluetoothUuid(*)>(_a[1]))); break;
        case 10: _t->serviceScanDone(); break;
        case 11: _t->update(); break;
        case 12: _t->error((*reinterpret_cast< QLowEnergyController::Error(*)>(_a[1]))); break;
        case 13: _t->errorService((*reinterpret_cast< QLowEnergyService::ServiceError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothDeviceInfo >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyCharacteristic >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyCharacteristic >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyDescriptor >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyService::ServiceState >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyController::ControllerState >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothUuid >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyController::Error >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyService::ServiceError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (sportsplusbike::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sportsplusbike::disconnected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (sportsplusbike::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sportsplusbike::debug)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (sportsplusbike::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sportsplusbike::packetReceived)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sportsplusbike::staticMetaObject = { {
    QMetaObject::SuperData::link<bike::staticMetaObject>(),
    qt_meta_stringdata_sportsplusbike.data,
    qt_meta_data_sportsplusbike,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *sportsplusbike::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sportsplusbike::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sportsplusbike.stringdata0))
        return static_cast<void*>(this);
    return bike::qt_metacast(_clname);
}

int sportsplusbike::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = bike::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void sportsplusbike::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void sportsplusbike::debug(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void sportsplusbike::packetReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
