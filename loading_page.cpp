#include "loading_page.h"
#include "ui_loading_page.h"
#include"mainwindow.h"
#include"QMessageBox"
#include <QKeyEvent>
loading_page::loading_page(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::centerWidget)
{
    ui->setupUi(this);
}

loading_page::~loading_page()
{
    delete ui;
}

void loading_page::on_pushButton_clicked()
{
   // this->close();
    exit(0);
}


void loading_page::on_loadings_clicked()
{
    user_info infos;
    infos.username=ui->naminput->text();
    infos.password=ui->pwdinput->text();
    sqls=sqlconnect::getinstance();
    QString names=ui->naminput->text();
    if(!sqls->exist_user(names))
        QMessageBox::critical(nullptr,"错误","无此用户");
    else if(!sqls->check_core(infos))
        QMessageBox::critical(nullptr,"错误","密码错误");
    else
    emit send_sucessed();
}
void loading_page::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return)
    {

        this->on_loadings_clicked();

    }
}
