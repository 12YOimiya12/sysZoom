/********************************************************************************
** Form generated from reading UI file 'loading_page.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADING_PAGE_H
#define UI_LOADING_PAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_centerWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QWidget *customWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *pwdinput;
    QLineEdit *naminput;
    QWidget *widgecustomWidgett_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *loadings;
    QPushButton *pushButton;

    void setupUi(QWidget *centerWidget)
    {
        if (centerWidget->objectName().isEmpty())
            centerWidget->setObjectName("centerWidget");
        centerWidget->resize(549, 396);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/wall/22.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        centerWidget->setWindowIcon(icon);
        centerWidget->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-radius: 5px;\n"
"background: rgb(187, 212, 238);"));
        verticalLayout_2 = new QVBoxLayout(centerWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(centerWidget);
        label_3->setObjectName("label_3");
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\261\237\350\245\277\346\213\231\346\245\267")});
        font.setPointSize(36);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        customWidget = new QWidget(centerWidget);
        customWidget->setObjectName("customWidget");
        gridLayout = new QGridLayout(customWidget);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(customWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(customWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        pwdinput = new QLineEdit(customWidget);
        pwdinput->setObjectName("pwdinput");
        pwdinput->setFont(font1);
        pwdinput->setMaxLength(114);
        pwdinput->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(pwdinput, 1, 1, 1, 1);

        naminput = new QLineEdit(customWidget);
        naminput->setObjectName("naminput");
        naminput->setFont(font1);
        naminput->setMaxLength(114);

        gridLayout->addWidget(naminput, 0, 1, 1, 1);


        verticalLayout->addWidget(customWidget);

        widgecustomWidgett_2 = new QWidget(centerWidget);
        widgecustomWidgett_2->setObjectName("widgecustomWidgett_2");
        horizontalLayout = new QHBoxLayout(widgecustomWidgett_2);
        horizontalLayout->setObjectName("horizontalLayout");
        loadings = new QPushButton(widgecustomWidgett_2);
        loadings->setObjectName("loadings");
        loadings->setMinimumSize(QSize(0, 70));
        loadings->setFont(font1);

        horizontalLayout->addWidget(loadings);

        pushButton = new QPushButton(widgecustomWidgett_2);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(90);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(0, 70));
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addWidget(widgecustomWidgett_2);


        verticalLayout_2->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(label_3);
        label->setBuddy(pwdinput);
        label_2->setBuddy(naminput);
#endif // QT_CONFIG(shortcut)

        retranslateUi(centerWidget);

        QMetaObject::connectSlotsByName(centerWidget);
    } // setupUi

    void retranslateUi(QWidget *centerWidget)
    {
        centerWidget->setWindowTitle(QCoreApplication::translate("centerWidget", "loading_pages", nullptr));
        label_3->setText(QCoreApplication::translate("centerWidget", "\345\212\250\347\211\251\345\233\255\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("centerWidget", "\345\257\206\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("centerWidget", "\350\264\246\345\217\267", nullptr));
        pwdinput->setPlaceholderText(QCoreApplication::translate("centerWidget", "\350\257\267\350\276\223\345\205\245", nullptr));
        naminput->setPlaceholderText(QCoreApplication::translate("centerWidget", "\350\257\267\350\276\223\345\205\245\357\274\232", nullptr));
        loadings->setText(QCoreApplication::translate("centerWidget", "\347\231\273\345\275\225", nullptr));
        pushButton->setText(QCoreApplication::translate("centerWidget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class centerWidget: public Ui_centerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADING_PAGE_H
