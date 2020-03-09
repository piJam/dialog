#ifndef QLOGINDIALOG_H
#define QLOGINDIALOG_H
#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>

class QLoginDialog : public QDialog
{
private:
    QLabel UserLabel;
    QLabel PwdLabel;

    QLineEdit UserEdit;
    QLineEdit PwdEdit;

    QPushButton LoginButton;
    QPushButton CancelButton;
public:
    QLoginDialog();
};

#endif // QLOGINDIALOG_H
