#ifndef ADD_STUDENT_H
#define ADD_STUDENT_H

#include <QDialog>
#include"sqlconnect.h"
namespace Ui {
class add_student;
}

class add_student : public QDialog
{
    Q_OBJECT

public:
    explicit add_student(QWidget *parent = nullptr);
    ~add_student();
    student_info getcurrentinfo(student_info infos);


private slots:
    void on_add_stu_clicked();

    void on_return_main_clicked();

    void on_reset_btn_clicked();

private:
    Ui::add_student *ui;
    void clearall_textLine();

};

#endif // ADD_STUDENT_H
