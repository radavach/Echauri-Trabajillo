#include "conversacion.h"
///Este archivo es para tener la hora y fecha de cuando se mandan los mensajes de la conversación
Conversacion::Conversacion()
{
    QDate Dia= QDate::currentDate();
    QTime Hora= QTime::currentTime();

    QString dateFormat = "";
     dateFormat += QString::number(Dia.day()) + "/";
     dateFormat += QString::number(Dia.month()) + "/";
     dateFormat += QString::number(Dia.year()) + "/";
     dateFormat += QString::number(Hora.hour()) + ":";
     dateFormat += QString::number(Hora.minute());

    fecha = dateFormat;
}

Conversacion::Conversacion(QString transmision, QString text):Conversacion()
{
    trans = transmision;
    texto = text;
}

QString Conversacion::getTrans() const
{
    return trans;
}

void Conversacion::setTrans(const QString &value)
{
    trans = value;
}

QString Conversacion::getTexto() const
{
    return texto;
}

void Conversacion::setTexto(const QString &value)
{
    texto = value;
}

QString Conversacion::getFecha() const
{
    return fecha;
}

void Conversacion::setFecha(const QString &value)
{
    fecha = value;
}
