#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class loginDialog;
}

class loginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit loginDialog(QWidget *parent = nullptr);
    ~loginDialog();

private slots:
    void on_UserLE_textChanged(const QString &arg1);

    void on_PasswordLE_textChanged(const QString &arg1);

    void on_NewUserLE_textChanged(const QString &arg1);

    void on_phoneLE_textChanged(const QString &arg1);

    void on_NewPasswordLE_textChanged(const QString &arg1);

    void on_CreatePB_clicked();

    void on_LoginPB_clicked();

    void on_NewUserLE_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::loginDialog *ui;

    void enableLogin();
    void enableCreate();

    bool isValidPhoneNumber(QString phoneNumber);

signals:
    void createUser(QString name, QString phone, QString password);
    void login(QString name, QString password);
};

#endif // LOGINDIALOG_H
