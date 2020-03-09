#ifndef _QLOGINDIALOG_H_
#define _QLOGINDIALOG_H_
#include <QDialog> //Ggui/QDialog
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QString>
#include <QDebug>

class QLoginDialog : public QDialog
{
    Q_OBJECT
private:
    QLabel UserLabel;
    QLabel PwdLabel;

    QLineEdit UserEdit;
    QLineEdit PwdEdit;

    QPushButton LoginButton;
    QPushButton CancelButton;

    QString m_name;
    QString m_pwd;

private slots:
    void LoginButtonClicked();
    void CancelButtonClicked();

public:
    QLoginDialog(QWidget *parent = 0);
    ~QLoginDialog();

    QString getName();
    QString getPwd();
};

#endif // QLOGINDIALOG_H
