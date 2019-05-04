#ifndef VENTANADECONVERSACIONDIALOG_H
#define VENTANADECONVERSACIONDIALOG_H

#include "colormensaje.h"
//#include "ui_colormensaje.h"

#include "conversacion.h"
#include "user.h"
#include "contacto.h"

#include <QDialog>
#include <QString>
#include <QMessageBox>
#include <QFile>
#include <QObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QHBoxLayout>

#include <QDebug>
#include <QColorDialog>
#include <QColor>

////Holis señor Christian, este archivo es el más importante de la conversacion
namespace Ui {
class VentanadeConversacionDialog;
}

class VentanadeConversacionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit VentanadeConversacionDialog(User *users, User *contacto, QWidget *parent = nullptr);
    ~VentanadeConversacionDialog();

private slots:
    void on_EnviarpushButton_clicked();

    void on_MensajelineEdit_textChanged(const QString &arg1);

    void on_BusquedaMensajelineEdit_textChanged(const QString &arg1);

    void on_BuscarMensajepushButton_clicked();

    void on_BuscarpushButton_clicked();

private:
    Ui::VentanadeConversacionDialog *ui;
    QString nombreUsuario;
    QString nombreContacto;
    Contacto *conversacionUsuario;
    Contacto *conversacionContacto;

    std::vector<Conversacion>mensaje;
    QFile Mensaje;
    QJsonArray MensajeJson;

  /*  void Archivo();
    void loadFile();
    void saveFile();*/

    bool validacionDeCadena(QString Texto);
    void actualizacionDeConversacion();
    void insertarMensaje(const Conversacion &mensaje);
    void searchMessage(QString mensaje);

    Contacto *buscarContactoConversacion(User* usuario, QString contacto);

signals:
    void saveConv();

};

#endif // VENTANADECONVERSACIONDIALOG_H
