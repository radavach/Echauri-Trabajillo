/********************************************************************************
** Form generated from reading UI file 'colormensaje.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORMENSAJE_H
#define UI_COLORMENSAJE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ColorMensaje
{
public:
    QTextEdit *Fecha;
    QTextEdit *TextoMensajetextEdit;

    void setupUi(QDialog *ColorMensaje)
    {
        if (ColorMensaje->objectName().isEmpty())
            ColorMensaje->setObjectName(QString::fromUtf8("ColorMensaje"));
        ColorMensaje->resize(189, 111);
        Fecha = new QTextEdit(ColorMensaje);
        Fecha->setObjectName(QString::fromUtf8("Fecha"));
        Fecha->setEnabled(false);
        Fecha->setGeometry(QRect(0, 0, 191, 31));
        TextoMensajetextEdit = new QTextEdit(ColorMensaje);
        TextoMensajetextEdit->setObjectName(QString::fromUtf8("TextoMensajetextEdit"));
        TextoMensajetextEdit->setEnabled(false);
        TextoMensajetextEdit->setGeometry(QRect(0, 30, 191, 81));

        retranslateUi(ColorMensaje);

        QMetaObject::connectSlotsByName(ColorMensaje);
    } // setupUi

    void retranslateUi(QDialog *ColorMensaje)
    {
        ColorMensaje->setWindowTitle(QApplication::translate("ColorMensaje", "Dialog", nullptr));
        Fecha->setPlaceholderText(QApplication::translate("ColorMensaje", "Fecha:", nullptr));
        TextoMensajetextEdit->setPlaceholderText(QApplication::translate("ColorMensaje", "Cuerpo del Mensaje:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorMensaje: public Ui_ColorMensaje {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORMENSAJE_H
