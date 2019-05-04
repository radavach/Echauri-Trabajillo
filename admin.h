#ifndef ADMIN_H
#define ADMIN_H

#include <QObject>
#include <iostream>

#include "logindialog.h"
#include "mainwindow.h"
#include "user.h"
#include <vector>
#include "contacto.h"
#include "conversacion.h"

#include <qobject.h>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <qfile.h>




class Admin : public QObject
{
    Q_OBJECT
private:
        std::vector<User> users;
        loginDialog *login;
        MainWindow *mainWindow;
        QFile db;
        QJsonArray jsonArray;

        void saveDB();
        void loadDB();

public:
        Admin();
        ~Admin();
        void start();

private slots:
        void addUser(QString name, QString phone, QString password);
        void validateUser(QString name, QString password);
        void guardarContacto(QJsonArray jsonArray);
        void cerrarSesion();
};

#endif // ADMIN_H
