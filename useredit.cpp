#include "useredit.h"
#include "ui_useredit.h"
#include"sqlconnect.h"
UserEdit::UserEdit(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UserEdit)
{
    ui->setupUi(this);
}

void UserEdit::clear_the_lines()
{
    ui->lineEditauth->clear();
    ui->lineEditname->clear();
    ui->lineEditpwd->clear();
}

void UserEdit::transform_user(user_info usinfo)
{
    ui->lineEditname->setText(usinfo.username);
    ui->lineEditpwd->setText(usinfo.password);
    ui->lineEditauth->setText(usinfo.autor);
}

void UserEdit::transform_ani(animals aniinfo)
{
    ui->num_Edit->setText(QString::number(aniinfo.animal_number));
    ui->lineEditfood->setText(aniinfo.food);
    ui->numsedit->setText(QString::number(aniinfo.number));
    ui->gendet_edit->setText(aniinfo.gender);
    ui->time_edit->setText(aniinfo.time_of_feeding);
    ui->name_edit->setText(aniinfo.specie);
}

void UserEdit::transform_room(rooms roominfo)
{
    ui->lineEditroomnum->setText(QString::number(roominfo.place_number));
    ui->lineEditkind->setText(roominfo.place_kind_of_dwelling);
    ui->lineEditarea->setText(roominfo.squard_of_place);

}

void UserEdit::transform_pre(present preinfo)
{
    ui->lineEditprenum->setText(QString::number(preinfo.area_number));
    ui->lineEditpreani->setText(preinfo.present_animal);
    ui->lineEditauth_4->setText(QString::number(preinfo.num_of_room));
}

void UserEdit::change_page(int control)
{
    if(control==1)
        ui->stackedWidget->setCurrentWidget(ui->page_user);
    if(control==2)
        ui->stackedWidget->setCurrentWidget(ui->page_ani);
    if(control==3)
        ui->stackedWidget->setCurrentWidget(ui->page_room);
    if(control==4)
        ui->stackedWidget->setCurrentWidget(ui->page_pre);
}

void UserEdit::clear_ani_line()
{
    ui->lineEditfood->clear();
    ui->num_Edit->clear();
    ui->numsedit->clear();
    ui->time_edit->clear();
    ui->name_edit->clear();
    ui->gendet_edit->clear();
}

void UserEdit::clear_room_line()
{
    ui->lineEditroomnum->clear();
    ui->lineEditkind->clear();
    ui->lineEditarea->clear();
}

void UserEdit::clear_pre_line()
{
    ui->lineEditpreani->clear();
    ui->lineEditprenum->clear();
    ui->lineEditauth_4->clear();
}


UserEdit::~UserEdit()
{
    delete ui;
}

void UserEdit::on_comfirmBtn_2_clicked()
{
    user_info infos;
    auto ptr2=sqlconnect::getinstance();
    infos.username=ui->lineEditname->text();
    infos.password=ui->lineEditpwd->text();
    infos.autor=ui->lineEditauth->text();
    ptr2->addUser(infos);
    this->hide();

    clear_the_lines();

}


void UserEdit::on_exitBtn_clicked()
{
    this->hide();
}


void UserEdit::on_exitBtn_2_clicked()
{
    this->hide();
}


void UserEdit::on_resetBtn_clicked()
{
    clear_the_lines();

}


void UserEdit::on_exitBtn_4_clicked()
{
    this->hide();
}


void UserEdit::on_exitBtn_3_clicked()
{
    this->hide();
}


void UserEdit::on_comfirmBtn_ani_clicked()
{
    animals infos;
    auto ptr2=sqlconnect::getinstance();
    infos.animal_number=ui->num_Edit->text().toInt();
    infos.food=ui->lineEditfood->text();
    infos.gender=ui->gendet_edit->text();
    infos.number=ui->numsedit->text().toInt();
    infos.specie=ui->name_edit->text();
    infos.time_of_feeding=ui->time_edit->text();
    ptr2->addAnimals(infos);
    this->hide();

    clear_ani_line();
}


void UserEdit::on_comfirmBtn_pre_clicked()
{
    present infos;
    auto ptr2=sqlconnect::getinstance();
    infos.area_number=ui->lineEditprenum->text().toInt();
    infos.num_of_room=ui->lineEditauth_4->text().toInt();
    infos.present_animal=ui->lineEditpreani->text();
    ptr2->addpresents(infos);
    this->hide();

    clear_pre_line();
}


void UserEdit::on_comfirmBtn_room_clicked()
{
    rooms infos;
    auto ptr2=sqlconnect::getinstance();
    infos.place_kind_of_dwelling=ui->lineEditkind->text();
    infos.place_number=ui->lineEditroomnum->text().toInt();
    infos.squard_of_place=ui->lineEditarea->text();
    ptr2->addrooms(infos);
    this->hide();

    clear_room_line();
}

