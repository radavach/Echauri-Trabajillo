/********************************************************************************
** Form generated from reading UI file 'grafodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFODIALOG_H
#define UI_GRAFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_GrafoDialog
{
public:
    QLineEdit *grafolineEdit;
    QPushButton *visualizarPushButton;
    QTableWidget *grafoTableWidget;

    void setupUi(QDialog *GrafoDialog)
    {
        if (GrafoDialog->objectName().isEmpty())
            GrafoDialog->setObjectName(QString::fromUtf8("GrafoDialog"));
        GrafoDialog->resize(474, 300);
        grafolineEdit = new QLineEdit(GrafoDialog);
        grafolineEdit->setObjectName(QString::fromUtf8("grafolineEdit"));
        grafolineEdit->setEnabled(false);
        grafolineEdit->setGeometry(QRect(0, 0, 481, 31));
        grafolineEdit->setAlignment(Qt::AlignCenter);
        visualizarPushButton = new QPushButton(GrafoDialog);
        visualizarPushButton->setObjectName(QString::fromUtf8("visualizarPushButton"));
        visualizarPushButton->setGeometry(QRect(160, 40, 101, 41));
        grafoTableWidget = new QTableWidget(GrafoDialog);
        if (grafoTableWidget->columnCount() < 3)
            grafoTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        grafoTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        grafoTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        grafoTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        grafoTableWidget->setObjectName(QString::fromUtf8("grafoTableWidget"));
        grafoTableWidget->setGeometry(QRect(0, 100, 481, 201));

        retranslateUi(GrafoDialog);

        QMetaObject::connectSlotsByName(GrafoDialog);
    } // setupUi

    void retranslateUi(QDialog *GrafoDialog)
    {
        GrafoDialog->setWindowTitle(QApplication::translate("GrafoDialog", "Dialog", nullptr));
        grafolineEdit->setPlaceholderText(QApplication::translate("GrafoDialog", "Grafo Contactos", nullptr));
        visualizarPushButton->setText(QApplication::translate("GrafoDialog", "Ver Grafo!", nullptr));
        QTableWidgetItem *___qtablewidgetitem = grafoTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("GrafoDialog", "Usuario Inicio", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = grafoTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("GrafoDialog", "Usuario Final", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = grafoTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("GrafoDialog", "Peso", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GrafoDialog: public Ui_GrafoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFODIALOG_H
