/****************************************************************************
** Meta object code from reading C++ file 'PropertiesManager.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/PropertiesManager.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertiesManager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PropertiesManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   19,   18,   18, 0x05,
      59,   54,   18,   18, 0x05,

 // properties: name, type, flags
      96,   91, 0x01495103,
     115,   91, 0x01495103,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

static const char qt_meta_stringdata_PropertiesManager[] = {
    "PropertiesManager\0\0advanced\0"
    "advancedModeChanged(bool)\0show\0"
    "showCompletedTasksChanged(bool)\0bool\0"
    "showCompletedTasks\0advancedMode\0"
};

void PropertiesManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PropertiesManager *_t = static_cast<PropertiesManager *>(_o);
        switch (_id) {
        case 0: _t->advancedModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->showCompletedTasksChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PropertiesManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PropertiesManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PropertiesManager,
      qt_meta_data_PropertiesManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PropertiesManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PropertiesManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PropertiesManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PropertiesManager))
        return static_cast<void*>(const_cast< PropertiesManager*>(this));
    return QObject::qt_metacast(_clname);
}

int PropertiesManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = showCompletedTasks(); break;
        case 1: *reinterpret_cast< bool*>(_v) = advancedMode(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setShowCompletedTasks(*reinterpret_cast< bool*>(_v)); break;
        case 1: setAdvancedMode(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PropertiesManager::advancedModeChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PropertiesManager::showCompletedTasksChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE