#ifndef LOADING_PAGE_H
#define LOADING_PAGE_H
#include"QKeyEvent"
#include <QWidget>
#include "sqlconnect.h"
namespace Ui {
class centerWidget;
}

class loading_page : public QWidget
{
    Q_OBJECT

public:
    explicit loading_page(QWidget *parent = nullptr);
    void keyPressEvent(QKeyEvent *event);

    ~loading_page();

private slots:
    void on_pushButton_clicked();

    void on_loadings_clicked();
signals:
    void send_sucessed();

private:
    Ui::centerWidget *ui;
    sqlconnect *sqls;
};

#endif // LOADING_PAGE_H
