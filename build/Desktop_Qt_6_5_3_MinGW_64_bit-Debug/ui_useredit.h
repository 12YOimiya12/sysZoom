/********************************************************************************
** Form generated from reading UI file 'useredit.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USEREDIT_H
#define UI_USEREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserEdit
{
public:
    QGridLayout *gridLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *page_user;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *lineEditname;
    QLabel *label_2;
    QLineEdit *lineEditauth;
    QLabel *label_3;
    QLineEdit *lineEditpwd;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *comfirmBtn_2;
    QPushButton *resetBtn;
    QPushButton *exitBtn;
    QWidget *page_pre;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_20;
    QWidget *widget_11;
    QGridLayout *gridLayout_6;
    QLabel *label_21;
    QLineEdit *lineEditprenum;
    QLabel *label_22;
    QLineEdit *lineEditauth_4;
    QLabel *label_23;
    QLineEdit *lineEditpreani;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *comfirmBtn_pre;
    QPushButton *resetBtn_pre;
    QPushButton *exitBtn_4;
    QWidget *page_room;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_16;
    QWidget *widget_8;
    QGridLayout *gridLayout_5;
    QLabel *label_19;
    QLineEdit *lineEditarea;
    QLineEdit *lineEditkind;
    QLabel *label_18;
    QLineEdit *lineEditroomnum;
    QLabel *label_17;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *comfirmBtn_room;
    QPushButton *resetBtn_3;
    QPushButton *exitBtn_3;
    QWidget *page_ani;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QWidget *widget_5;
    QGridLayout *gridLayout_2;
    QLineEdit *gendet_edit;
    QLabel *label_7;
    QLineEdit *num_Edit;
    QLineEdit *name_edit;
    QLabel *label_8;
    QLabel *label_14;
    QLabel *label_9;
    QLineEdit *time_edit;
    QLabel *label_6;
    QLineEdit *numsedit;
    QLabel *label_15;
    QLineEdit *lineEditfood;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *comfirmBtn_ani;
    QPushButton *resetBtn_ani;
    QPushButton *exitBtn_2;

    void setupUi(QDialog *UserEdit)
    {
        if (UserEdit->objectName().isEmpty())
            UserEdit->setObjectName("UserEdit");
        UserEdit->resize(486, 517);
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\261\237\350\245\277\346\213\231\346\245\267")});
        font.setBold(false);
        UserEdit->setFont(font);
        gridLayout_4 = new QGridLayout(UserEdit);
        gridLayout_4->setObjectName("gridLayout_4");
        stackedWidget = new QStackedWidget(UserEdit);
        stackedWidget->setObjectName("stackedWidget");
        page_user = new QWidget();
        page_user->setObjectName("page_user");
        horizontalLayout_3 = new QHBoxLayout(page_user);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        widget_3 = new QWidget(page_user);
        widget_3->setObjectName("widget_3");
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(widget_3);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\234\252\346\235\245\350\215\247\351\273\221 Normal Medium")});
        font1.setPointSize(20);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        widget = new QWidget(widget_3);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        lineEditname = new QLineEdit(widget);
        lineEditname->setObjectName("lineEditname");

        gridLayout->addWidget(lineEditname, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEditauth = new QLineEdit(widget);
        lineEditauth->setObjectName("lineEditauth");

        gridLayout->addWidget(lineEditauth, 2, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEditpwd = new QLineEdit(widget);
        lineEditpwd->setObjectName("lineEditpwd");

        gridLayout->addWidget(lineEditpwd, 1, 1, 1, 1);


        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        comfirmBtn_2 = new QPushButton(widget_2);
        comfirmBtn_2->setObjectName("comfirmBtn_2");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comfirmBtn_2->sizePolicy().hasHeightForWidth());
        comfirmBtn_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comfirmBtn_2);

        resetBtn = new QPushButton(widget_2);
        resetBtn->setObjectName("resetBtn");
        sizePolicy.setHeightForWidth(resetBtn->sizePolicy().hasHeightForWidth());
        resetBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(resetBtn);

        exitBtn = new QPushButton(widget_2);
        exitBtn->setObjectName("exitBtn");
        sizePolicy.setHeightForWidth(exitBtn->sizePolicy().hasHeightForWidth());
        exitBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(exitBtn);


        verticalLayout_2->addWidget(widget_2);


        horizontalLayout_3->addWidget(widget_3);

        stackedWidget->addWidget(page_user);
        page_pre = new QWidget();
        page_pre->setObjectName("page_pre");
        verticalLayout_6 = new QVBoxLayout(page_pre);
        verticalLayout_6->setObjectName("verticalLayout_6");
        widget_10 = new QWidget(page_pre);
        widget_10->setObjectName("widget_10");
        verticalLayout_5 = new QVBoxLayout(widget_10);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_20 = new QLabel(widget_10);
        label_20->setObjectName("label_20");
        label_20->setFont(font1);
        label_20->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_20);

        widget_11 = new QWidget(widget_10);
        widget_11->setObjectName("widget_11");
        gridLayout_6 = new QGridLayout(widget_11);
        gridLayout_6->setObjectName("gridLayout_6");
        label_21 = new QLabel(widget_11);
        label_21->setObjectName("label_21");

        gridLayout_6->addWidget(label_21, 2, 0, 1, 1);

        lineEditprenum = new QLineEdit(widget_11);
        lineEditprenum->setObjectName("lineEditprenum");

        gridLayout_6->addWidget(lineEditprenum, 0, 1, 1, 1);

        label_22 = new QLabel(widget_11);
        label_22->setObjectName("label_22");

        gridLayout_6->addWidget(label_22, 0, 0, 1, 1);

        lineEditauth_4 = new QLineEdit(widget_11);
        lineEditauth_4->setObjectName("lineEditauth_4");

        gridLayout_6->addWidget(lineEditauth_4, 2, 1, 1, 1);

        label_23 = new QLabel(widget_11);
        label_23->setObjectName("label_23");

        gridLayout_6->addWidget(label_23, 1, 0, 1, 1);

        lineEditpreani = new QLineEdit(widget_11);
        lineEditpreani->setObjectName("lineEditpreani");

        gridLayout_6->addWidget(lineEditpreani, 1, 1, 1, 1);


        verticalLayout_5->addWidget(widget_11);

        widget_12 = new QWidget(widget_10);
        widget_12->setObjectName("widget_12");
        horizontalLayout_5 = new QHBoxLayout(widget_12);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        comfirmBtn_pre = new QPushButton(widget_12);
        comfirmBtn_pre->setObjectName("comfirmBtn_pre");
        sizePolicy.setHeightForWidth(comfirmBtn_pre->sizePolicy().hasHeightForWidth());
        comfirmBtn_pre->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(comfirmBtn_pre);

        resetBtn_pre = new QPushButton(widget_12);
        resetBtn_pre->setObjectName("resetBtn_pre");
        sizePolicy.setHeightForWidth(resetBtn_pre->sizePolicy().hasHeightForWidth());
        resetBtn_pre->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(resetBtn_pre);

        exitBtn_4 = new QPushButton(widget_12);
        exitBtn_4->setObjectName("exitBtn_4");
        sizePolicy.setHeightForWidth(exitBtn_4->sizePolicy().hasHeightForWidth());
        exitBtn_4->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(exitBtn_4);


        verticalLayout_5->addWidget(widget_12);


        verticalLayout_6->addWidget(widget_10);

        stackedWidget->addWidget(page_pre);
        page_room = new QWidget();
        page_room->setObjectName("page_room");
        verticalLayout_4 = new QVBoxLayout(page_room);
        verticalLayout_4->setObjectName("verticalLayout_4");
        widget_7 = new QWidget(page_room);
        widget_7->setObjectName("widget_7");
        verticalLayout_3 = new QVBoxLayout(widget_7);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_16 = new QLabel(widget_7);
        label_16->setObjectName("label_16");
        label_16->setFont(font1);
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_16);

        widget_8 = new QWidget(widget_7);
        widget_8->setObjectName("widget_8");
        gridLayout_5 = new QGridLayout(widget_8);
        gridLayout_5->setObjectName("gridLayout_5");
        label_19 = new QLabel(widget_8);
        label_19->setObjectName("label_19");

        gridLayout_5->addWidget(label_19, 2, 0, 1, 1);

        lineEditarea = new QLineEdit(widget_8);
        lineEditarea->setObjectName("lineEditarea");

        gridLayout_5->addWidget(lineEditarea, 2, 1, 1, 1);

        lineEditkind = new QLineEdit(widget_8);
        lineEditkind->setObjectName("lineEditkind");

        gridLayout_5->addWidget(lineEditkind, 1, 1, 1, 1);

        label_18 = new QLabel(widget_8);
        label_18->setObjectName("label_18");

        gridLayout_5->addWidget(label_18, 1, 0, 1, 1);

        lineEditroomnum = new QLineEdit(widget_8);
        lineEditroomnum->setObjectName("lineEditroomnum");

        gridLayout_5->addWidget(lineEditroomnum, 0, 1, 1, 1);

        label_17 = new QLabel(widget_8);
        label_17->setObjectName("label_17");

        gridLayout_5->addWidget(label_17, 0, 0, 1, 1);


        verticalLayout_3->addWidget(widget_8);

        widget_9 = new QWidget(widget_7);
        widget_9->setObjectName("widget_9");
        horizontalLayout_4 = new QHBoxLayout(widget_9);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        comfirmBtn_room = new QPushButton(widget_9);
        comfirmBtn_room->setObjectName("comfirmBtn_room");
        sizePolicy.setHeightForWidth(comfirmBtn_room->sizePolicy().hasHeightForWidth());
        comfirmBtn_room->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(comfirmBtn_room);

        resetBtn_3 = new QPushButton(widget_9);
        resetBtn_3->setObjectName("resetBtn_3");
        sizePolicy.setHeightForWidth(resetBtn_3->sizePolicy().hasHeightForWidth());
        resetBtn_3->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(resetBtn_3);

        exitBtn_3 = new QPushButton(widget_9);
        exitBtn_3->setObjectName("exitBtn_3");
        sizePolicy.setHeightForWidth(exitBtn_3->sizePolicy().hasHeightForWidth());
        exitBtn_3->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(exitBtn_3);


        verticalLayout_3->addWidget(widget_9);


        verticalLayout_4->addWidget(widget_7);

        stackedWidget->addWidget(page_room);
        page_ani = new QWidget();
        page_ani->setObjectName("page_ani");
        widget_4 = new QWidget(page_ani);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(10, 20, 441, 441));
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setObjectName("verticalLayout");
        label_5 = new QLabel(widget_4);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        gridLayout_2 = new QGridLayout(widget_5);
        gridLayout_2->setObjectName("gridLayout_2");
        gendet_edit = new QLineEdit(widget_5);
        gendet_edit->setObjectName("gendet_edit");

        gridLayout_2->addWidget(gendet_edit, 3, 1, 1, 1);

        label_7 = new QLabel(widget_5);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        num_Edit = new QLineEdit(widget_5);
        num_Edit->setObjectName("num_Edit");

        gridLayout_2->addWidget(num_Edit, 0, 1, 1, 1);

        name_edit = new QLineEdit(widget_5);
        name_edit->setObjectName("name_edit");

        gridLayout_2->addWidget(name_edit, 1, 1, 1, 1);

        label_8 = new QLabel(widget_5);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        label_14 = new QLabel(widget_5);
        label_14->setObjectName("label_14");

        gridLayout_2->addWidget(label_14, 4, 0, 1, 1);

        label_9 = new QLabel(widget_5);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 3, 0, 1, 1);

        time_edit = new QLineEdit(widget_5);
        time_edit->setObjectName("time_edit");

        gridLayout_2->addWidget(time_edit, 2, 1, 1, 1);

        label_6 = new QLabel(widget_5);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        numsedit = new QLineEdit(widget_5);
        numsedit->setObjectName("numsedit");

        gridLayout_2->addWidget(numsedit, 4, 1, 1, 1);

        label_15 = new QLabel(widget_5);
        label_15->setObjectName("label_15");

        gridLayout_2->addWidget(label_15, 5, 0, 1, 1);

        lineEditfood = new QLineEdit(widget_5);
        lineEditfood->setObjectName("lineEditfood");

        gridLayout_2->addWidget(lineEditfood, 5, 1, 1, 1);


        verticalLayout->addWidget(widget_5);

        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName("widget_6");
        horizontalLayout_2 = new QHBoxLayout(widget_6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        comfirmBtn_ani = new QPushButton(widget_6);
        comfirmBtn_ani->setObjectName("comfirmBtn_ani");
        sizePolicy.setHeightForWidth(comfirmBtn_ani->sizePolicy().hasHeightForWidth());
        comfirmBtn_ani->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(comfirmBtn_ani);

        resetBtn_ani = new QPushButton(widget_6);
        resetBtn_ani->setObjectName("resetBtn_ani");
        sizePolicy.setHeightForWidth(resetBtn_ani->sizePolicy().hasHeightForWidth());
        resetBtn_ani->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(resetBtn_ani);

        exitBtn_2 = new QPushButton(widget_6);
        exitBtn_2->setObjectName("exitBtn_2");
        sizePolicy.setHeightForWidth(exitBtn_2->sizePolicy().hasHeightForWidth());
        exitBtn_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(exitBtn_2);


        verticalLayout->addWidget(widget_6);

        stackedWidget->addWidget(page_ani);

        gridLayout_4->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(UserEdit);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(UserEdit);
    } // setupUi

    void retranslateUi(QDialog *UserEdit)
    {
        UserEdit->setWindowTitle(QCoreApplication::translate("UserEdit", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UserEdit", "\347\274\226\350\276\221\347\256\241\347\220\206\345\221\230\344\277\241\346\201\257", nullptr));
        label_4->setText(QCoreApplication::translate("UserEdit", "\346\235\203\351\231\220", nullptr));
        label_2->setText(QCoreApplication::translate("UserEdit", "\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("UserEdit", "\345\257\206\347\240\201", nullptr));
        comfirmBtn_2->setText(QCoreApplication::translate("UserEdit", "\347\241\256\350\256\244", nullptr));
        resetBtn->setText(QCoreApplication::translate("UserEdit", "\351\207\215\347\275\256", nullptr));
        exitBtn->setText(QCoreApplication::translate("UserEdit", "\351\200\200\345\207\272", nullptr));
        label_20->setText(QCoreApplication::translate("UserEdit", "\347\274\226\350\276\221\345\261\225\345\217\260\344\277\241\346\201\257", nullptr));
        label_21->setText(QCoreApplication::translate("UserEdit", "\345\261\225\345\207\272\346\225\260\351\207\217", nullptr));
        label_22->setText(QCoreApplication::translate("UserEdit", "\345\261\225\345\214\272\344\273\243\345\217\267", nullptr));
        label_23->setText(QCoreApplication::translate("UserEdit", "\345\261\225\345\207\272\345\212\250\347\211\251", nullptr));
        comfirmBtn_pre->setText(QCoreApplication::translate("UserEdit", "\347\241\256\350\256\244", nullptr));
        resetBtn_pre->setText(QCoreApplication::translate("UserEdit", "\351\207\215\347\275\256", nullptr));
        exitBtn_4->setText(QCoreApplication::translate("UserEdit", "\351\200\200\345\207\272", nullptr));
        label_16->setText(QCoreApplication::translate("UserEdit", "\347\274\226\350\276\221\351\245\262\345\205\273\346\211\200\344\277\241\346\201\257", nullptr));
        label_19->setText(QCoreApplication::translate("UserEdit", "\351\235\242\347\247\257", nullptr));
        label_18->setText(QCoreApplication::translate("UserEdit", "\347\247\215\347\261\273", nullptr));
        label_17->setText(QCoreApplication::translate("UserEdit", "\344\273\243\345\217\267", nullptr));
        comfirmBtn_room->setText(QCoreApplication::translate("UserEdit", "\347\241\256\350\256\244", nullptr));
        resetBtn_3->setText(QCoreApplication::translate("UserEdit", "\351\207\215\347\275\256", nullptr));
        exitBtn_3->setText(QCoreApplication::translate("UserEdit", "\351\200\200\345\207\272", nullptr));
        label_5->setText(QCoreApplication::translate("UserEdit", "\347\274\226\350\276\221\345\212\250\347\211\251\344\277\241\346\201\257", nullptr));
        label_7->setText(QCoreApplication::translate("UserEdit", "\345\212\250\347\211\251\344\273\243\345\217\267", nullptr));
        label_8->setText(QCoreApplication::translate("UserEdit", "\345\220\215\347\247\260", nullptr));
        label_14->setText(QCoreApplication::translate("UserEdit", "\346\225\260\351\207\217", nullptr));
        label_9->setText(QCoreApplication::translate("UserEdit", "\351\233\214\351\233\204", nullptr));
        label_6->setText(QCoreApplication::translate("UserEdit", "\345\226\202\345\205\273\346\227\266\351\227\264", nullptr));
        label_15->setText(QCoreApplication::translate("UserEdit", "\351\243\237\347\211\251", nullptr));
        comfirmBtn_ani->setText(QCoreApplication::translate("UserEdit", "\347\241\256\350\256\244", nullptr));
        resetBtn_ani->setText(QCoreApplication::translate("UserEdit", "\351\207\215\347\275\256", nullptr));
        exitBtn_2->setText(QCoreApplication::translate("UserEdit", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserEdit: public Ui_UserEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEREDIT_H
