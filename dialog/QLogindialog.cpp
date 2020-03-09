#include "QLogindialog.h"

QLoginDialog::QLoginDialog()
{

    connect(&LoginButton, SIGNAL(clicked(bool)), this, SLOT(LoginButtonClicked()));
    connect(&CancelButton, SIGNAL(clicked(bool)), this, SLOT(CancelButtonClicked()));
}

void QLoginDialog::LoginButtonClicked()
{
    QDialog::done(QDialog::Accepted);
}

void QLoginDialog::CancelButtonClicked()
{
    QDialog::done(QDialog::Rejected);
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
