#ifndef _QLOGINDIALOG_H_
#define _QLOGINDIALOG_H_
#include <QDialog> //Ggui/QDialog
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QString>

class QLoginDialog : public QDialog
{
private:
    QLabel UserLabel;
    QLabel PwdLabel;

    QLineEdit UserEdit;
    QLineEdit PwdEdit;

    QPushButton LoginButton;
    QPushButton CancelButton;

    QString m_name;
    Qstring m_pwd;

private slots:
    void LoginButtonClicked();
    void CancelButtonClicked();

public:
    QLoginDialog();
    ~QLoginDialog();

    QString getName();
    QString getPwd();
};

#endif // QLOGINDIALOG_H
