#ifndef CONVERSACION_H
#define CONVERSACION_H

#include <QString>
#include <QDateTime>

class Conversacion
{
private:
    QString trans;
    QString texto;
    QString fecha;
public:
    //Este constructor lo utilizaré para la fecha del sistema, de cuando es enviado los mensajes...
    Conversacion();
    ///Similar a un get y set.
    Conversacion(QString transmision, QString text);

    QString getTrans() const;
    void setTrans(const QString &value);

    QString getTexto() const;
    void setTexto(const QString &value);

    QString getFecha() const;
    void setFecha(const QString &value);
};

#endif // CONVERSACION_H
