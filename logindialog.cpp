#include "logindialog.h"
#include "ui_logindialog.h"

loginDialog::loginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    ui->setupUi(this);
}

loginDialog::~loginDialog()
{
    delete ui;
}

void loginDialog::enableLogin(){
    if (ui->UserLE->text().length() > 0 && ui->PasswordLE->text().length() > 0 ){
        ui->LoginPB->setEnabled(true);
    }

    else
        ui->LoginPB->setEnabled(false);
}

void loginDialog::enableCreate()
{
    if(
        ui->NewUserLE->text().length() > 0 &&
        ui->phoneLE->text().length() ==  10 &&
        ui->NewPasswordLE->text().length() > 0 &&
        isValidPhoneNumber(ui->phoneLE->text())
       ){

        ui->CreatePB->setEnabled(true);
    }

    else{

        ui->CreatePB->setEnabled(false);
    }
}

bool loginDialog::isValidPhoneNumber(QString phoneNumber)
{
    for(int i = 0; i < phoneNumber.length(); i++){
        if(
        phoneNumber[i] != '0' &&
        phoneNumber[i] != '1' &&
        phoneNumber[i] != '2' &&
        phoneNumber[i] != '3' &&
        phoneNumber[i] != '4' &&
        phoneNumber[i] != '5' &&
        phoneNumber[i] != '6' &&
        phoneNumber[i] != '7' &&
        phoneNumber[i] != '8' &&
        phoneNumber[i] != '9'
        )
            return false;
    }

    return true;
}

void loginDialog::on_UserLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableLogin();
}

void loginDialog::on_PasswordLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableLogin();
}

void loginDialog::on_NewUserLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableCreate();
}

void loginDialog::on_phoneLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableCreate();
}

void loginDialog::on_NewPasswordLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableCreate();
}

void loginDialog::on_CreatePB_clicked()
{
    emit createUser(
        ui->NewUserLE->text(),
        ui->phoneLE->text(),
        ui->NewPasswordLE->text()
    );

    ui->NewUserLE->setText("");
    ui->NewPasswordLE->setText("");
    ui->phoneLE->setText("");

}

void loginDialog::on_LoginPB_clicked()
{
    emit login(
        ui->UserLE->text(),
        ui->PasswordLE->text()
    );

    ui->UserLE->clear();
    ui->PasswordLE->clear();
}

void loginDialog::on_NewUserLE_cursorPositionChanged(int arg1, int arg2)
{
    Q_UNUSED(arg1);
    Q_UNUSED(arg2);
}
