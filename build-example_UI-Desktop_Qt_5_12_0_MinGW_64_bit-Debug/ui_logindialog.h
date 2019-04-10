/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loginDialog
{
public:
    QLineEdit *phoneLE;
    QLabel *Newlabel;
    QLineEdit *NewUserLE;
    QLineEdit *NewPasswordLE;
    QPushButton *LoginPB;
    QLineEdit *PasswordLE;
    QPushButton *CreatePB;
    QLineEdit *UserLE;

    void setupUi(QDialog *loginDialog)
    {
        if (loginDialog->objectName().isEmpty())
            loginDialog->setObjectName(QString::fromUtf8("loginDialog"));
        loginDialog->resize(300, 400);
        loginDialog->setMinimumSize(QSize(300, 400));
        loginDialog->setMaximumSize(QSize(300, 400));
        phoneLE = new QLineEdit(loginDialog);
        phoneLE->setObjectName(QString::fromUtf8("phoneLE"));
        phoneLE->setGeometry(QRect(90, 250, 120, 25));
        phoneLE->setTabletTracking(false);
        phoneLE->setCursorPosition(0);
        Newlabel = new QLabel(loginDialog);
        Newlabel->setObjectName(QString::fromUtf8("Newlabel"));
        Newlabel->setGeometry(QRect(104, 180, 81, 20));
        QFont font;
        font.setPointSize(14);
        Newlabel->setFont(font);
        Newlabel->setAlignment(Qt::AlignCenter);
        NewUserLE = new QLineEdit(loginDialog);
        NewUserLE->setObjectName(QString::fromUtf8("NewUserLE"));
        NewUserLE->setGeometry(QRect(90, 210, 120, 25));
        NewUserLE->setCursorPosition(0);
        NewPasswordLE = new QLineEdit(loginDialog);
        NewPasswordLE->setObjectName(QString::fromUtf8("NewPasswordLE"));
        NewPasswordLE->setGeometry(QRect(90, 290, 120, 25));
        NewPasswordLE->setEchoMode(QLineEdit::Password);
        NewPasswordLE->setCursorPosition(0);
        LoginPB = new QPushButton(loginDialog);
        LoginPB->setObjectName(QString::fromUtf8("LoginPB"));
        LoginPB->setEnabled(false);
        LoginPB->setGeometry(QRect(110, 120, 80, 35));
        PasswordLE = new QLineEdit(loginDialog);
        PasswordLE->setObjectName(QString::fromUtf8("PasswordLE"));
        PasswordLE->setGeometry(QRect(90, 80, 120, 25));
        PasswordLE->setEchoMode(QLineEdit::Password);
        PasswordLE->setCursorPosition(0);
        CreatePB = new QPushButton(loginDialog);
        CreatePB->setObjectName(QString::fromUtf8("CreatePB"));
        CreatePB->setEnabled(false);
        CreatePB->setGeometry(QRect(110, 330, 80, 35));
        UserLE = new QLineEdit(loginDialog);
        UserLE->setObjectName(QString::fromUtf8("UserLE"));
        UserLE->setGeometry(QRect(90, 30, 120, 25));
        UserLE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        QWidget::setTabOrder(UserLE, PasswordLE);
        QWidget::setTabOrder(PasswordLE, LoginPB);
        QWidget::setTabOrder(LoginPB, NewUserLE);
        QWidget::setTabOrder(NewUserLE, phoneLE);
        QWidget::setTabOrder(phoneLE, NewPasswordLE);
        QWidget::setTabOrder(NewPasswordLE, CreatePB);

        retranslateUi(loginDialog);

        QMetaObject::connectSlotsByName(loginDialog);
    } // setupUi

    void retranslateUi(QDialog *loginDialog)
    {
        loginDialog->setWindowTitle(QApplication::translate("loginDialog", "Dialog", nullptr));
        phoneLE->setPlaceholderText(QApplication::translate("loginDialog", "Phone", nullptr));
        Newlabel->setText(QApplication::translate("loginDialog", "Nuevo?", nullptr));
        NewUserLE->setPlaceholderText(QApplication::translate("loginDialog", "User", nullptr));
        NewPasswordLE->setPlaceholderText(QApplication::translate("loginDialog", "Password", nullptr));
        LoginPB->setText(QApplication::translate("loginDialog", "Login", nullptr));
        PasswordLE->setPlaceholderText(QApplication::translate("loginDialog", "Password", nullptr));
        CreatePB->setText(QApplication::translate("loginDialog", "Create", nullptr));
        UserLE->setPlaceholderText(QApplication::translate("loginDialog", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginDialog: public Ui_loginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
