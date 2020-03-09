#include "Wdiget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Wdiget w;
    w.show();
    return a.exec();
}
