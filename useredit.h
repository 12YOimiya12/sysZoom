#ifndef USEREDIT_H
#define USEREDIT_H
#include"sqlconnect.h"
#include <QDialog>

namespace Ui {
class UserEdit;
}

class UserEdit : public QDialog
{
    Q_OBJECT

public:
    explicit UserEdit(QWidget *parent = nullptr);
    void clear_the_lines();

    void transform_user(user_info usinfo);
    void transform_ani(animals aniinfo);
    void transform_room(rooms roominfo);
    void transform_pre(present preinfo);

    void change_page(int control);
    void clear_ani_line();
    void clear_room_line();
    void clear_pre_line();
    ~UserEdit();

private slots:
    void on_comfirmBtn_2_clicked();

    void on_exitBtn_clicked();

    void on_exitBtn_2_clicked();

    void on_resetBtn_clicked();

    void on_exitBtn_4_clicked();

    void on_exitBtn_3_clicked();

    void on_comfirmBtn_ani_clicked();

    void on_comfirmBtn_pre_clicked();

    void on_comfirmBtn_room_clicked();

private:
    Ui::UserEdit *ui;
};

#endif // USEREDIT_H
