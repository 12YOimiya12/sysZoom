#ifndef SQLCONNECT_H
#define SQLCONNECT_H
#include"QMessageBox"
#include"QSqlDatabase"
#include"QSqlQuery"
struct student_info
{
    int id;
    QString name;
    quint8 age;
    quint16 grade;
    quint16 uiclass;
    quint32 studentid;
    QString phone;
    QString wechant;

};
struct user_info
{
    QString username;
    QString password;
    QString autor;
};
struct animals
{
    quint32 animal_number;
    QString specie;
    QString time_of_feeding;
    QString gender;
    quint32 number;
    QString food;
};
struct rooms
{
    QString place_kind_of_dwelling;
    QString squard_of_place;
    quint32 place_number;

};
struct present
{
    quint32 area_number;
    QString present_animal;
    quint32 num_of_room;
};
class sqlconnect : public QObject
{
public:
    static sqlconnect *siglesql;
    static sqlconnect *getinstance()
    {
        if(siglesql==nullptr)
        {
            siglesql=new sqlconnect;
        }
        return siglesql;
    }


    explicit sqlconnect(QObject *parent = nullptr);

    void initialize();

    quint32 getnumofstu();//学生数量
    QList<student_info>getpageStu(quint32 page,quint32 numb);//获取某页学生信息
    bool addStu(student_info );//添加学生
    bool updataStu(student_info info);//更新信息
    bool dele(int ids);//删除信息
    void clearallstu();//清空信息

//--------------------------------------------
    QList<user_info>getAlluser();//获得所有信息
    bool exist_user(QString str);//
    void change_auther(user_info us);//改变权限
    void addUser(user_info us);//增加用户
    void deleteuser(QString strname);//删除用户
    quint32 get_number_of_user();//管理员数量
    void clearalluser();//清空管理员信息
    bool check_core(user_info infos);

//------------------------------------------
    quint32 getaniSum();
    QList<animals>getAllAnimals();
    void changeAnimal(animals a1);
    void deleAnimals(QString a1);
    void clearallAnimals();
    void addAnimals(animals a1);
    QList<animals> find_animal(QString a1);
//-------------------------------------------
    quint32 getRoomNum();
    QList<rooms>getAllRooms();
    void changerooms(rooms a1);
    void delerooms(QString a1);
    void clearallrooms();
    void addrooms(rooms a1);

//-----------------------------
    quint32 getpresentNum();
    QList<present>getAllpresents();
    void changepresents(present a1);
    void delepresents(quint32 a1);
    void clearallpresents();
    void addpresents(present a1);
//---------------------------------
signals:
public:
    QSqlDatabase m_sql;
};


#endif // SQLCONNECT_H
