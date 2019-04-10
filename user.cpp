#include "user.h"

User::User()
{
    userName = "Unknown";
    password = "Unknown";
    phoneNumber = "Unknown";

}

User::User(const QString &name, const QString phone): User()
{
    userName = name;
    phoneNumber = phone;
}

QString User::getUserName() const
{
    return userName;
}

void User::setUserName(const QString &value)
{
    userName = value;
}

QString User::getPhoneNumber() const
{
    return phoneNumber;
}

void User::setPhoneNumber(const QString &value)
{
    phoneNumber = value;
}

QString User::getPassword() const
{
    return password;
}

void User::setPassword(const QString &value)
{
    password = value;
}

std::vector<Contacto> &User::getContactos()
{
    return contactos;
}

void User::setContactos(const std::vector<Contacto> &value)
{
    contactos = value;
}

void User::addContact(const Contacto &value)
{
    contactos.push_back(value);
}

