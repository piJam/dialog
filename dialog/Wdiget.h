#ifndef _WDIGET_H_
#define _WDIGET_H_

#include <QMainWindow>

class Wdiget : public QMainWindow
{
    Q_OBJECT

public:
    Wdiget(QWidget *parent = nullptr);
    ~Wdiget();
};
#endif // WDIGET_H
