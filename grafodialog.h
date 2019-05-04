#ifndef GRAFODIALOG_H
#define GRAFODIALOG_H

#include <QDialog>
#include <QCoreApplication>
#include <QDebug>
#include <QHash>
#include <vector>
#include <QFile>
#include <QTableWidget>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMessageBox>

#include "user.h"
#include "contacto.h"
#include "conversacion.h"

namespace Ui {
class GrafoDialog;
}

class GrafoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GrafoDialog(User *usuarios, std::vector<User>usuarioVectores1, QWidget *parent = nullptr);
    ~GrafoDialog();
    void vista();

private slots:
    void on_visualizarPushButton_clicked();

private:
    Ui::GrafoDialog *ui;
    User *user;
    std::vector<User>usuarioVector;

    QHash<QString, unsigned long long >arista;
    QHash<QString, QHash<QString, unsigned long long > > grafo;

    void grafoContactos();
    User regresarMensajesUsuario(QString nombreDeUsuario);


    QString archivoGrafo(QString name, QString names);

};

#endif // GRAFODIALOG_H
