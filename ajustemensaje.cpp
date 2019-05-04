#include "ajustemensaje.h"
#include "ui_ajustemensaje.h"

#include "ventanadeconversaciondialog.h"

ajusteMensaje::ajusteMensaje(Contacto *contacto,  VentanadeConversacionDialog *p, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ajusteMensaje)
{
    ui->setupUi(this);
    this->conversacion = contacto;
    this->ventanaAnt = p;
    p->hide();

    colorFondo = contacto->getColorFondo();
    colorRemitente = contacto->getColorRemitente();
    colorDestinatario = contacto->getColorDestinatario();

    QString remitente, destinatario, fondo;
    remitente = "background:" + colorRemitente;
    destinatario = "background:" + colorDestinatario;
    fondo = "background:" + colorFondo;

    ui->leRemitente->setStyleSheet(remitente);
    ui->leDestinatario->setStyleSheet(destinatario);
    ui->leFondo->setStyleSheet(fondo);
}

ajusteMensaje::~ajusteMensaje()
{
    delete ui;
}

QString ajusteMensaje::obtenerColor(QString colorDefault)
{
    QString colorR = colorDefault;
    QColor color = QColorDialog::getColor(colorR, this, "Escoge un color :3");
    if(color.isValid())
    {
        colorR = color.name();
    }

    return colorR;
}

void ajusteMensaje::on_btnRemitente_clicked()
{
    colorRemitente = obtenerColor(colorRemitente);
    QString style = "background:" + colorRemitente;
    ui->leRemitente->setStyleSheet(style);
}

void ajusteMensaje::on_btnDestinatario_clicked()
{
    colorDestinatario = obtenerColor(colorDestinatario);
    QString style = "background:" + colorDestinatario;
    ui->leDestinatario->setStyleSheet(style);
}

void ajusteMensaje::on_btnFondo_clicked()
{
    colorFondo = obtenerColor(colorFondo);
    QString style = "background:" + colorFondo;
    ui->leFondo->setStyleSheet(style);
}

void ajusteMensaje::on_btnGuardar_clicked()
{
    qDebug() << ":3";
    conversacion->setColorFondo(colorFondo);
    conversacion->setColorRemitente(colorRemitente);
    conversacion->setColorDestinatario(colorDestinatario);
    emit guardarCambios(*conversacion);
    ventanaAnt->show();
    ventanaAnt = nullptr;
    close();
}
