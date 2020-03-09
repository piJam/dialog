#ifndef _WDIGET_H_
#define _WDIGET_H_

#include <QMainWindow>
#include <QPushButton>
#include "QLogindialog.h"

class Wdiget : public QMainWindow
{
    Q_OBJECT

private:
    QPushButton btnShow;
private slots:
    void Btnclicked();

public:
    Wdiget(QWidget *parent = nullptr);
    ~Wdiget();
};
#endif // WDIGET_H
