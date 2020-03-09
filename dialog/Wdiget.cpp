#include "Wdiget.h"
#include <QDebug>

Wdiget::Wdiget(QWidget *parent)
    : QMainWindow(parent), btnShow(this)
{
    btnShow.setText("Login");

    connect(&btnShow, SIGNAL(clicked()), this, SLOT(Btnclicked()));
}

void Wdiget::Btnclicked()
{
    QLoginDialog dialog;

    if( dialog.exec() == QDialog::Accepted )
    {
        qDebug() << "ok";
    }

}

Wdiget::~Wdiget()
{
}

