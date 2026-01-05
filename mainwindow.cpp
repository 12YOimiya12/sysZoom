#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"QKeyEvent"

#include <QCoreApplication>
#include <QFile>
void MainWindow::set_style()
{
    QFile f;
    //auto str=QCoreApplication::applicationDirPath();
    // QString str=QString("E:\qttto\build-stuma-Desktop_Qt_6_2_3_MinGW_64_bit-Debug\debug\syus.css");
    f.setFileName(":/cssresouerse/syus.css");
    f.open(QIODevice::ReadOnly);
    QString strs=f.readAll();
    this->setStyleSheet(strs);
    son.setStyleSheet(strs);
    add_stus1.setStyleSheet(strs);
    edit1.setStyleSheet(strs);


}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,m_ptrstu(nullptr)
{
    ui->setupUi(this);
    son.show();

    connect(&son,&loading_page::send_sucessed,this,[=](){this->show();son.close();});
    ui->treeWidget->clear();
    ui->treeWidget->setColumnCount(1);
    QStringList lx;
    lx<<"动物园管理系统";
    //设置树结构：
     QTreeWidgetItem *pf=new QTreeWidgetItem(ui->treeWidget,lx);
    // QTreeWidgetItem *p1=new QTreeWidgetItem(pf,QStringList("用户管理"));
     QTreeWidgetItem *p2=new QTreeWidgetItem(pf,QStringList("管理员管理"));
     QTreeWidgetItem *p3=new QTreeWidgetItem(pf,QStringList("动物管理"));
     QTreeWidgetItem *p4=new QTreeWidgetItem(pf,QStringList("饲养所管理"));
     QTreeWidgetItem *p5=new QTreeWidgetItem(pf,QStringList("展台管理"));
     ui->treeWidget->setItemsExpandable(true);
     ui->treeWidget->expandAll();

     ui->treeWidget->addTopLevelItem(pf);
     //pf->addChild(p1);
     pf->addChild(p2);
     pf->addChild(p3);
     pf->addChild(p4);
     pf->addChild(p5);
     set_style();
     m_ptrstu=sqlconnect::getinstance();
     update_datas();
     update_users();
     update_animal();
     update_rooms();
     update_pre();
      // sl_names<<"曾林华";
      // sl_names<<"冯光杰";
      // sl_names<<"肖文龙";
      // sl_names<<"王小洲";
      // sl_names<<"付宇轩";
      // sl_names<<"汪汉丰";
      // sl_names<<"黄旗斌";
      // sl_names<<"毛志彬";
      // sl_names<<"陈林";
      // sl_names<<"白文";
      // sl_names<<"刘子文";
      // sl_names<<"赖碧宁";
      // sl_names<<"金明杰";
      // sl_names<<"王志伟";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->close();

}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_F1)
        {
            QFile f;
            //auto str=QCoreApplication::applicationDirPath();
           // QString str=QString("E:\qttto\build-stuma-Desktop_Qt_6_2_3_MinGW_64_bit-Debug\debug\syus.css");
            f.setFileName(":/cssresouerse/syus.css");
            f.open(QIODevice::ReadOnly);
            QString strs=f.readAll();
            this->setStyleSheet(strs);
            son.setStyleSheet(strs);
            add_stus1.setStyleSheet(strs);
        }

    if (event->key() == Qt::Key_Return)
    {

            on_selectButton_clicked();

    }
}


void MainWindow::on_simulation_clicked()
{
     m_ptrstu->clearallstu();
    QRandomGenerator g,c;
    g.seed(0);
    c.seed(0);
    for( int i=1;i<sl_names.size();i++)
    {

        auto grades=g.bounded(1,10);
        auto uiclass2=c.bounded(1,40);
        student_info info;
        info.name=sl_names[i];
        if(i%3)
        {
            info.age=24;
        }
        if(i%7)
        {
            info.age=22;
        }
        if(i%2)
        {
            info.age=28;
        }
        info.grade=grades;
        info.uiclass=uiclass2;
        info.studentid=1;
        info.phone="234567323";
        info.id=i;
        m_ptrstu->addStu(info);
    }


}


void MainWindow::on_add_btn_clicked()
{
    add_stus1.exec();//模态窗口
    //add_stus1.control=1;
    update_datas();
    add_stus1.hide();
}


void MainWindow::on_pushButton_2_clicked()
{
    m_ptrstu->clearallstu();
    update_datas();
}

void MainWindow::update_datas()
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(9);
    QStringList lheaders;
    lheaders<<"序号"<<"编号"<<"姓名"<<"年龄"<<"年级"<<"班级"<<"学号"<<"电话"<<"微信";
    ui->tableWidget->setHorizontalHeaderLabels(lheaders);

    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置只能选中行


    // 设置所有列的宽度调整模式为 Stretch
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // 或者手动计算并设置列宽
    int totalWidth = ui->tableWidget->width();
    int columnCount = ui->tableWidget->columnCount();
    int columnWidth = totalWidth / columnCount;

    for (int i = 0; i < columnCount; ++i) {
        ui->tableWidget->setColumnWidth(i, columnWidth);
    }

    auto x=m_ptrstu->getnumofstu();
    QList<student_info> lxs=m_ptrstu->getpageStu(0,x);
    ui->label_sum->setText(QString("动物数量:%1").arg(x));
    //ui->tableWidget->clear();
    ui->tableWidget->setRowCount(x);
    for(int it=0;it<lxs.size();it++)
    {
        ui->tableWidget->setItem(it,0,new QTableWidgetItem(QString::number(it)));

        ui->tableWidget->setItem(it,1,new QTableWidgetItem(QString::number(lxs[it].id)));
        ui->tableWidget->setItem(it,2,new QTableWidgetItem(lxs[it].name));

        ui->tableWidget->setItem(it,3,new QTableWidgetItem(QString::number(lxs[it].age)));

        ui->tableWidget->setItem(it,4,new QTableWidgetItem(QString::number(lxs[it].grade)));

        ui->tableWidget->setItem(it,5,new QTableWidgetItem(QString::number(lxs[it].uiclass)));

        ui->tableWidget->setItem(it,6,new QTableWidgetItem(QString::number(lxs[it].studentid)));
        ui->tableWidget->setItem(it,7,new QTableWidgetItem(lxs[it].phone));

        ui->tableWidget->setItem(it,8,new QTableWidgetItem(lxs[it].wechant));

    }
}

void MainWindow::update_users()
{
    ui->tableWidget_2->clear();
    ui->tableWidget_2->setColumnCount(4);
    QStringList columnName;
    columnName<<"序号"<<"姓名"<<"密码"<<"权限";
    ui->tableWidget_2->setHorizontalHeaderLabels(columnName);

    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置只能选中行

    auto numUser=m_ptrstu->get_number_of_user();
    QList<user_info> userList=m_ptrstu->getAlluser();
    ui->numuser->setText(QString("管理员数量:%1").arg(numUser));
    ui->tableWidget_2->setRowCount(numUser);
    // 设置所有列的宽度调整模式为 Stretch
    ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // 或者手动计算并设置列宽
    int totalWidth = ui->tableWidget_2->width();
    int columnCount = ui->tableWidget_2->columnCount();
    int columnWidth = totalWidth / columnCount;

    for (int i = 0; i < columnCount; ++i) {
        ui->tableWidget_2->setColumnWidth(i, columnWidth);
    }

    for(int it=0;it<userList.size();it++)
    {
        ui->tableWidget_2->setItem(it,0,new QTableWidgetItem(QString::number(it)));
        ui->tableWidget_2->setItem(it,1,new QTableWidgetItem(userList[it].username));
        ui->tableWidget_2->setItem(it,2,new QTableWidgetItem(userList[it].password));
        ui->tableWidget_2->setItem(it,3,new QTableWidgetItem(userList[it].autor));

    }

}

void MainWindow::update_animal()
{
    ui->tableWidget_ani->clear();
    ui->tableWidget_ani->setColumnCount(7);
    QStringList columnName;
    columnName<<"序号"<<"动物代号"<<"名称"<<"喂养时间"<<"雌雄"<<"数量"<<"食物";
    ui->tableWidget_ani->setHorizontalHeaderLabels(columnName);

    ui->tableWidget_ani->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_ani->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置只能选中行

    auto numUser=m_ptrstu->getaniSum();
    QList<animals> aniList=m_ptrstu->getAllAnimals();
    ui->label_sum->setText(QString("动物数量:%1").arg(numUser));
    ui->numani->setText(QString("动物数量:%1").arg(numUser));
    ui->tableWidget_ani->setRowCount(numUser);
    // 设置所有列的宽度调整模式为 Stretch
    ui->tableWidget_ani->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // 或者手动计算并设置列宽
    int totalWidth = ui->tableWidget_ani->width();
    int columnCount = ui->tableWidget_ani->columnCount();
    int columnWidth = totalWidth / columnCount;

    for (int i = 0; i < columnCount; ++i) {
        ui->tableWidget_ani->setColumnWidth(i, columnWidth);
    }

    for(int it=0;it<aniList.size();it++)
    {
        ui->tableWidget_ani->setItem(it,0,new QTableWidgetItem(QString::number(it)));
        ui->tableWidget_ani->setItem(it,1,new QTableWidgetItem(QString::number(aniList[it].animal_number)));
        ui->tableWidget_ani->setItem(it,2,new QTableWidgetItem(aniList[it].specie));
        ui->tableWidget_ani->setItem(it,3,new QTableWidgetItem(aniList[it].time_of_feeding));
        ui->tableWidget_ani->setItem(it,4,new QTableWidgetItem(aniList[it].gender));
        ui->tableWidget_ani->setItem(it,5,new QTableWidgetItem(QString::number(aniList[it].number)));
        ui->tableWidget_ani->setItem(it,6,new QTableWidgetItem(aniList[it].food));


    }

}

void MainWindow::update_rooms()
{
    ui->tableWidget_room->clear();
    ui->tableWidget_room->setColumnCount(4);
    QStringList columnName;
    columnName<<"序号"<<"代号"<<"种类"<<"面积";
    ui->tableWidget_room->setHorizontalHeaderLabels(columnName);

    ui->tableWidget_room->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_room->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置只能选中行

    auto numUser=m_ptrstu->getRoomNum();
    QList<rooms> aniList=m_ptrstu->getAllRooms();
    ui->numroom->setText(QString("饲养所数量:%1").arg(numUser));
    ui->tableWidget_room->setRowCount(numUser);
    // 设置所有列的宽度调整模式为 Stretch
    ui->tableWidget_room->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // 或者手动计算并设置列宽
    int totalWidth = ui->tableWidget_room->width();
    int columnCount = ui->tableWidget_room->columnCount();
    int columnWidth = totalWidth / columnCount;

    for (int i = 0; i < columnCount; ++i) {
        ui->tableWidget_room->setColumnWidth(i, columnWidth);
    }

    for(int it=0;it<aniList.size();it++)
    {
        ui->tableWidget_room->setItem(it,0,new QTableWidgetItem(QString::number(it)));
        ui->tableWidget_room->setItem(it,1,new QTableWidgetItem(QString::number(aniList[it].place_number)));
        ui->tableWidget_room->setItem(it,2,new QTableWidgetItem(aniList[it].place_kind_of_dwelling));
        ui->tableWidget_room->setItem(it,3,new QTableWidgetItem(aniList[it].squard_of_place));
    }

}

void MainWindow::update_pre()
{
    ui->tableWidget_pre->clear();
    ui->tableWidget_pre->setColumnCount(4);
    QStringList columnName;
    columnName<<"序号"<<"展区代号"<<"展出动物"<<"展出数量";
    ui->tableWidget_pre->setHorizontalHeaderLabels(columnName);

    ui->tableWidget_pre->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_pre->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置只能选中行

    auto numUser=m_ptrstu->getpresentNum();
    QList<present> aniList=m_ptrstu->getAllpresents();
    ui->numpre->setText(QString("展区数量:%1").arg(numUser));
    ui->tableWidget_pre->setRowCount(numUser);
    // 设置所有列的宽度调整模式为 Stretch
    ui->tableWidget_pre->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // 或者手动计算并设置列宽
    int totalWidth = ui->tableWidget_pre->width();
    int columnCount = ui->tableWidget_pre->columnCount();
    int columnWidth = totalWidth / columnCount;

    for (int i = 0; i < columnCount; ++i) {
        ui->tableWidget_pre->setColumnWidth(i, columnWidth);
    }

    for(int it=0;it<aniList.size();it++)
    {
        ui->tableWidget_pre->setItem(it,0,new QTableWidgetItem(QString::number(it)));
        ui->tableWidget_pre->setItem(it,1,new QTableWidgetItem(QString::number(aniList[it].area_number)));
        ui->tableWidget_pre->setItem(it,2,new QTableWidgetItem(aniList[it].present_animal));
        ui->tableWidget_pre->setItem(it,3,new QTableWidgetItem(QString::number(aniList[it].num_of_room)));
    }

}


void MainWindow::on_delete_btn_clicked()
{
    int the_item=ui->tableWidget->currentRow();
    if(the_item>=0)
    {
        int ids=ui->tableWidget->item(the_item,1)->text().toUInt();
        m_ptrstu->dele(ids);
        update_datas();

    }
}


void MainWindow::on_fix_button_clicked()
{

    int the_item=ui->tableWidget->currentRow();
    if(the_item>=0)
    {
        int ids=ui->tableWidget->item(the_item,1)->text().toUInt();
        m_ptrstu->dele(ids);
    }
    student_info infos1;

    int theitem=ui->tableWidget->currentRow();
    infos1.id=ui->tableWidget->item(theitem,1)->text().toUInt();
    infos1.name=ui->tableWidget->item(theitem,2)->text();
    infos1.age=ui->tableWidget->item(theitem,3)->text().toUInt();
    infos1.grade=ui->tableWidget->item(theitem,4)->text().toUInt();
    infos1.uiclass=ui->tableWidget->item(theitem,5)->text().toUInt();
    infos1.studentid=ui->tableWidget->item(theitem,6)->text().toUInt();
    infos1.phone=ui->tableWidget->item(theitem,7)->text();
    infos1.wechant=ui->tableWidget->item(theitem,8)->text();


    if(theitem>=0)
    {

        add_stus1.getcurrentinfo(infos1);

        add_stus1.exec();

    }
    update_datas();
}


void MainWindow::on_selectButton_clicked()
{
    QString fitername=ui->nameline->text();
    if(fitername.isEmpty())
    {
        update_datas();
        return;

    }
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(9);
    QStringList lheaders;
    lheaders<<"序号"<<"编号"<<"姓名"<<"年龄"<<"年级"<<"班级"<<"学号"<<"电话"<<"微信";
    ui->tableWidget->setHorizontalHeaderLabels(lheaders);

    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置只能选中行

    auto x=m_ptrstu->getnumofstu();
    QList<student_info> lxs=m_ptrstu->getpageStu(0,x);
    ui->label_sum->setText(QString("动物数量:%1").arg(x));


    int index=0;
    // ui->tableWidget->setRowCount(x);
    for(int it=0;it<lxs.size();it++)
    {
        if(!lxs[it].name.contains(fitername))
        {
            continue;
        }

        ui->tableWidget->setItem(index,0,new QTableWidgetItem(QString::number(index+1)));

        ui->tableWidget->setItem(index,1,new QTableWidgetItem(QString::number(lxs[it].id)));
        ui->tableWidget->setItem(index,2,new QTableWidgetItem(lxs[it].name));

        ui->tableWidget->setItem(index,3,new QTableWidgetItem(QString::number(lxs[it].age)));

        ui->tableWidget->setItem(index,4,new QTableWidgetItem(QString::number(lxs[it].grade)));

        ui->tableWidget->setItem(index,5,new QTableWidgetItem(QString::number(lxs[it].uiclass)));

        ui->tableWidget->setItem(index,6,new QTableWidgetItem(QString::number(lxs[it].studentid)));
        ui->tableWidget->setItem(index,7,new QTableWidgetItem(lxs[it].phone));

        ui->tableWidget->setItem(index,8,new QTableWidgetItem(lxs[it].wechant));
        index++;
    }
    ui->tableWidget->setRowCount(index);
}



void MainWindow::on_treeWidget_itemClicked(QTreeWidgetItem *item, int column)
{
     if(item->text(0)=="用户管理")
     {
        ui->stackedWidget->setCurrentWidget(ui->page1);
     }
     else if(item->text(0)=="管理员管理")
         {
         ui->stackedWidget->setCurrentWidget(ui->page2);
          }
     else if(item->text(0)=="动物管理")
         ui->stackedWidget->setCurrentWidget(ui->page_animals);
     else if(item->text(0)=="饲养所管理")
              ui->stackedWidget->setCurrentWidget(ui->page_room);
     else if(item->text(0)=="展台管理")
              ui->stackedWidget->setCurrentWidget(ui->page_pre);
}


void MainWindow::on_addUserBtn_clicked()
{
    edit1.change_page(1);
    edit1.exec();
    update_users();
    edit1.hide();
}


void MainWindow::on_del_User_btn_clicked()
{
    int the_item=ui->tableWidget_2->currentRow();
    if(the_item>=0)
    {
        QString nameofdeleted=ui->tableWidget_2->item(the_item,1)->text();

        //int ids=ui->tableWidget_2->item(the_item,1)->text().toUInt();
        m_ptrstu->deleteuser(nameofdeleted);
        update_users();

    }
}


void MainWindow::on_clearUserBtn_clicked()
{
    m_ptrstu->clearalluser();
    update_users();
}


void MainWindow::on_simuStuBtn_clicked()
{
    update_users();
}


void MainWindow::on_fixUserBtn_clicked()
{
    int this_item=ui->tableWidget_2->currentRow();
    QString rows;
    if(this_item>=0)
    {
      rows=ui->tableWidget_2->item(this_item,1)->text();
      user_info uinfos;
      uinfos.username=ui->tableWidget_2->item(this_item,1)->text();
      uinfos.password=ui->tableWidget_2->item(this_item,2)->text();
      uinfos.autor=ui->tableWidget_2->item(this_item,3)->text();
      m_ptrstu->deleteuser(uinfos.username);
      edit1.transform_user(uinfos);
      edit1.change_page(1);
      edit1.exec();
      update_users();
    }

}


void MainWindow::on_findserbtn_clicked()
{
    QString usersname=ui->lEtofsearch->text();
    if(usersname.isEmpty())
    {
        update_users();
        return;

    }
    ui->tableWidget_2->clear();
    ui->tableWidget_2->setColumnCount(4);
    QStringList headername;
    headername<<"序号"<<"姓名"<<"密码"<<"权限";
    ui->tableWidget_2->setHorizontalHeaderLabels(headername);

    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置只能选中行

    auto y=m_ptrstu->get_number_of_user();
    QList<user_info> lxss=m_ptrstu->getAlluser();
    //ui->label_sum->setText(QString("学生数量:%1").arg(x));
    int index=0;
    for(int it=0;it<lxss.size();it++)
    {
        if(!lxss[it].username.contains(usersname))
        {
            continue;
        }

        ui->tableWidget_2->setItem(index,0,new QTableWidgetItem(QString::number(index+1)));

        ui->tableWidget_2->setItem(index,1,new QTableWidgetItem(lxss[it].username));
        ui->tableWidget_2->setItem(index,2,new QTableWidgetItem(lxss[it].password));

        ui->tableWidget_2->setItem(index,3,new QTableWidgetItem(lxss[it].autor));



        index++;
    }
    ui->tableWidget_2->setRowCount(index);
}


void MainWindow::on_addaniBtn_clicked()
{
    edit1.change_page(2);
    edit1.exec();


    update_animal();
    edit1.hide();
}


void MainWindow::on_addpreBtn_clicked()
{
    edit1.change_page(4);
    edit1.exec();


    update_rooms();
    edit1.hide();
}


void MainWindow::on_addroomBtn_clicked()
{
    edit1.change_page(3);
    edit1.exec();

    update_pre();
    edit1.hide();
}


void MainWindow::on_simupreBtn_clicked()
{
    this->update_pre();
}


void MainWindow::on_simroomBtn_clicked()
{
    this->update_rooms();
}


void MainWindow::on_fixpreBtn_clicked()
{
    int this_item=ui->tableWidget_pre->currentRow();
    QString rows;
    if(this_item>=0)
    {
        rows=ui->tableWidget_pre->item(this_item,1)->text();
        present uinfos;
        uinfos.area_number=ui->tableWidget_pre->item(this_item,1)->text().toInt();
        uinfos.num_of_room=ui->tableWidget_pre->item(this_item,2)->text().toInt();
        uinfos.present_animal=ui->tableWidget_pre->item(this_item,3)->text();
        m_ptrstu->delepresents(uinfos.area_number);
        edit1.transform_pre(uinfos);
        edit1.change_page(4);
        edit1.exec();
        update_pre();
    }
}


void MainWindow::on_fixAniBtn_clicked()
{
    int this_item=ui->tableWidget_ani->currentRow();
    QString rows;
    if(this_item>=0)
    {
        rows=ui->tableWidget_ani->item(this_item,1)->text();
        animals uinfos;

        uinfos.animal_number=ui->tableWidget_ani->item(this_item,1)->text().toInt();
        uinfos.specie=ui->tableWidget_ani->item(this_item,2)->text();
        uinfos.time_of_feeding=ui->tableWidget_ani->item(this_item,3)->text();
        uinfos.gender=ui->tableWidget_ani->item(this_item,4)->text();
        uinfos.number=ui->tableWidget_ani->item(this_item,5)->text().toInt();
        uinfos.food=ui->tableWidget_ani->item(this_item,6)->text();

        m_ptrstu->deleAnimals(uinfos.specie);
        edit1.transform_ani(uinfos);
        edit1.change_page(2);
        edit1.exec();
        update_animal();
    }
}


void MainWindow::on_fixroomBtn_clicked()
{
    int this_item=ui->tableWidget_room->currentRow();
    QString rows;
    if(this_item>=0)
    {
        rows=ui->tableWidget_room->item(this_item,1)->text();
        rooms uinfos;

        uinfos.place_number=ui->tableWidget_room->item(this_item,1)->text().toInt();
        uinfos.place_kind_of_dwelling=ui->tableWidget_room->item(this_item,2)->text();
        uinfos.squard_of_place=ui->tableWidget_room->item(this_item,3)->text();

        m_ptrstu->delerooms(uinfos.place_kind_of_dwelling);
        edit1.transform_room(uinfos);
        edit1.change_page(3);
        edit1.exec();
        update_rooms();
    }
}


void MainWindow::on_findroombtn_clicked()
{
    QString usersname=ui->roomofsearch->text();
    if(usersname.isEmpty())
    {
        update_rooms();
        return;

    }
    ui->tableWidget_room->clear();
    ui->tableWidget_room->setColumnCount(4);
    QStringList headername;
    headername<<"序号"<<"代号"<<"种类"<<"面积";
    ui->tableWidget_room->setHorizontalHeaderLabels(headername);

    ui->tableWidget_room->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_room->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置只能选中行

   // auto y=m_ptrstu->getn();
    QList<rooms> lxss=m_ptrstu->getAllRooms();
    //ui->label_sum->setText(QString("学生数量:%1").arg(x));
    int index=0;
    for(int it=0;it<lxss.size();it++)
    {
        if(!lxss[it].place_kind_of_dwelling.contains(usersname))
        {
            continue;
        }

        ui->tableWidget_room->setItem(index,0,new QTableWidgetItem(QString::number(index+1)));

        ui->tableWidget_room->setItem(index,1,new QTableWidgetItem(lxss[it].place_number));
        ui->tableWidget_room->setItem(index,2,new QTableWidgetItem(lxss[it].place_kind_of_dwelling));

        ui->tableWidget_room->setItem(index,3,new QTableWidgetItem(lxss[it].squard_of_place));



        index++;
    }
    ui->tableWidget_room->setRowCount(index);
}


void MainWindow::on_findanibtn_clicked()
{
    QString usersname=ui->aniofsearch->text();
    if(usersname.isEmpty())
    {
        update_animal();
        return;

    }
    ui->tableWidget_ani->clear();
    ui->tableWidget_ani->setColumnCount(7);
    QStringList headername;
    headername<<"序号"<<"动物代号"<<"名称"<<"喂养时间"<<"雌雄"<<"数量"<<"食物";
    ui->tableWidget_ani->setHorizontalHeaderLabels(headername);

    ui->tableWidget_ani->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_ani->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置只能选中行

    // auto y=m_ptrstu->getn();
    QList<animals> lxss=m_ptrstu->getAllAnimals();
    //ui->label_sum->setText(QString("学生数量:%1").arg(x));
    int index=0;
    for(int it=0;it<lxss.size();it++)
    {
        if(!lxss[it].specie.contains(usersname))
        {
            continue;
        }

        ui->tableWidget_ani->setItem(index,0,new QTableWidgetItem(QString::number(it)));
        ui->tableWidget_ani->setItem(index,1,new QTableWidgetItem(QString::number(lxss[it].animal_number)));
        ui->tableWidget_ani->setItem(index,2,new QTableWidgetItem(lxss[it].specie));
        ui->tableWidget_ani->setItem(index,3,new QTableWidgetItem(lxss[it].time_of_feeding));
        ui->tableWidget_ani->setItem(index,4,new QTableWidgetItem(lxss[it].gender));
        ui->tableWidget_ani->setItem(index,5,new QTableWidgetItem(QString::number(lxss[it].number)));
        ui->tableWidget_ani->setItem(index,6,new QTableWidgetItem(lxss[it].food));




        index++;
    }
    ui->tableWidget_ani->setRowCount(index);
}


void MainWindow::on_findprebtn_clicked()
{
    QString usersname=ui->preofsearch->text();
    if(usersname.isEmpty())
    {
        update_pre();
        return;

    }
    ui->tableWidget_pre->clear();
    ui->tableWidget_pre->setColumnCount(4);
    QStringList headername;
    headername<<"序号"<<"展区代号"<<"展出动物"<<"展出数量";
    ui->tableWidget_pre->setHorizontalHeaderLabels(headername);

    ui->tableWidget_pre->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_pre->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置只能选中行

    // auto y=m_ptrstu->getn();
    QList<present> lxss=m_ptrstu->getAllpresents();
    //ui->label_sum->setText(QString("学生数量:%1").arg(x));
    int index=0;
    for(int it=0;it<lxss.size();it++)
    {
        if(!lxss[it].present_animal.contains(usersname))
        {
            continue;
        }

        ui->tableWidget_pre->setItem(index,0,new QTableWidgetItem(QString::number(it)));
        ui->tableWidget_pre->setItem(index,1,new QTableWidgetItem(QString::number(lxss[it].area_number)));
        ui->tableWidget_pre->setItem(index,2,new QTableWidgetItem(lxss[it].present_animal));
        ui->tableWidget_pre->setItem(index,3,new QTableWidgetItem(QString::number(lxss[it].num_of_room)));



        index++;
    }
    ui->tableWidget_pre->setRowCount(index);
}


void MainWindow::on_del_room_btn_clicked()
{
    int the_item=ui->tableWidget_room->currentRow();
    if(the_item>=0)
    {
        QString nameofdeleted=ui->tableWidget_room->item(the_item,2)->text();

        //int ids=ui->tableWidget_2->item(the_item,1)->text().toUInt();
        m_ptrstu->delerooms(nameofdeleted);
        update_rooms();

    }
}


void MainWindow::on_del_ani_btn_clicked()
{
    int the_item=ui->tableWidget_ani->currentRow();
    if(the_item>=0)
    {
        QString nameofdeleted=ui->tableWidget_ani->item(the_item,2)->text();

        //int ids=ui->tableWidget_2->item(the_item,1)->text().toUInt();
        m_ptrstu->deleAnimals(nameofdeleted);
        update_animal();

    }
}


void MainWindow::on_del_pre_btn_clicked()
{
    int the_item=ui->tableWidget_pre->currentRow();
    if(the_item>=0)
    {
        quint32 nameofdeleted=ui->tableWidget_pre->item(the_item,1)->text().toInt();

        //int ids=ui->tableWidget_2->item(the_item,1)->text().toUInt();
        m_ptrstu->delepresents(nameofdeleted);
        update_pre();

    }
}


void MainWindow::on_clearpreBtn_clicked()
{
    m_ptrstu->clearallpresents();
    update_pre();
}


void MainWindow::on_clearroomBtn_clicked()
{
    m_ptrstu->clearallrooms();
    update_rooms();
}


void MainWindow::on_clearaniBtn__clicked()
{
    m_ptrstu->clearallAnimals();
    update_animal();
}

