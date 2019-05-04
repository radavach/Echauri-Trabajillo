/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *ProfileButton;
    QPushButton *LogOutButton;
    QTextEdit *ContactsTextEdit;
    QPushButton *BuscarButton;
    QPushButton *AddButton;
    QTextEdit *UsersTextEdit;
    QLineEdit *BusquedaLineEdit;
    QLineEdit *AddLineEdit;
    QLineEdit *EscribirMensajelineEdit;
    QPushButton *EnviarpushButton;
    QPushButton *grafoPushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 400);
        MainWindow->setMinimumSize(QSize(600, 400));
        MainWindow->setMaximumSize(QSize(600, 400));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ProfileButton = new QPushButton(centralWidget);
        ProfileButton->setObjectName(QString::fromUtf8("ProfileButton"));
        ProfileButton->setEnabled(true);
        ProfileButton->setGeometry(QRect(10, 10, 100, 30));
        ProfileButton->setStyleSheet(QString::fromUtf8("background-color: white; color: black"));
        LogOutButton = new QPushButton(centralWidget);
        LogOutButton->setObjectName(QString::fromUtf8("LogOutButton"));
        LogOutButton->setEnabled(true);
        LogOutButton->setGeometry(QRect(120, 10, 100, 30));
        ContactsTextEdit = new QTextEdit(centralWidget);
        ContactsTextEdit->setObjectName(QString::fromUtf8("ContactsTextEdit"));
        ContactsTextEdit->setEnabled(false);
        ContactsTextEdit->setGeometry(QRect(10, 50, 221, 240));
        ContactsTextEdit->setStyleSheet(QString::fromUtf8("background-color: white; color: black"));
        BuscarButton = new QPushButton(centralWidget);
        BuscarButton->setObjectName(QString::fromUtf8("BuscarButton"));
        BuscarButton->setEnabled(false);
        BuscarButton->setGeometry(QRect(440, 310, 101, 30));
        AddButton = new QPushButton(centralWidget);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        AddButton->setEnabled(false);
        AddButton->setGeometry(QRect(420, 10, 120, 30));
        UsersTextEdit = new QTextEdit(centralWidget);
        UsersTextEdit->setObjectName(QString::fromUtf8("UsersTextEdit"));
        UsersTextEdit->setEnabled(false);
        UsersTextEdit->setGeometry(QRect(250, 50, 331, 250));
        UsersTextEdit->setStyleSheet(QString::fromUtf8("background-color: white; color: black; border: 20;"));
        BusquedaLineEdit = new QLineEdit(centralWidget);
        BusquedaLineEdit->setObjectName(QString::fromUtf8("BusquedaLineEdit"));
        BusquedaLineEdit->setGeometry(QRect(250, 310, 181, 30));
        AddLineEdit = new QLineEdit(centralWidget);
        AddLineEdit->setObjectName(QString::fromUtf8("AddLineEdit"));
        AddLineEdit->setGeometry(QRect(230, 10, 181, 30));
        EscribirMensajelineEdit = new QLineEdit(centralWidget);
        EscribirMensajelineEdit->setObjectName(QString::fromUtf8("EscribirMensajelineEdit"));
        EscribirMensajelineEdit->setGeometry(QRect(10, 310, 161, 31));
        EnviarpushButton = new QPushButton(centralWidget);
        EnviarpushButton->setObjectName(QString::fromUtf8("EnviarpushButton"));
        EnviarpushButton->setEnabled(false);
        EnviarpushButton->setGeometry(QRect(174, 310, 71, 31));
        grafoPushButton = new QPushButton(centralWidget);
        grafoPushButton->setObjectName(QString::fromUtf8("grafoPushButton"));
        grafoPushButton->setGeometry(QRect(220, 360, 101, 31));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        ProfileButton->setText(QApplication::translate("MainWindow", "Perfil", nullptr));
        LogOutButton->setText(QApplication::translate("MainWindow", "Salir", nullptr));
        ContactsTextEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p></body></html>", nullptr));
        BuscarButton->setText(QApplication::translate("MainWindow", "Buscar", nullptr));
        AddButton->setText(QApplication::translate("MainWindow", "A\303\261adir", nullptr));
        UsersTextEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p></body></html>", nullptr));
        BusquedaLineEdit->setText(QString());
        BusquedaLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Ingresa nombre de usuario ", nullptr));
        AddLineEdit->setText(QString());
        AddLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Ingresa el nombre de usuario", nullptr));
        EscribirMensajelineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Ingresa contacto para mensaje", nullptr));
        EnviarpushButton->setText(QApplication::translate("MainWindow", "Enviar!!", nullptr));
        grafoPushButton->setText(QApplication::translate("MainWindow", "Grafo...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
