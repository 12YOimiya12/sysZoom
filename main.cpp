#include "mainwindow.h"
#include"loading_page.h"
#include <QApplication>
#include"sqlconnect.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //sqlconnect sql1;
    //w.show();
   // loading_page x;
    //x.show();
    return a.exec();
}
