#include "colormensaje.h"
#include "ui_colormensaje.h"


///Es para el color del mensaje
/// Constructor
ColorMensaje::ColorMensaje(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ColorMensaje)
{
    ui->setupUi(this);
}
///Destructor
ColorMensaje::~ColorMensaje()
{
    delete ui;
}

void ColorMensaje::setText(QString text)
{
    ui->TextoMensajetextEdit->setText(text);
    this->text = text;
}

void ColorMensaje::setFecha(QString fech)
{
    ui->Fecha->setText(fech);
}

void ColorMensaje::setColores(QString colorMensaje, QString colorFondo)
{
    ui->Fecha->setStyleSheet("border-radius:10px; border: 1; background-color:" + colorMensaje );
    ui->TextoMensajetextEdit->setStyleSheet("border-radius:15px; border:1; background-color:" + colorMensaje );
    this->setStyleSheet("QDialog{border-radius:15px; border: 1; background-color:" + colorFondo + "}");
}

QString ColorMensaje::getText() const
{
    return text;
}
