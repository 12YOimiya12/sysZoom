/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_pushButton_clicked",
    "",
    "on_simulation_clicked",
    "on_add_btn_clicked",
    "on_pushButton_2_clicked",
    "on_delete_btn_clicked",
    "on_fix_button_clicked",
    "on_selectButton_clicked",
    "on_treeWidget_itemClicked",
    "QTreeWidgetItem*",
    "item",
    "column",
    "on_addUserBtn_clicked",
    "on_del_User_btn_clicked",
    "on_clearUserBtn_clicked",
    "on_simuStuBtn_clicked",
    "on_fixUserBtn_clicked",
    "on_findserbtn_clicked",
    "on_addaniBtn_clicked",
    "on_addpreBtn_clicked",
    "on_addroomBtn_clicked",
    "on_simupreBtn_clicked",
    "on_simroomBtn_clicked",
    "on_fixpreBtn_clicked",
    "on_fixAniBtn_clicked",
    "on_fixroomBtn_clicked",
    "on_findroombtn_clicked",
    "on_findanibtn_clicked",
    "on_findprebtn_clicked",
    "on_del_room_btn_clicked",
    "on_del_ani_btn_clicked",
    "on_del_pre_btn_clicked",
    "on_clearpreBtn_clicked",
    "on_clearroomBtn_clicked",
    "on_clearaniBtn__clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[72];
    char stringdata0[11];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[19];
    char stringdata5[24];
    char stringdata6[22];
    char stringdata7[22];
    char stringdata8[24];
    char stringdata9[26];
    char stringdata10[17];
    char stringdata11[5];
    char stringdata12[7];
    char stringdata13[22];
    char stringdata14[24];
    char stringdata15[24];
    char stringdata16[22];
    char stringdata17[22];
    char stringdata18[22];
    char stringdata19[21];
    char stringdata20[21];
    char stringdata21[22];
    char stringdata22[22];
    char stringdata23[22];
    char stringdata24[21];
    char stringdata25[21];
    char stringdata26[22];
    char stringdata27[23];
    char stringdata28[22];
    char stringdata29[22];
    char stringdata30[24];
    char stringdata31[23];
    char stringdata32[23];
    char stringdata33[23];
    char stringdata34[24];
    char stringdata35[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 21),  // "on_simulation_clicked"
        QT_MOC_LITERAL(56, 18),  // "on_add_btn_clicked"
        QT_MOC_LITERAL(75, 23),  // "on_pushButton_2_clicked"
        QT_MOC_LITERAL(99, 21),  // "on_delete_btn_clicked"
        QT_MOC_LITERAL(121, 21),  // "on_fix_button_clicked"
        QT_MOC_LITERAL(143, 23),  // "on_selectButton_clicked"
        QT_MOC_LITERAL(167, 25),  // "on_treeWidget_itemClicked"
        QT_MOC_LITERAL(193, 16),  // "QTreeWidgetItem*"
        QT_MOC_LITERAL(210, 4),  // "item"
        QT_MOC_LITERAL(215, 6),  // "column"
        QT_MOC_LITERAL(222, 21),  // "on_addUserBtn_clicked"
        QT_MOC_LITERAL(244, 23),  // "on_del_User_btn_clicked"
        QT_MOC_LITERAL(268, 23),  // "on_clearUserBtn_clicked"
        QT_MOC_LITERAL(292, 21),  // "on_simuStuBtn_clicked"
        QT_MOC_LITERAL(314, 21),  // "on_fixUserBtn_clicked"
        QT_MOC_LITERAL(336, 21),  // "on_findserbtn_clicked"
        QT_MOC_LITERAL(358, 20),  // "on_addaniBtn_clicked"
        QT_MOC_LITERAL(379, 20),  // "on_addpreBtn_clicked"
        QT_MOC_LITERAL(400, 21),  // "on_addroomBtn_clicked"
        QT_MOC_LITERAL(422, 21),  // "on_simupreBtn_clicked"
        QT_MOC_LITERAL(444, 21),  // "on_simroomBtn_clicked"
        QT_MOC_LITERAL(466, 20),  // "on_fixpreBtn_clicked"
        QT_MOC_LITERAL(487, 20),  // "on_fixAniBtn_clicked"
        QT_MOC_LITERAL(508, 21),  // "on_fixroomBtn_clicked"
        QT_MOC_LITERAL(530, 22),  // "on_findroombtn_clicked"
        QT_MOC_LITERAL(553, 21),  // "on_findanibtn_clicked"
        QT_MOC_LITERAL(575, 21),  // "on_findprebtn_clicked"
        QT_MOC_LITERAL(597, 23),  // "on_del_room_btn_clicked"
        QT_MOC_LITERAL(621, 22),  // "on_del_ani_btn_clicked"
        QT_MOC_LITERAL(644, 22),  // "on_del_pre_btn_clicked"
        QT_MOC_LITERAL(667, 22),  // "on_clearpreBtn_clicked"
        QT_MOC_LITERAL(690, 23),  // "on_clearroomBtn_clicked"
        QT_MOC_LITERAL(714, 23)   // "on_clearaniBtn__clicked"
    },
    "MainWindow",
    "on_pushButton_clicked",
    "",
    "on_simulation_clicked",
    "on_add_btn_clicked",
    "on_pushButton_2_clicked",
    "on_delete_btn_clicked",
    "on_fix_button_clicked",
    "on_selectButton_clicked",
    "on_treeWidget_itemClicked",
    "QTreeWidgetItem*",
    "item",
    "column",
    "on_addUserBtn_clicked",
    "on_del_User_btn_clicked",
    "on_clearUserBtn_clicked",
    "on_simuStuBtn_clicked",
    "on_fixUserBtn_clicked",
    "on_findserbtn_clicked",
    "on_addaniBtn_clicked",
    "on_addpreBtn_clicked",
    "on_addroomBtn_clicked",
    "on_simupreBtn_clicked",
    "on_simroomBtn_clicked",
    "on_fixpreBtn_clicked",
    "on_fixAniBtn_clicked",
    "on_fixroomBtn_clicked",
    "on_findroombtn_clicked",
    "on_findanibtn_clicked",
    "on_findprebtn_clicked",
    "on_del_room_btn_clicked",
    "on_del_ani_btn_clicked",
    "on_del_pre_btn_clicked",
    "on_clearpreBtn_clicked",
    "on_clearroomBtn_clicked",
    "on_clearaniBtn__clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  200,    2, 0x08,    1 /* Private */,
       3,    0,  201,    2, 0x08,    2 /* Private */,
       4,    0,  202,    2, 0x08,    3 /* Private */,
       5,    0,  203,    2, 0x08,    4 /* Private */,
       6,    0,  204,    2, 0x08,    5 /* Private */,
       7,    0,  205,    2, 0x08,    6 /* Private */,
       8,    0,  206,    2, 0x08,    7 /* Private */,
       9,    2,  207,    2, 0x08,    8 /* Private */,
      13,    0,  212,    2, 0x08,   11 /* Private */,
      14,    0,  213,    2, 0x08,   12 /* Private */,
      15,    0,  214,    2, 0x08,   13 /* Private */,
      16,    0,  215,    2, 0x08,   14 /* Private */,
      17,    0,  216,    2, 0x08,   15 /* Private */,
      18,    0,  217,    2, 0x08,   16 /* Private */,
      19,    0,  218,    2, 0x08,   17 /* Private */,
      20,    0,  219,    2, 0x08,   18 /* Private */,
      21,    0,  220,    2, 0x08,   19 /* Private */,
      22,    0,  221,    2, 0x08,   20 /* Private */,
      23,    0,  222,    2, 0x08,   21 /* Private */,
      24,    0,  223,    2, 0x08,   22 /* Private */,
      25,    0,  224,    2, 0x08,   23 /* Private */,
      26,    0,  225,    2, 0x08,   24 /* Private */,
      27,    0,  226,    2, 0x08,   25 /* Private */,
      28,    0,  227,    2, 0x08,   26 /* Private */,
      29,    0,  228,    2, 0x08,   27 /* Private */,
      30,    0,  229,    2, 0x08,   28 /* Private */,
      31,    0,  230,    2, 0x08,   29 /* Private */,
      32,    0,  231,    2, 0x08,   30 /* Private */,
      33,    0,  232,    2, 0x08,   31 /* Private */,
      34,    0,  233,    2, 0x08,   32 /* Private */,
      35,    0,  234,    2, 0x08,   33 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_simulation_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_delete_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fix_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_selectButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_treeWidget_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_addUserBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_del_User_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clearUserBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_simuStuBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fixUserBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_findserbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addaniBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addpreBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addroomBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_simupreBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_simroomBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fixpreBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fixAniBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fixroomBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_findroombtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_findanibtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_findprebtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_del_room_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_del_ani_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_del_pre_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clearpreBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clearroomBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clearaniBtn__clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_simulation_clicked(); break;
        case 2: _t->on_add_btn_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_delete_btn_clicked(); break;
        case 5: _t->on_fix_button_clicked(); break;
        case 6: _t->on_selectButton_clicked(); break;
        case 7: _t->on_treeWidget_itemClicked((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->on_addUserBtn_clicked(); break;
        case 9: _t->on_del_User_btn_clicked(); break;
        case 10: _t->on_clearUserBtn_clicked(); break;
        case 11: _t->on_simuStuBtn_clicked(); break;
        case 12: _t->on_fixUserBtn_clicked(); break;
        case 13: _t->on_findserbtn_clicked(); break;
        case 14: _t->on_addaniBtn_clicked(); break;
        case 15: _t->on_addpreBtn_clicked(); break;
        case 16: _t->on_addroomBtn_clicked(); break;
        case 17: _t->on_simupreBtn_clicked(); break;
        case 18: _t->on_simroomBtn_clicked(); break;
        case 19: _t->on_fixpreBtn_clicked(); break;
        case 20: _t->on_fixAniBtn_clicked(); break;
        case 21: _t->on_fixroomBtn_clicked(); break;
        case 22: _t->on_findroombtn_clicked(); break;
        case 23: _t->on_findanibtn_clicked(); break;
        case 24: _t->on_findprebtn_clicked(); break;
        case 25: _t->on_del_room_btn_clicked(); break;
        case 26: _t->on_del_ani_btn_clicked(); break;
        case 27: _t->on_del_pre_btn_clicked(); break;
        case 28: _t->on_clearpreBtn_clicked(); break;
        case 29: _t->on_clearroomBtn_clicked(); break;
        case 30: _t->on_clearaniBtn__clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 31;
    }
    return _id;
}
QT_WARNING_POP
