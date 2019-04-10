#ifndef COLORMENSAJE_H
#define COLORMENSAJE_H

#include <QDialog>

namespace Ui {

class ColorMensaje;
}

class ColorMensaje : public QDialog
{
    Q_OBJECT

public:
    explicit ColorMensaje(QWidget *parent = nullptr);
    ~ColorMensaje();

    void setText(QString text);
    void setFecha(QString fech);
    void setColores(QString colorMensaje, QString colorFondo);
    QString getText() const;
private:
    Ui::ColorMensaje *ui;
    QString text;
};

#endif // COLORMENSAJE_H
