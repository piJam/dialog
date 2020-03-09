#include "QLogindialog.h"

QLoginDialog::QLoginDialog(QWidget* parent):QDialog(parent, Qt::WindowCloseButtonHint),UserLabel(this), PwdLabel(this),
                        UserEdit(this), PwdEdit(this),LoginButton(this), CancelButton(this)
{
    UserLabel.setText("用户名：");
    UserLabel.move(20, 30);
    UserLabel.resize(60, 25);

    UserEdit.move(85,30);
    UserEdit.resize(180, 25);

    PwdLabel.setText("密 码：");
    PwdLabel.move(20, 65);
    PwdLabel.resize(60, 25);

    PwdEdit.move(85, 65);
    PwdEdit.resize(180, 25);

    LoginButton.setText("Login");
    LoginButton.move(85, 110);
    LoginButton.resize(85, 30);

    CancelButton.setText("cancel");
    CancelButton.move(180, 110);
    CancelButton.resize(85, 30);

    setWindowTitle("Login");
    setFixedSize(285, 170);


    connect(&LoginButton, SIGNAL(clicked()), this, SLOT(LoginButtonClicked()));
    connect(&CancelButton, SIGNAL(clicked()), this, SLOT(CancelButtonClicked()));
}

void QLoginDialog::LoginButtonClicked()
{
    QDialog::done(QDialog::Accepted);
    qDebug() << "LoginButtonClicked() ";
}

void QLoginDialog::CancelButtonClicked()
{
    QDialog::done(QDialog::Rejected);
    qDebug() << "CancelButtonClicked() ";
}

QLoginDialog::~QLoginDialog()
{

}

QString QLoginDialog::getName()
{
    return m_name;
}

QString QLoginDialog::getPwd()
{
    return m_pwd;
}
