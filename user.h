#ifndef USER_H
#define USER_H

#include <vector>
#include "contacto.h"

#include <QString>

class User
{
    private:
        QString userName, phoneNumber, password;
        std::vector<Contacto> contactos;
        void saveDB();
        void loadDB();

    public:
        User();
        User(const QString &name, const QString phone);

        //GETTER AND SETTER
        QString getUserName() const;
        void setUserName(const QString &value);

        QString getPhoneNumber() const;
        void setPhoneNumber(const QString &value);

        QString getPassword() const;
        void setPassword(const QString &value);

        //MODIFICAR CONTACTOS
        std::vector<Contacto> &getContactos();
        void setContactos(const std::vector<Contacto> &value);

        void addContact(const Contacto &value);

};

#endif // USER_H

