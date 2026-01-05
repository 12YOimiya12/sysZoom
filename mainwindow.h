#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"sqlconnect.h"
#include <QKeyEvent>
#include <QMainWindow>
#include"loading_page.h"
#include"QRandomGenerator"
#include"add_student.h"
#include"QTreeWidgetItem"

#include"UserEdit.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    virtual void keyPressEvent(QKeyEvent *event);

    void set_style();

private slots:
    void on_pushButton_clicked();


    void on_simulation_clicked();

    void on_add_btn_clicked();

    void on_pushButton_2_clicked();

    void on_delete_btn_clicked();

    void on_fix_button_clicked();

    void on_selectButton_clicked();

//----------------------------------------------------


    void on_treeWidget_itemClicked(QTreeWidgetItem *item, int column);

//-----------------------------------------------------




    void on_addUserBtn_clicked();

    void on_del_User_btn_clicked();

    void on_clearUserBtn_clicked();

    void on_simuStuBtn_clicked();

    void on_fixUserBtn_clicked();

    void on_findserbtn_clicked();



    void on_addaniBtn_clicked();

    void on_addpreBtn_clicked();

    void on_addroomBtn_clicked();

    void on_simupreBtn_clicked();

    void on_simroomBtn_clicked();

    void on_fixpreBtn_clicked();

    void on_fixAniBtn_clicked();

    void on_fixroomBtn_clicked();

    void on_findroombtn_clicked();

    void on_findanibtn_clicked();

    void on_findprebtn_clicked();

    void on_del_room_btn_clicked();

    void on_del_ani_btn_clicked();

    void on_del_pre_btn_clicked();

    void on_clearpreBtn_clicked();

    void on_clearroomBtn_clicked();

    void on_clearaniBtn__clicked();

private:
    Ui::MainWindow *ui;
    loading_page son;
    sqlconnect *m_ptrstu;
    QStringList sl_names;
    add_student add_stus1;
    UserEdit edit1;
    void update_datas();
    void update_users();
    void update_animal();
    void update_rooms();
    void update_pre();

};
#endif // MAINWINDOW_H
