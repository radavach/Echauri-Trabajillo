#include "grafodialog.h"
#include "ui_grafodialog.h"

GrafoDialog::GrafoDialog(User *usuarios, std::vector<User>usuarioVectores1, QWidget *parent) :
        QDialog(parent),
        ui(new Ui::GrafoDialog)
{
    ui->setupUi(this);

    if(!usuarioVectores1.empty()){
        for(unsigned m = 0; m < usuarioVectores1.size(); m++)
        {
            usuarioVector.push_back(usuarioVectores1[m]);
        }

    }
    user = usuarios;

    ui->grafoTableWidget->setColumnWidth(0, 180);
    ui->grafoTableWidget->setColumnWidth(1, 180);
    ui->grafoTableWidget->setColumnWidth(2, 180);
}

GrafoDialog::~GrafoDialog()
{
    delete ui;
}

void GrafoDialog::on_visualizarPushButton_clicked()
{
    grafoContactos();
    vista();
}

void GrafoDialog::grafoContactos()
{
    User u2 = regresarMensajesUsuario(user->getUserName());

    if(u2.getContactos().size()> 0)
    {

        ///Se limpian las aristas para que no haya una sobreescritura.
        arista.clear();
        grafo.clear();

        for(unsigned int i = 0; i < u2.getContactos().size(); i++)
        {


            arista.insert(u2.getContactos()[i].getUserName(), u2.getContactos()[i].getConversacion().size());

            grafo.insert(user->getUserName(), arista);
        }

    }///Fin del primer if

}

User GrafoDialog::regresarMensajesUsuario(QString nombreDeUsuario)
{
    User u;
    ///Se recorre todos los usuarios y nos devuelve el registro
    for(unsigned int j = 0; j < usuarioVector.size(); j++){

        ///cuando lo encuentra lo devuelve :3
        if(nombreDeUsuario == usuarioVector[j].getUserName())
        {
            u = usuarioVector[j];
            break;
        }
    }

    return u;
}

void GrafoDialog::vista()
{
    if(!grafo.isEmpty())
    {
        ///Es para limpiar la tabla
      ui->grafoTableWidget->setRowCount(0);
      ///Se crea un iterador de la misma manera de la que se crea un grafo.
      /// se recorre la lista de nodos.
      QHash<QString, QHash<QString, unsigned long long > >::iterator gIt;

      for(gIt = grafo.begin(); gIt != grafo.end(); gIt++)
      {
          QString Key = gIt.key();
          ///Se recorre la listas de vecinos

          QHash<QString, unsigned long long >vecino = gIt.value();
          ///Se crea otro iterador par que recorra la lista de vecinos, que en este caso son los contactos
          /// del usuario.

          QHash<QString, unsigned long long>::iterator vIt;

          for(vIt = vecino.begin(); vIt != vecino.end(); vIt++)
          {
                qDebug() << "{Tienes que entrar}";
              ///se utiliza para la creacion de la fila.
              ui->grafoTableWidget->insertRow(ui->grafoTableWidget->rowCount());
              int numero = ui->grafoTableWidget->rowCount() - 1;

              ///Ahora para insertar se necesita:
              ui->grafoTableWidget->setItem(numero, 0, new QTableWidgetItem(Key));
              ui->grafoTableWidget->setItem(numero, 1, new QTableWidgetItem(vIt.key()));
              ui->grafoTableWidget->setItem(numero, 2, new QTableWidgetItem(QString::number(vIt.value())));

          }

      }

    }
}

QString GrafoDialog::archivoGrafo(QString name, QString names)
{
    return "mensajes/" + ((name >names )? name + "->" + names : names + "->"+ name) + ".json";
}
