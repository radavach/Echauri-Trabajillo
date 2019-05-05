#ifndef AJUSTEMENSAJE_H
#define AJUSTEMENSAJE_H

#include <QWidget>
#include <QColorDialog>
#include <QColor>
#include <QDebug>

#include "contacto.h"

namespace Ui {
class ajusteMensaje;
}

class VentanadeConversacionDialog;

class ajusteMensaje : public QWidget
{
    Q_OBJECT

public:
    explicit ajusteMensaje(Contacto *contacto, VentanadeConversacionDialog *p, QWidget *parent = nullptr);
    ~ajusteMensaje();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_btnRemitente_clicked();

    void on_btnDestinatario_clicked();

    void on_btnFondo_clicked();

    void on_btnGuardar_clicked();

    void on_btnReestablecer_clicked();

private:
    VentanadeConversacionDialog *ventanaAnt;
    Contacto *conversacion;
    Ui::ajusteMensaje *ui;
    QString colorRemitente, colorDestinatario, colorFondo;

    QString obtenerColor(QString colorDefault);

signals:
        void guardarCambios(Contacto con);
};

#endif // AJUSTEMENSAJE_H
