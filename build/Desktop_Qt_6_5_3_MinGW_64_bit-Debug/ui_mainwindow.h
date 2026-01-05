/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *mainWindow;
    QHBoxLayout *horizontalLayout;
    QLabel *label_sum;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_5;
    QPushButton *pushButton;
    QWidget *mainWindow_2;
    QHBoxLayout *horizontalLayout_2;
    QTreeWidget *treeWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_pre;
    QHBoxLayout *horizontalLayout_18;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_15;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *findprebtn;
    QLineEdit *preofsearch;
    QLabel *numpre;
    QTableWidget *tableWidget_pre;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *addpreBtn;
    QPushButton *fixpreBtn;
    QPushButton *del_pre_btn;
    QPushButton *clearpreBtn;
    QPushButton *simupreBtn;
    QWidget *page_room;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_11;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *findroombtn;
    QLineEdit *roomofsearch;
    QLabel *numroom;
    QTableWidget *tableWidget_room;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *addroomBtn;
    QPushButton *fixroomBtn;
    QPushButton *del_room_btn;
    QPushButton *clearroomBtn;
    QPushButton *simroomBtn;
    QWidget *page1;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *add_btn;
    QPushButton *fix_button;
    QPushButton *delete_btn;
    QLineEdit *nameline;
    QPushButton *selectButton;
    QTableWidget *tableWidget;
    QWidget *widget;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *simulation;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QWidget *page2;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_8;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *findserbtn;
    QLineEdit *lEtofsearch;
    QLabel *numuser;
    QTableWidget *tableWidget_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *addUserBtn;
    QPushButton *fixUserBtn;
    QPushButton *del_User_btn;
    QPushButton *clearUserBtn;
    QPushButton *simuStuBtn;
    QWidget *page_animals;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_9;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *findanibtn;
    QLineEdit *aniofsearch;
    QLabel *numani;
    QTableWidget *tableWidget_ani;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addaniBtn;
    QPushButton *fixAniBtn;
    QPushButton *del_ani_btn;
    QPushButton *clearaniBtn_;
    QPushButton *simuaniBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1186, 704);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/wall/464.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        mainWindow = new QWidget(centralwidget);
        mainWindow->setObjectName("mainWindow");
        mainWindow->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(mainWindow);
        horizontalLayout->setObjectName("horizontalLayout");
        label_sum = new QLabel(mainWindow);
        label_sum->setObjectName("label_sum");

        horizontalLayout->addWidget(label_sum);

        label_3 = new QLabel(mainWindow);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        label = new QLabel(mainWindow);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(400, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\270\277\351\233\267\346\235\277\344\271\246\347\256\200\344\275\223\357\274\210\345\205\215\350\264\271\345\217\257\345\225\206\347\224\250\357\274\211")});
        font.setPointSize(17);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        label_5 = new QLabel(mainWindow);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        pushButton = new QPushButton(mainWindow);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addWidget(mainWindow);

        mainWindow_2 = new QWidget(centralwidget);
        mainWindow_2->setObjectName("mainWindow_2");
        horizontalLayout_2 = new QHBoxLayout(mainWindow_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        treeWidget = new QTreeWidget(mainWindow_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(50);
        sizePolicy2.setVerticalStretch(80);
        sizePolicy2.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy2);
        treeWidget->setMinimumSize(QSize(10, 0));
        treeWidget->setStyleSheet(QString::fromUtf8(""));
        treeWidget->header()->setVisible(false);

        horizontalLayout_2->addWidget(treeWidget, 0, Qt::AlignHCenter);

        stackedWidget = new QStackedWidget(mainWindow_2);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setEnabled(true);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setMinimumSize(QSize(917, 0));
        stackedWidget->setMaximumSize(QSize(16777215, 16777215));
        stackedWidget->setBaseSize(QSize(-22046, 0));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page_pre = new QWidget();
        page_pre->setObjectName("page_pre");
        horizontalLayout_18 = new QHBoxLayout(page_pre);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        widget_13 = new QWidget(page_pre);
        widget_13->setObjectName("widget_13");
        horizontalLayout_15 = new QHBoxLayout(widget_13);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        widget_14 = new QWidget(widget_13);
        widget_14->setObjectName("widget_14");
        horizontalLayout_16 = new QHBoxLayout(widget_14);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        findprebtn = new QPushButton(widget_14);
        findprebtn->setObjectName("findprebtn");
        sizePolicy.setHeightForWidth(findprebtn->sizePolicy().hasHeightForWidth());
        findprebtn->setSizePolicy(sizePolicy);

        horizontalLayout_16->addWidget(findprebtn);

        preofsearch = new QLineEdit(widget_14);
        preofsearch->setObjectName("preofsearch");
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(preofsearch->sizePolicy().hasHeightForWidth());
        preofsearch->setSizePolicy(sizePolicy3);
        preofsearch->setMinimumSize(QSize(0, 6));

        horizontalLayout_16->addWidget(preofsearch);

        numpre = new QLabel(widget_14);
        numpre->setObjectName("numpre");
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(numpre->sizePolicy().hasHeightForWidth());
        numpre->setSizePolicy(sizePolicy4);

        horizontalLayout_16->addWidget(numpre);


        horizontalLayout_15->addWidget(widget_14);


        verticalLayout_7->addWidget(widget_13);

        tableWidget_pre = new QTableWidget(page_pre);
        tableWidget_pre->setObjectName("tableWidget_pre");

        verticalLayout_7->addWidget(tableWidget_pre);

        widget_15 = new QWidget(page_pre);
        widget_15->setObjectName("widget_15");
        horizontalLayout_17 = new QHBoxLayout(widget_15);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        addpreBtn = new QPushButton(widget_15);
        addpreBtn->setObjectName("addpreBtn");

        horizontalLayout_17->addWidget(addpreBtn);

        fixpreBtn = new QPushButton(widget_15);
        fixpreBtn->setObjectName("fixpreBtn");

        horizontalLayout_17->addWidget(fixpreBtn);

        del_pre_btn = new QPushButton(widget_15);
        del_pre_btn->setObjectName("del_pre_btn");

        horizontalLayout_17->addWidget(del_pre_btn);

        clearpreBtn = new QPushButton(widget_15);
        clearpreBtn->setObjectName("clearpreBtn");

        horizontalLayout_17->addWidget(clearpreBtn);

        simupreBtn = new QPushButton(widget_15);
        simupreBtn->setObjectName("simupreBtn");

        horizontalLayout_17->addWidget(simupreBtn);


        verticalLayout_7->addWidget(widget_15);


        horizontalLayout_18->addLayout(verticalLayout_7);

        stackedWidget->addWidget(page_pre);
        page_room = new QWidget();
        page_room->setObjectName("page_room");
        horizontalLayout_14 = new QHBoxLayout(page_room);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        widget_10 = new QWidget(page_room);
        widget_10->setObjectName("widget_10");
        horizontalLayout_11 = new QHBoxLayout(widget_10);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        widget_11 = new QWidget(widget_10);
        widget_11->setObjectName("widget_11");
        horizontalLayout_12 = new QHBoxLayout(widget_11);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        findroombtn = new QPushButton(widget_11);
        findroombtn->setObjectName("findroombtn");
        sizePolicy.setHeightForWidth(findroombtn->sizePolicy().hasHeightForWidth());
        findroombtn->setSizePolicy(sizePolicy);

        horizontalLayout_12->addWidget(findroombtn);

        roomofsearch = new QLineEdit(widget_11);
        roomofsearch->setObjectName("roomofsearch");
        sizePolicy3.setHeightForWidth(roomofsearch->sizePolicy().hasHeightForWidth());
        roomofsearch->setSizePolicy(sizePolicy3);
        roomofsearch->setMinimumSize(QSize(0, 6));

        horizontalLayout_12->addWidget(roomofsearch);

        numroom = new QLabel(widget_11);
        numroom->setObjectName("numroom");
        sizePolicy4.setHeightForWidth(numroom->sizePolicy().hasHeightForWidth());
        numroom->setSizePolicy(sizePolicy4);

        horizontalLayout_12->addWidget(numroom);


        horizontalLayout_11->addWidget(widget_11);


        verticalLayout_6->addWidget(widget_10);

        tableWidget_room = new QTableWidget(page_room);
        tableWidget_room->setObjectName("tableWidget_room");

        verticalLayout_6->addWidget(tableWidget_room);

        widget_12 = new QWidget(page_room);
        widget_12->setObjectName("widget_12");
        horizontalLayout_13 = new QHBoxLayout(widget_12);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        addroomBtn = new QPushButton(widget_12);
        addroomBtn->setObjectName("addroomBtn");

        horizontalLayout_13->addWidget(addroomBtn);

        fixroomBtn = new QPushButton(widget_12);
        fixroomBtn->setObjectName("fixroomBtn");

        horizontalLayout_13->addWidget(fixroomBtn);

        del_room_btn = new QPushButton(widget_12);
        del_room_btn->setObjectName("del_room_btn");

        horizontalLayout_13->addWidget(del_room_btn);

        clearroomBtn = new QPushButton(widget_12);
        clearroomBtn->setObjectName("clearroomBtn");

        horizontalLayout_13->addWidget(clearroomBtn);

        simroomBtn = new QPushButton(widget_12);
        simroomBtn->setObjectName("simroomBtn");

        horizontalLayout_13->addWidget(simroomBtn);


        verticalLayout_6->addWidget(widget_12);


        horizontalLayout_14->addLayout(verticalLayout_6);

        stackedWidget->addWidget(page_room);
        page1 = new QWidget();
        page1->setObjectName("page1");
        verticalLayout_2 = new QVBoxLayout(page1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_3 = new QWidget(page1);
        widget_3->setObjectName("widget_3");
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        add_btn = new QPushButton(widget_3);
        add_btn->setObjectName("add_btn");

        horizontalLayout_3->addWidget(add_btn);

        fix_button = new QPushButton(widget_3);
        fix_button->setObjectName("fix_button");

        horizontalLayout_3->addWidget(fix_button);

        delete_btn = new QPushButton(widget_3);
        delete_btn->setObjectName("delete_btn");

        horizontalLayout_3->addWidget(delete_btn);

        nameline = new QLineEdit(widget_3);
        nameline->setObjectName("nameline");

        horizontalLayout_3->addWidget(nameline);

        selectButton = new QPushButton(widget_3);
        selectButton->setObjectName("selectButton");

        horizontalLayout_3->addWidget(selectButton);


        verticalLayout_2->addWidget(widget_3);

        tableWidget = new QTableWidget(page1);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setAutoScroll(true);
        tableWidget->setTabKeyNavigation(true);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tableWidget);

        widget = new QWidget(page1);
        widget->setObjectName("widget");

        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(page1);
        widget_2->setObjectName("widget_2");
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        simulation = new QPushButton(widget_2);
        simulation->setObjectName("simulation");

        horizontalLayout_4->addWidget(simulation);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_4->addWidget(pushButton_2);


        verticalLayout_2->addWidget(widget_2);

        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName("page2");
        verticalLayout_3 = new QVBoxLayout(page2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget_7 = new QWidget(page2);
        widget_7->setObjectName("widget_7");
        horizontalLayout_8 = new QHBoxLayout(widget_7);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(widget_7);
        widget_5->setObjectName("widget_5");
        horizontalLayout_6 = new QHBoxLayout(widget_5);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        findserbtn = new QPushButton(widget_5);
        findserbtn->setObjectName("findserbtn");
        sizePolicy.setHeightForWidth(findserbtn->sizePolicy().hasHeightForWidth());
        findserbtn->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(findserbtn);

        lEtofsearch = new QLineEdit(widget_5);
        lEtofsearch->setObjectName("lEtofsearch");
        sizePolicy3.setHeightForWidth(lEtofsearch->sizePolicy().hasHeightForWidth());
        lEtofsearch->setSizePolicy(sizePolicy3);
        lEtofsearch->setMinimumSize(QSize(0, 6));

        horizontalLayout_6->addWidget(lEtofsearch);

        numuser = new QLabel(widget_5);
        numuser->setObjectName("numuser");
        sizePolicy4.setHeightForWidth(numuser->sizePolicy().hasHeightForWidth());
        numuser->setSizePolicy(sizePolicy4);

        horizontalLayout_6->addWidget(numuser);


        horizontalLayout_8->addWidget(widget_5);


        verticalLayout_3->addWidget(widget_7);

        tableWidget_2 = new QTableWidget(page2);
        tableWidget_2->setObjectName("tableWidget_2");

        verticalLayout_3->addWidget(tableWidget_2);

        widget_4 = new QWidget(page2);
        widget_4->setObjectName("widget_4");
        horizontalLayout_5 = new QHBoxLayout(widget_4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        addUserBtn = new QPushButton(widget_4);
        addUserBtn->setObjectName("addUserBtn");

        horizontalLayout_5->addWidget(addUserBtn);

        fixUserBtn = new QPushButton(widget_4);
        fixUserBtn->setObjectName("fixUserBtn");

        horizontalLayout_5->addWidget(fixUserBtn);

        del_User_btn = new QPushButton(widget_4);
        del_User_btn->setObjectName("del_User_btn");

        horizontalLayout_5->addWidget(del_User_btn);

        clearUserBtn = new QPushButton(widget_4);
        clearUserBtn->setObjectName("clearUserBtn");

        horizontalLayout_5->addWidget(clearUserBtn);

        simuStuBtn = new QPushButton(widget_4);
        simuStuBtn->setObjectName("simuStuBtn");

        horizontalLayout_5->addWidget(simuStuBtn);


        verticalLayout_3->addWidget(widget_4);

        stackedWidget->addWidget(page2);
        page_animals = new QWidget();
        page_animals->setObjectName("page_animals");
        verticalLayout_5 = new QVBoxLayout(page_animals);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        widget_8 = new QWidget(page_animals);
        widget_8->setObjectName("widget_8");
        horizontalLayout_9 = new QHBoxLayout(widget_8);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        widget_9 = new QWidget(widget_8);
        widget_9->setObjectName("widget_9");
        horizontalLayout_10 = new QHBoxLayout(widget_9);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        findanibtn = new QPushButton(widget_9);
        findanibtn->setObjectName("findanibtn");
        sizePolicy.setHeightForWidth(findanibtn->sizePolicy().hasHeightForWidth());
        findanibtn->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(findanibtn);

        aniofsearch = new QLineEdit(widget_9);
        aniofsearch->setObjectName("aniofsearch");
        sizePolicy3.setHeightForWidth(aniofsearch->sizePolicy().hasHeightForWidth());
        aniofsearch->setSizePolicy(sizePolicy3);
        aniofsearch->setMinimumSize(QSize(0, 6));

        horizontalLayout_10->addWidget(aniofsearch);

        numani = new QLabel(widget_9);
        numani->setObjectName("numani");
        sizePolicy4.setHeightForWidth(numani->sizePolicy().hasHeightForWidth());
        numani->setSizePolicy(sizePolicy4);

        horizontalLayout_10->addWidget(numani);


        horizontalLayout_9->addWidget(widget_9);


        verticalLayout_4->addWidget(widget_8);

        tableWidget_ani = new QTableWidget(page_animals);
        tableWidget_ani->setObjectName("tableWidget_ani");

        verticalLayout_4->addWidget(tableWidget_ani);

        widget_6 = new QWidget(page_animals);
        widget_6->setObjectName("widget_6");
        horizontalLayout_7 = new QHBoxLayout(widget_6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        addaniBtn = new QPushButton(widget_6);
        addaniBtn->setObjectName("addaniBtn");

        horizontalLayout_7->addWidget(addaniBtn);

        fixAniBtn = new QPushButton(widget_6);
        fixAniBtn->setObjectName("fixAniBtn");

        horizontalLayout_7->addWidget(fixAniBtn);

        del_ani_btn = new QPushButton(widget_6);
        del_ani_btn->setObjectName("del_ani_btn");

        horizontalLayout_7->addWidget(del_ani_btn);

        clearaniBtn_ = new QPushButton(widget_6);
        clearaniBtn_->setObjectName("clearaniBtn_");

        horizontalLayout_7->addWidget(clearaniBtn_);

        simuaniBtn = new QPushButton(widget_6);
        simuaniBtn->setObjectName("simuaniBtn");

        horizontalLayout_7->addWidget(simuaniBtn);


        verticalLayout_4->addWidget(widget_6);


        verticalLayout_5->addLayout(verticalLayout_4);

        stackedWidget->addWidget(page_animals);

        horizontalLayout_2->addWidget(stackedWidget);


        verticalLayout->addWidget(mainWindow_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1186, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\212\250\347\211\251\345\233\255\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QCoreApplication::translate("MainWindow", "\345\212\250\347\211\251\345\233\255\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#endif // QT_CONFIG(tooltip)
        label_sum->setText(QString());
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "                                              \345\212\250\347\211\251\345\233\255\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_5->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        findprebtn->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
        numpre->setText(QCoreApplication::translate("MainWindow", "\345\261\225\345\217\260\346\225\260\351\207\217\357\274\232", nullptr));
        addpreBtn->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        fixpreBtn->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        del_pre_btn->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        clearpreBtn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        simupreBtn->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        findroombtn->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
        numroom->setText(QCoreApplication::translate("MainWindow", "\351\245\262\345\205\273\346\211\200\346\225\260\351\207\217\357\274\232", nullptr));
        addroomBtn->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        fixroomBtn->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        del_room_btn->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        clearroomBtn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        simroomBtn->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        add_btn->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        fix_button->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        delete_btn->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        selectButton->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
        simulation->setText(QCoreApplication::translate("MainWindow", "\346\250\241\346\213\237", nullptr));
        label_4->setText(QString());
        label_2->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
        findserbtn->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
        numuser->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230\346\225\260\351\207\217\357\274\232", nullptr));
        addUserBtn->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        fixUserBtn->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        del_User_btn->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        clearUserBtn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        simuStuBtn->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        findanibtn->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
        numani->setText(QCoreApplication::translate("MainWindow", "\345\212\250\347\211\251\346\225\260\351\207\217\357\274\232", nullptr));
        addaniBtn->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        fixAniBtn->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        del_ani_btn->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        clearaniBtn_->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        simuaniBtn->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
