#include "add_student.h"
#include "ui_add_student.h"
#include"sqlconnect.h"
add_student::add_student(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::add_student)
{
    ui->setupUi(this);
}

add_student::~add_student()
{
    delete ui;
}

void add_student::on_add_stu_clicked()
{
    //clearall_textLine();
    student_info infos;
    auto ptr=sqlconnect::getinstance();
    infos.name=ui->nameed->text();
    infos.age=ui->age_spin->text().toInt();
    infos.grade=ui->clased->text().toInt();
    infos.uiclass=ui->clss->text().toInt();
    infos.phone=ui->phoned->text();
    infos.studentid=ui->stuid->text().toInt();
    infos.wechant=ui->wxED->text();
    ptr->addStu(infos);
    this->hide();
    clearall_textLine();
}


void add_student::on_return_main_clicked()
{
    this->hide();
    clearall_textLine();
}


void add_student::on_reset_btn_clicked()
{
    clearall_textLine();
}

void add_student::clearall_textLine()
{
    ui->nameed->clear();
    ui->age_spin->setValue(0);
    ui->clss->clear();
    ui->clased->clear();
    ui->phoned->clear();
    ui->stuid->clear();
    ui->wxED->clear();
}

student_info add_student::getcurrentinfo(student_info infos)
{
    ui->nameed->setText(infos.name);
    ui->age_spin->setValue(infos.age);
    ui->clss->setText(QString::number(infos.grade));
    ui->clased->setText(QString::number(infos.uiclass));
    ui->phoned->setText(infos.phone);
    ui->stuid->setText(QString::number(infos.studentid));
    ui->wxED->setText(infos.wechant);


    return infos;
}



