#ifndef CONTACTO_H
#define CONTACTO_H

#include <QString>
#include <vector>

#include "conversacion.h"

class Contacto
{
private:
    QString userName, phoneNumber;
    std::vector<Conversacion> conversaciones;
    QString colorRemitente, colorDestinatario, colorFondo;

public:
    Contacto();
    Contacto(const QString &name, const QString phone);

    //GETTER AND SETTER
    QString getUserName() const;
    void setUserName(const QString &value);

    QString getPhoneNumber() const;
    void setPhoneNumber(const QString &value);

    std::vector<Conversacion> getConversacion() const;
    void setConversacion(const std::vector<Conversacion> &value);

    void addMensaje(const Conversacion &value);

    QString getColorRemitente() const;
    void setColorRemitente(const QString &value);
    QString getColorDestinatario() const;
    void setColorDestinatario(const QString &value);
    QString getColorFondo() const;
    void setColorFondo(const QString &value);
};

#endif // CONTACTO_H
