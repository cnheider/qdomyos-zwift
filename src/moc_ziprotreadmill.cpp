/****************************************************************************
** Meta object code from reading C++ file 'ziprotreadmill.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "ziprotreadmill.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ziprotreadmill.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ziprotreadmill_t {
    QByteArrayData data[37];
    char stringdata0[564];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ziprotreadmill_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ziprotreadmill_t qt_meta_stringdata_ziprotreadmill = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ziprotreadmill"
QT_MOC_LITERAL(1, 15, 12), // "disconnected"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "debug"
QT_MOC_LITERAL(4, 35, 6), // "string"
QT_MOC_LITERAL(5, 42, 12), // "speedChanged"
QT_MOC_LITERAL(6, 55, 5), // "speed"
QT_MOC_LITERAL(7, 61, 14), // "packetReceived"
QT_MOC_LITERAL(8, 76, 16), // "deviceDiscovered"
QT_MOC_LITERAL(9, 93, 20), // "QBluetoothDeviceInfo"
QT_MOC_LITERAL(10, 114, 6), // "device"
QT_MOC_LITERAL(11, 121, 21), // "characteristicChanged"
QT_MOC_LITERAL(12, 143, 24), // "QLowEnergyCharacteristic"
QT_MOC_LITERAL(13, 168, 14), // "characteristic"
QT_MOC_LITERAL(14, 183, 8), // "newValue"
QT_MOC_LITERAL(15, 192, 21), // "characteristicWritten"
QT_MOC_LITERAL(16, 214, 17), // "descriptorWritten"
QT_MOC_LITERAL(17, 232, 20), // "QLowEnergyDescriptor"
QT_MOC_LITERAL(18, 253, 10), // "descriptor"
QT_MOC_LITERAL(19, 264, 12), // "stateChanged"
QT_MOC_LITERAL(20, 277, 31), // "QLowEnergyService::ServiceState"
QT_MOC_LITERAL(21, 309, 5), // "state"
QT_MOC_LITERAL(22, 315, 22), // "controllerStateChanged"
QT_MOC_LITERAL(23, 338, 37), // "QLowEnergyController::Control..."
QT_MOC_LITERAL(24, 376, 17), // "serviceDiscovered"
QT_MOC_LITERAL(25, 394, 14), // "QBluetoothUuid"
QT_MOC_LITERAL(26, 409, 4), // "gatt"
QT_MOC_LITERAL(27, 414, 15), // "serviceScanDone"
QT_MOC_LITERAL(28, 430, 6), // "update"
QT_MOC_LITERAL(29, 437, 5), // "error"
QT_MOC_LITERAL(30, 443, 27), // "QLowEnergyController::Error"
QT_MOC_LITERAL(31, 471, 3), // "err"
QT_MOC_LITERAL(32, 475, 12), // "errorService"
QT_MOC_LITERAL(33, 488, 31), // "QLowEnergyService::ServiceError"
QT_MOC_LITERAL(34, 520, 26), // "changeInclinationRequested"
QT_MOC_LITERAL(35, 547, 5), // "grade"
QT_MOC_LITERAL(36, 553, 10) // "percentage"

    },
    "ziprotreadmill\0disconnected\0\0debug\0"
    "string\0speedChanged\0speed\0packetReceived\0"
    "deviceDiscovered\0QBluetoothDeviceInfo\0"
    "device\0characteristicChanged\0"
    "QLowEnergyCharacteristic\0characteristic\0"
    "newValue\0characteristicWritten\0"
    "descriptorWritten\0QLowEnergyDescriptor\0"
    "descriptor\0stateChanged\0"
    "QLowEnergyService::ServiceState\0state\0"
    "controllerStateChanged\0"
    "QLowEnergyController::ControllerState\0"
    "serviceDiscovered\0QBluetoothUuid\0gatt\0"
    "serviceScanDone\0update\0error\0"
    "QLowEnergyController::Error\0err\0"
    "errorService\0QLowEnergyService::ServiceError\0"
    "changeInclinationRequested\0grade\0"
    "percentage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ziprotreadmill[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    1,   95,    2, 0x06 /* Public */,
       5,    1,   98,    2, 0x06 /* Public */,
       7,    0,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  102,    2, 0x0a /* Public */,
      11,    2,  105,    2, 0x08 /* Private */,
      15,    2,  110,    2, 0x08 /* Private */,
      16,    2,  115,    2, 0x08 /* Private */,
      19,    1,  120,    2, 0x08 /* Private */,
      22,    1,  123,    2, 0x08 /* Private */,
      24,    1,  126,    2, 0x08 /* Private */,
      27,    0,  129,    2, 0x08 /* Private */,
      28,    0,  130,    2, 0x08 /* Private */,
      29,    1,  131,    2, 0x08 /* Private */,
      32,    1,  134,    2, 0x08 /* Private */,
      34,    2,  137,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QByteArray,   13,   14,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QByteArray,   13,   14,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QByteArray,   18,   14,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 23,   21,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 33,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   35,   36,

       0        // eod
};

void ziprotreadmill::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ziprotreadmill *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->disconnected(); break;
        case 1: _t->debug((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->speedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->packetReceived(); break;
        case 4: _t->deviceDiscovered((*reinterpret_cast< const QBluetoothDeviceInfo(*)>(_a[1]))); break;
        case 5: _t->characteristicChanged((*reinterpret_cast< const QLowEnergyCharacteristic(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 6: _t->characteristicWritten((*reinterpret_cast< const QLowEnergyCharacteristic(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 7: _t->descriptorWritten((*reinterpret_cast< const QLowEnergyDescriptor(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 8: _t->stateChanged((*reinterpret_cast< QLowEnergyService::ServiceState(*)>(_a[1]))); break;
        case 9: _t->controllerStateChanged((*reinterpret_cast< QLowEnergyController::ControllerState(*)>(_a[1]))); break;
        case 10: _t->serviceDiscovered((*reinterpret_cast< const QBluetoothUuid(*)>(_a[1]))); break;
        case 11: _t->serviceScanDone(); break;
        case 12: _t->update(); break;
        case 13: _t->error((*reinterpret_cast< QLowEnergyController::Error(*)>(_a[1]))); break;
        case 14: _t->errorService((*reinterpret_cast< QLowEnergyService::ServiceError(*)>(_a[1]))); break;
        case 15: _t->changeInclinationRequested((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothDeviceInfo >(); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyCharacteristic >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyDescriptor >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyService::ServiceState >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyController::ControllerState >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothUuid >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyController::Error >(); break;
            }
            break;
        case 14:
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
            using _t = void (ziprotreadmill::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ziprotreadmill::disconnected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ziprotreadmill::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ziprotreadmill::debug)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ziprotreadmill::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ziprotreadmill::speedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ziprotreadmill::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ziprotreadmill::packetReceived)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ziprotreadmill::staticMetaObject = { {
    QMetaObject::SuperData::link<treadmill::staticMetaObject>(),
    qt_meta_stringdata_ziprotreadmill.data,
    qt_meta_data_ziprotreadmill,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ziprotreadmill::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ziprotreadmill::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ziprotreadmill.stringdata0))
        return static_cast<void*>(this);
    return treadmill::qt_metacast(_clname);
}

int ziprotreadmill::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = treadmill::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void ziprotreadmill::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ziprotreadmill::debug(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ziprotreadmill::speedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ziprotreadmill::packetReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
