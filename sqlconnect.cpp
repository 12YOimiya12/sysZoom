#include "sqlconnect.h"
#include <QMessageBox>
#include <QCoreApplication>
#include <QDebug>
#include"QSqlError"


sqlconnect *sqlconnect::siglesql=nullptr;


sqlconnect::sqlconnect(QObject *parent)
    : QObject(parent)
{
    initialize();

   {

       // present as11;
       // as11.area_number=111;
       // as11.num_of_room=213;
       // as11.present_animal="21e";
       // addpresents(as11);
       // QList<present> sa;
       // sa=getAllpresents();
       // qDebug()<<sa[0].area_number;
       // delepresents(11);

      //   rooms dwa71;
      //  dwa71.place_kind_of_dwelling="1dadwvs";
      //   dwa71.place_number=12112;
      //  dwa71.squard_of_place="wd1awd";

      //   addrooms(dwa71);
      //  QList<rooms> x=getAllRooms();
      //   qDebug()<<x[0].place_kind_of_dwelling;
      //  clearallrooms();
      // // QString are=QString("dadvs");
        //delerooms(are);
       //  animals a1l;
       // a1l.gender="ad";
       //  a1l.number=5545515;
       // a1l.animal_number=12;
       //  addAnimals(a1l);
       // animals a1lw;
       // a1lw.gender="awd";
       // a1lw.number=5545515;
       // a1lw.animal_number=232;
       // addAnimals(a1lw);//c
      // clearallAnimals();
      // qDebug()<<getaniSum();
       //     student_info xt;

       // for (int i=1;i<100;i++)
       //  {
       //      xt.id=i;
       //      char x=i+'a';
       //      xt.studentid+=i;
       //      xt.name+=x;
       //      addStu(xt);
       //  }
    // xt.name = "yoimiya";
    // xt.id=12;
    // updataStu(xt);
    // user_info u1;
    // u1.username="mas867ter";
    // u1.password="114775888514";
    // u1.autor="o1";
    // addUser(u1);
    //deleteuser("master");
    //qDebug()<<getnumofstu();
    //getpageStu(2,4);
   // dele(12);
   // clearallstu();
    // if(exist_user("master"))
    //     qDebug()<<"114";
    // else
    //     qDebug()<<"1124";
    // user_info us;
    // us.password=QString("114514");
    // us.username=QString("master");
    // us.autor=QString("administrator");
    // change_auther(us);

   }
}

void sqlconnect::initialize()
{
    if (QSqlDatabase::drivers().isEmpty()) {
        QMessageBox::information(nullptr, tr("No database"), tr("dadad"));
        qDebug() << "error";
        return;
    }

    m_sql = QSqlDatabase::addDatabase("QSQLITE");

    QString databasePath = QCoreApplication::applicationDirPath() ;
    databasePath+="/users.db";
   // qDebug()<<databasePath;

    m_sql.setDatabaseName(databasePath); // 更改为相对路径或使用配置文件

    if (!m_sql.open()) {
        QMessageBox::information(nullptr, tr("Unable to open database"), tr("dadad"));
        qDebug() << "error";
    }

}

quint32 sqlconnect::getnumofstu()
{
    QSqlQuery act1(m_sql);
    if (!act1.exec("select count(id) from student")) {
        qDebug() << "Error in query: " ;
        return 0;
    }
    if (act1.next()) {
        return act1.value(0).toUInt();
    }
    return 0;
}

QList<student_info> sqlconnect::getpageStu(quint32 page, quint32 numb)
{
    QList<student_info> l;
    QSqlQuery act1(m_sql);
    QString strsql=QString("select * from student order by id limit %1 offset %2").arg(numb).arg(numb*page);
    act1.exec(strsql);
    student_info infos;
    while(act1.next())
    {
        infos.id=act1.value(0).toInt();
        infos.name=act1.value(1).toString();
        infos.age=act1.value(2).toInt();
        infos.grade=act1.value(3).toInt();
        infos.uiclass=act1.value(4).toInt();
        infos.studentid=act1.value(5).toInt();
        infos.phone=act1.value(6).toString();
        infos.wechant=act1.value(7).toString();
        l.push_back(infos);
    }
    return l;
}

bool sqlconnect::addStu(student_info info)
{
    QSqlQuery act1(m_sql);
    QString strsql = QString("insert into student values(null,'%1',%2,%3,%4,'%5','%6','%7')")
                         .arg(info.name)
                         .arg(info.age)
                         .arg(info.grade)
                         .arg(info.uiclass) // 假设这里有uiclass成员
                         .arg(info.studentid)
                         .arg(info.phone)
                         .arg(info.wechant);
  //  act1.exec(strsql);
    return act1.exec(strsql);
}

bool sqlconnect::updataStu(student_info info)
{
    {
        // QSqlQuery act1(m_sql);
        // QString strsql = QString("update student set name='%1',age=%2,grade=%3,uiclass=%4,studentid=%5,phone='%6',wechat='%7' where id=%8")
        //                      .arg(info.name)
        //                      .arg(info.age)
        //                      .arg(info.grade)
        //                      .arg(info.uiclass) // 假设这里有uiclass成员
        //                      .arg(info.studentid)
        //                      .arg(info.phone)
        //                      .arg(info.wechant).arg(info.id);
        // //  act1.exec(strsql);
        // return act1.exec(strsql);
    }
    dele(info.id);
    QSqlQuery act1(m_sql);
    QString strsql = QString("insert into student values(%1,'%2',%3,%4,%5,'%6','%7','%8')").arg(info.id)
                         .arg(info.name)
                         .arg(info.age)
                         .arg(info.grade)
                         .arg(info.uiclass) // 假设这里有uiclass成员
                         .arg(info.studentid)
                         .arg(info.phone)
                         .arg(info.wechant);
    //  act1.exec(strsql);
    return act1.exec(strsql);
}

bool sqlconnect::dele(int ids)
{
    QSqlQuery act1(m_sql);
    QString str=QString("delete from student where id=%1").arg(ids);
    return act1.exec(str);
}

void sqlconnect::clearallstu()
{
    QSqlQuery act1(m_sql);
    QString str=QString("delete from student");
    act1.exec(str);

    act1.exec("delete from sqlite_sequence where name='student'");
    return;
}

QList<user_info> sqlconnect::getAlluser()
{
    QList<user_info> lx;
    QSqlQuery act1(m_sql);
    QString strsql=QString("select * from users ");
    act1.exec(strsql);

    user_info infos;
    while(act1.next())
    {
        infos.username=act1.value(0).toString();
        infos.password=act1.value(1).toString();
        infos.autor=act1.value(2).toString();
        lx.push_back(infos);
    }
    return lx;
}

bool sqlconnect::exist_user(QString str)
{
    QSqlQuery act1(m_sql);
    act1.exec(QString("select * from users where username='%1'").arg(str));
    return act1.next();
}

void sqlconnect::change_auther(user_info us)
{
    // QSqlQuery at1(m_sql);
    // QString str=QString("update users set password='%1',auth='%2' where username='%3'").arg(us.password,us.autor,us.autor);
    // at1.exec(str);
    // QSqlError e =at1.lastError();
    // if(e.isValid())
    //     qDebug()<<e;
    deleteuser(us.username);
    addUser(us);
}

void sqlconnect::addUser(user_info usi)
{
    QSqlQuery at1(m_sql);
    QString str=QString("insert into users values('%1','%2','%3')").arg(usi.username,usi.password,usi.autor);
    at1.exec(str);
    return;
}

void sqlconnect::deleteuser(QString strname)
{
    QSqlQuery at1(m_sql);
    QString str=QString("delete from users where username='%1'").arg(strname);
    at1.exec(str);
    return;
}

quint32 sqlconnect::get_number_of_user()
{
    QSqlQuery act1(m_sql);
    if (!act1.exec("select count(username) from users")) {
        qDebug() << "Error in query: " ;
        return 0;
    }
    if (act1.next()) {
        return act1.value(0).toUInt();
    }
    return 0;
}

void sqlconnect::clearalluser()
{
    QSqlQuery act1(m_sql);
    QString str=QString("delete from users");
    act1.exec(str);

    act1.exec("delete from sqlite_sequence where name='users'");
    return;
}

bool sqlconnect::check_core(user_info infos)
{
    QSqlQuery act2(m_sql);
    QString check_name=QString("select password from users where username='%1'").arg(infos.username);
    if(!act2.exec(check_name))
        qDebug()<<"error in Query";

    while(act2.next())
    {
        if(infos.password==act2.value(0).toString())
            return true;
    }
    return false;
}

quint32 sqlconnect::getaniSum()
{
    QSqlQuery act1(m_sql);
    if (!act1.exec("select count(specie) from animal")) {
        qDebug() << "Error in query: " ;
        return 0;
    }
    if (act1.next()) {
        return act1.value(0).toUInt();
    }
    return 0;
}

QList<animals> sqlconnect::getAllAnimals()
{
    QSqlQuery act1(m_sql);
    QString allanimals=QString("select * from animal");
    act1.exec(allanimals);
    QList<animals> ls;
    animals an1;
    while(act1.next())
    {
        an1.animal_number=act1.value(0).toInt();
        an1.specie=act1.value(1).toString();

        an1.time_of_feeding=act1.value(2).toString();

        an1.gender=act1.value(3).toString();

        an1.number=act1.value(4).toInt();

        an1.food=act1.value(5).toString();
        ls.push_back(an1);
    }
    return ls;
}

void sqlconnect::changeAnimal(animals a1)
{
    deleAnimals(a1.specie);
    addAnimals(a1);
}

void sqlconnect::deleAnimals(QString a1)
{
    QSqlQuery at1(m_sql);
    QString str=QString("delete from animal where specie='%1'").arg(a1);
    at1.exec(str);
    return;
}

void sqlconnect::clearallAnimals()
{
    QSqlQuery act2(m_sql);
    QString cl=QString("delete from animal");
    if(!act2.exec(cl))
        qDebug("error");

    act2.exec("delete from sqlite_sequence where name='animal'");
    return ;
}

void sqlconnect::addAnimals(animals a1)
{
    QSqlQuery act2(m_sql);

    QString str=QString("insert into animal values(%1,'%2','%3','%4',%5,'%6')")
                      .arg(a1.animal_number)
                      .arg(a1.specie)
                      .arg(a1.time_of_feeding)
                      .arg(a1.gender)
                      .arg(a1.number)
                      .arg(a1.food);
    if(!act2.exec(str))
        qDebug()<<"Eror";
    return;
}

QList<animals> sqlconnect::find_animal(QString a1)
{
    QSqlQuery act1(m_sql);
    QString allanimals=QString("select * from animal where specie='%1'").arg(a1);
    act1.exec(allanimals);
    QList<animals> ls;
    animals an1;
    while(act1.next())
    {
        an1.animal_number=act1.value(0).toInt();
        an1.specie=act1.value(2).toString();

        an1.time_of_feeding=act1.value(3).toString();

        an1.gender=act1.value(4).toString();

        an1.number=act1.value(5).toInt();

        an1.food=act1.value(6).toString();
        ls.push_back(an1);
    }
    return ls;
}

quint32 sqlconnect::getRoomNum()
{
    QSqlQuery act1(m_sql);
    if (!act1.exec("select count(place_kind_of_dwelling) from room_info")) {
        qDebug() << "Error in query: " ;
        return 0;
    }
    if (act1.next()) {
        return act1.value(0).toUInt();
    }
    return 0;
}

QList<rooms> sqlconnect::getAllRooms()
{
    QSqlQuery act1(m_sql);
    QString allanimals=QString("select * from room_info");
    act1.exec(allanimals);
    QList<rooms> ls;
    rooms an1;
    while(act1.next())
    {
        an1.place_kind_of_dwelling=act1.value(0).toString();
        an1.squard_of_place=act1.value(1).toString();

        an1.place_number=act1.value(2).toInt();


        ls.push_back(an1);
    }
    return ls;
}

void sqlconnect::changerooms(rooms a1)
{
    delerooms(a1.place_kind_of_dwelling);
    addrooms(a1);
}

void sqlconnect::delerooms(QString a1)
{
    QSqlQuery at1(m_sql);
    QString str=QString("delete from room_info where place_kind_of_dwelling='%1'").arg(a1);
    if(!at1.exec(str))
        qDebug("error1");
    return;
}

void sqlconnect::clearallrooms()
{
    QSqlQuery act2(m_sql);
    QString cl=QString("delete from room_info");
    if(!act2.exec(cl))
        qDebug("error");

    act2.exec("delete from sqlite_sequence where name='room_info'");
    return ;
}

void sqlconnect::addrooms(rooms a1)
{
    QSqlQuery act2(m_sql);

    QString str=QString("insert into room_info values('%1','%2',%3)")
                      .arg(a1.place_kind_of_dwelling)
                      .arg(a1.squard_of_place)
                      .arg(a1.place_number);

    if(!act2.exec(str))
        qDebug()<<"Eror";
    return;
}

quint32 sqlconnect::getpresentNum()
{
    QSqlQuery act1(m_sql);
    if (!act1.exec("select count(area_number) from displaying_area")) {
        qDebug() << "Error in query: " ;
        return 0;
    }
    if (act1.next()) {
        return act1.value(0).toUInt();
    }
    return 0;
}

QList<present> sqlconnect::getAllpresents()
{
    QSqlQuery act1(m_sql);
    QString allanimals=QString("select * from displaying_area");
    act1.exec(allanimals);
    QList<present> ls;
    present an1;
    while(act1.next())
    {
        an1.area_number=act1.value(0).toInt();
        an1.present_animal=act1.value(1).toString();

        an1.num_of_room=act1.value(2).toInt();


        ls.push_back(an1);
    }
    return ls;
}

void sqlconnect::changepresents(present a1)
{
    delepresents(a1.area_number);
    addpresents(a1);
}

void sqlconnect::delepresents(quint32 a1)
{
    QSqlQuery at1(m_sql);
    QString str=QString("delete from displaying_area where area_number='%1'").arg(a1);
    if(!at1.exec(str))
        qDebug("error1");
    return;
}

void sqlconnect::clearallpresents()
{
    QSqlQuery act2(m_sql);
    QString cl=QString("delete from displaying_area");
    if(!act2.exec(cl))
        qDebug("error");

    act2.exec("delete from sqlite_sequence where name='displaying_area'");
    return ;
}

void sqlconnect::addpresents(present a1)
{
    QSqlQuery act2(m_sql);

    QString str=QString("insert into displaying_area values(%1,'%2',%3)")
                      .arg(a1.area_number)
                      .arg(a1.present_animal)
                      .arg(a1.num_of_room);

    if(!act2.exec(str))
        qDebug()<<"Eror";
    return;
}




