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

Contacto::Contacto()
{
    userName = "Unknown";
    phoneNumber = "Unknown";
}

Contacto::Contacto(const QString &name, const QString phone)
{
    userName = name;
    phoneNumber = phone;
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
