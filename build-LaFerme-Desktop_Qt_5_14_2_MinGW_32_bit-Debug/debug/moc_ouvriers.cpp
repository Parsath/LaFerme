/****************************************************************************
** Meta object code from reading C++ file 'ouvriers.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../LaFerme/ouvriers.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ouvriers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ouvriers_t {
    QByteArrayData data[14];
    char stringdata0[345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ouvriers_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ouvriers_t qt_meta_stringdata_ouvriers = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ouvriers"
QT_MOC_LITERAL(1, 9, 11), // "HomeClicked"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 26), // "on_pushButton_home_clicked"
QT_MOC_LITERAL(4, 49, 31), // "on_pushButton_Gouvriers_clicked"
QT_MOC_LITERAL(5, 81, 29), // "on_pushButton_Gconges_clicked"
QT_MOC_LITERAL(6, 111, 28), // "on_pushButton_retour_clicked"
QT_MOC_LITERAL(7, 140, 30), // "on_pushButton_retour_2_clicked"
QT_MOC_LITERAL(8, 171, 34), // "on_pushButton_ajouter_cong_cl..."
QT_MOC_LITERAL(9, 206, 30), // "on_pushButton_sup_cong_clicked"
QT_MOC_LITERAL(10, 237, 35), // "on_pushButton_modifier_cong_c..."
QT_MOC_LITERAL(11, 273, 32), // "on_pushButton_trier_cong_clicked"
QT_MOC_LITERAL(12, 306, 33), // "on_lineEdit_rech_cong_textCha..."
QT_MOC_LITERAL(13, 340, 4) // "arg1"

    },
    "ouvriers\0HomeClicked\0\0on_pushButton_home_clicked\0"
    "on_pushButton_Gouvriers_clicked\0"
    "on_pushButton_Gconges_clicked\0"
    "on_pushButton_retour_clicked\0"
    "on_pushButton_retour_2_clicked\0"
    "on_pushButton_ajouter_cong_clicked\0"
    "on_pushButton_sup_cong_clicked\0"
    "on_pushButton_modifier_cong_clicked\0"
    "on_pushButton_trier_cong_clicked\0"
    "on_lineEdit_rech_cong_textChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ouvriers[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void ouvriers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ouvriers *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->HomeClicked(); break;
        case 1: _t->on_pushButton_home_clicked(); break;
        case 2: _t->on_pushButton_Gouvriers_clicked(); break;
        case 3: _t->on_pushButton_Gconges_clicked(); break;
        case 4: _t->on_pushButton_retour_clicked(); break;
        case 5: _t->on_pushButton_retour_2_clicked(); break;
        case 6: _t->on_pushButton_ajouter_cong_clicked(); break;
        case 7: _t->on_pushButton_sup_cong_clicked(); break;
        case 8: _t->on_pushButton_modifier_cong_clicked(); break;
        case 9: _t->on_pushButton_trier_cong_clicked(); break;
        case 10: _t->on_lineEdit_rech_cong_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ouvriers::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ouvriers::HomeClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ouvriers::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ouvriers.data,
    qt_meta_data_ouvriers,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ouvriers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ouvriers::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ouvriers.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ouvriers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ouvriers::HomeClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
