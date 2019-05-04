#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "user.h"
#include "contacto.h"
#include "ventanadeconversaciondialog.h"
#include "grafodialog.h"

#include <vector>

#include <QMainWindow>
#include <QFile>
#include <QJsonArray>
#include <QObject>

#include <QJsonDocument>
#include <QJsonObject>
#include <QDialog>
#include <QDebug>
#include <qmessagebox.h>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(User *u, QWidget *parent = nullptr);
    ~MainWindow();


private slots:  //WIDGETS
    void on_ProfileCheckBox_stateChanged(int arg1);
    void on_ProfileButton_clicked();
    //void on_ShowAllButton_clicked();
    void on_BusquedaLineEdit_textChanged(const QString &arg1);
    void on_AddLineEdit_textChanged(const QString &arg1);

    void on_LogOutButton_clicked();

    void on_AddButton_clicked();

    void on_BuscarButton_clicked();

    void on_EnviarpushButton_clicked();

    void saveDB();

    void on_EscribirMensajelineEdit_textChanged(const QString &arg1);

    void on_grafoPushButton_clicked();

private:
        Ui::MainWindow *ui;
        User *user;
        VentanadeConversacionDialog *conversacion;
        GrafoDialog *grafoDialogo;

        //USERS
        std::vector<User> usersVector;
        QFile usersdb;
        QJsonArray usersJsonArray;
        void loadUsers();
        void saveUsers();

        //CONTACTS
        std::vector<User> contactsVector;
        QFile contactsdb;
        QJsonArray contactsJsonArray;

        //GRAPHS
        std::vector<User>grafoVector;
        QFile grafodb;
        QJsonArray graphsJsonArray;


        //AUXILIARES:
        bool isMyContact(QString userName);
        bool isAnUser(QString userName);
        void addContact();
        void updateContactList();
        void updateUsersList();
        QString getPhoneByUser(QString userName);
        User* getThisUser(QString userName);
        void searchUsersByName(QString name);

        ///se utiliza para verifiar que ambos usuarios sean amigos :3
        bool validarAmistad();
        void cambiarUsuario(const QString &userName);

signals:
        void saveUs(QJsonArray jsonArray);
};

#endif // MAINWINDOW_H
