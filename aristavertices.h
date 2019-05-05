#ifndef ARISTAVERTICES_H
#define ARISTAVERTICES_H

#include <iostream>
#include <QString>

class AristaVertices
{
public:
    AristaVertices();
    AristaVertices(const QString &origen, const QString &destino, const unsigned long long &peso);

    unsigned long long getPeso() const;
    void setPeso(unsigned long long value);

    QString getOrigen() const;
    void setOrigen(const QString &value);

    QString getDestino() const;
    void setDestino(const QString &value);

    bool operator < (const AristaVertices &arista) const;
    bool operator > (const AristaVertices &arista) const;

private:
    unsigned long long peso;
    QString origen, destino;
};

#endif // ARISTAVERTICES_H
