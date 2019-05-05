#include "aristavertices.h"

AristaVertices::AristaVertices()
{

}

AristaVertices::AristaVertices(const QString &origen, const QString &destino, const unsigned long long &peso)
{
    this->origen = origen;
    this->destino = destino;
    this->peso = peso;
}

unsigned long long AristaVertices::getPeso() const
{
    return peso;
}

void AristaVertices::setPeso(unsigned long long value)
{
    peso = value;
}

QString AristaVertices::getOrigen() const
{
    return origen;
}

void AristaVertices::setOrigen(const QString &value)
{
    origen = value;
}

QString AristaVertices::getDestino() const
{
    return destino;
}

void AristaVertices::setDestino(const QString &value)
{
    destino = value;
}

bool AristaVertices::operator <(const AristaVertices &arista2) const
{
    return  this->peso < arista2.peso;
}

bool AristaVertices::operator >(const AristaVertices &arista) const
{
    return  this->peso > arista.peso;
}
