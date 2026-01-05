/********************************************************************************
** Form generated from reading UI file 'add_student.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_STUDENT_H
#define UI_ADD_STUDENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_student
{
public:
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *nameed;
    QSpinBox *age_spin;
    QLineEdit *clased;
    QLineEdit *phoned;
    QLineEdit *wxED;
    QLineEdit *clss;
    QLabel *label_6;
    QLabel *label_8;
    QLineEdit *stuid;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *add_stu;
    QPushButton *reset_btn;
    QPushButton *return_main;

    void setupUi(QDialog *add_student)
    {
        if (add_student->objectName().isEmpty())
            add_student->setObjectName("add_student");
        add_student->setEnabled(true);
        add_student->resize(407, 463);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("accessories-character-map")));
        add_student->setWindowIcon(icon);
        horizontalLayout_3 = new QHBoxLayout(add_student);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        widget_5 = new QWidget(add_student);
        widget_5->setObjectName("widget_5");
        verticalLayout_3 = new QVBoxLayout(widget_5);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget_5);
        label_7->setObjectName("label_7");
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\261\237\350\245\277\346\213\231\346\245\267")});
        font.setPointSize(18);
        label_7->setFont(font);
        label_7->setLayoutDirection(Qt::LeftToRight);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_7);

        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName("widget_3");
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        widget = new QWidget(widget_3);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(20, 0));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\202\240\345\223\211\345\255\227\344\275\223")});
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        label_4->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        nameed = new QLineEdit(widget);
        nameed->setObjectName("nameed");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nameed->sizePolicy().hasHeightForWidth());
        nameed->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, nameed);

        age_spin = new QSpinBox(widget);
        age_spin->setObjectName("age_spin");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(age_spin->sizePolicy().hasHeightForWidth());
        age_spin->setSizePolicy(sizePolicy2);
        age_spin->setMaximum(70);

        formLayout->setWidget(1, QFormLayout::FieldRole, age_spin);

        clased = new QLineEdit(widget);
        clased->setObjectName("clased");
        sizePolicy1.setHeightForWidth(clased->sizePolicy().hasHeightForWidth());
        clased->setSizePolicy(sizePolicy1);

        formLayout->setWidget(3, QFormLayout::FieldRole, clased);

        phoned = new QLineEdit(widget);
        phoned->setObjectName("phoned");
        sizePolicy1.setHeightForWidth(phoned->sizePolicy().hasHeightForWidth());
        phoned->setSizePolicy(sizePolicy1);

        formLayout->setWidget(5, QFormLayout::FieldRole, phoned);

        wxED = new QLineEdit(widget);
        wxED->setObjectName("wxED");
        sizePolicy1.setHeightForWidth(wxED->sizePolicy().hasHeightForWidth());
        wxED->setSizePolicy(sizePolicy1);
        wxED->setLayoutDirection(Qt::LeftToRight);

        formLayout->setWidget(6, QFormLayout::FieldRole, wxED);

        clss = new QLineEdit(widget);
        clss->setObjectName("clss");
        sizePolicy1.setHeightForWidth(clss->sizePolicy().hasHeightForWidth());
        clss->setSizePolicy(sizePolicy1);

        formLayout->setWidget(2, QFormLayout::FieldRole, clss);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        stuid = new QLineEdit(widget);
        stuid->setObjectName("stuid");
        sizePolicy1.setHeightForWidth(stuid->sizePolicy().hasHeightForWidth());
        stuid->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::FieldRole, stuid);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName("widget_2");
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 1, 0, 0);

        horizontalLayout->addWidget(widget_2);


        verticalLayout_3->addWidget(widget_3);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName("widget_4");
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        add_stu = new QPushButton(widget_4);
        add_stu->setObjectName("add_stu");
        add_stu->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(add_stu);

        reset_btn = new QPushButton(widget_4);
        reset_btn->setObjectName("reset_btn");

        horizontalLayout_2->addWidget(reset_btn);

        return_main = new QPushButton(widget_4);
        return_main->setObjectName("return_main");

        horizontalLayout_2->addWidget(return_main);


        verticalLayout_3->addWidget(widget_4);


        horizontalLayout_3->addWidget(widget_5);

        QWidget::setTabOrder(nameed, age_spin);
        QWidget::setTabOrder(age_spin, clss);
        QWidget::setTabOrder(clss, clased);
        QWidget::setTabOrder(clased, stuid);
        QWidget::setTabOrder(stuid, phoned);
        QWidget::setTabOrder(phoned, wxED);
        QWidget::setTabOrder(wxED, add_stu);
        QWidget::setTabOrder(add_stu, reset_btn);
        QWidget::setTabOrder(reset_btn, return_main);

        retranslateUi(add_student);

        QMetaObject::connectSlotsByName(add_student);
    } // setupUi

    void retranslateUi(QDialog *add_student)
    {
        add_student->setWindowTitle(QCoreApplication::translate("add_student", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        label_7->setText(QCoreApplication::translate("add_student", "\346\267\273\345\212\240/\344\277\256\346\224\271\345\212\250\347\211\251\344\277\241\346\201\257", nullptr));
        label_4->setText(QCoreApplication::translate("add_student", "\345\247\223\345\220\215:", nullptr));
        label_3->setText(QCoreApplication::translate("add_student", "\345\271\264\351\276\204:", nullptr));
        label_2->setText(QCoreApplication::translate("add_student", "\345\271\264\347\272\247:", nullptr));
        label->setText(QCoreApplication::translate("add_student", "\347\217\255\347\272\247:", nullptr));
        label_5->setText(QCoreApplication::translate("add_student", "\347\224\265\350\257\235:", nullptr));
        label_6->setText(QCoreApplication::translate("add_student", "\345\276\256\344\277\241:", nullptr));
        label_8->setText(QCoreApplication::translate("add_student", "\345\255\246\345\217\267:", nullptr));
        add_stu->setText(QCoreApplication::translate("add_student", "\347\241\256\350\256\244", nullptr));
        reset_btn->setText(QCoreApplication::translate("add_student", "\351\207\215\347\275\256", nullptr));
        return_main->setText(QCoreApplication::translate("add_student", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_student: public Ui_add_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_STUDENT_H
