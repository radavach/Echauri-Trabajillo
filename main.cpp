#include "admin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Admin myAdmin;
    myAdmin.start();

    return a.exec();
}
