#include "contacto.h"

std::vector<Conversacion> Contacto::getConversacion() const
{
    return conversaciones;
}

void Contacto::setConversacion(const std::vector<Conversacion> &value)
{
    conversaciones = value;
}

void Contacto::addMensaje(const Conversacion &value)
{
    conversaciones.push_back(value);
}

QString Contacto::getColorFondo() const
{
    return colorFondo;
}

void Contacto::setColorFondo(const QString &value)
{
    colorFondo = value;
}

Contacto::Contacto()
{
    userName = "Unknown";
    colorFondo = "#B5FFE6";
    phoneNumber = "Unknown";
    colorRemitente = "#70FFCF";
    colorDestinatario = "#C4FAF8";

}

Contacto::Contacto(const QString &name, const QString phone)
{
    userName = name;
    phoneNumber = phone;
    colorFondo = "#B5FFE6";
    colorRemitente = "#70FFCF";
    colorDestinatario = "#C4FAF8";
}

QString Contacto::getUserName() const
{
    return  userName;
}

void Contacto::setUserName(const QString &value)
{
    userName = value;
}

QString Contacto::getPhoneNumber() const
{
    return  phoneNumber;
}

void Contacto::setPhoneNumber(const QString &value)
{
    phoneNumber = value;
}

///Colores para los mensajes
QString Contacto::getColorRemitente() const
{
    return colorRemitente;
}

void Contacto::setColorRemitente(const QString &value)
{
    colorRemitente = value;
}

QString Contacto::getColorDestinatario() const
{
    return colorDestinatario;
}

void Contacto::setColorDestinatario(const QString &value)
{
    colorDestinatario = value;
}
