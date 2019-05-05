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
    ui->rbtnGrafo->setChecked(true);
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

void GrafoDialog::grafoCompleto()
{
    grafo.clear();
    for(unsigned int i = 0; i < usuarioVector.size(); i++)
    {
        arista.clear();
        QString nombre = usuarioVector[i].getUserName();
        User contacto = usuarioVector[i];

        for (unsigned j = 0; j < contacto.getContactos().size(); j++) {
            arista.insert(contacto.getContactos()[j].getUserName(), contacto.getContactos()[j].getConversacion().size());
            grafo.insert(nombre, arista);
        }
    }

}

void GrafoDialog::aplicarPrim()
{
    std::priority_queue<AristaVertices, std::vector<AristaVertices>, std::greater<AristaVertices>> colaPrioridad;
    QList<QString> listaVisitados;

    QString origen, destino;
    unsigned long long peso;

    User conversacion = regresarMensajesUsuario(user->getUserName());
    origen = user->getUserName();

    for (unsigned i = 0; i < conversacion.getContactos().size(); i++)
    {
        destino = conversacion.getContactos()[i].getUserName();
        peso = static_cast<unsigned long long>(conversacion.getContactos()[i].getConversacion().size());

        (peso != 0) ? colaPrioridad.push(*(new AristaVertices(origen, destino, peso))) : void();
    }

//    colaPrioridad.push(*(new AristaVertices("origen", "destino", 1)));

    grafo.clear();

    AristaVertices aristaActual;

    if(!colaPrioridad.empty())
    {
        aristaActual = colaPrioridad.top();
        listaVisitados.append(aristaActual.getOrigen());
        listaVisitados.append(aristaActual.getDestino());
        agregarAlGrafo(aristaActual);

        colaPrioridad.pop();

        conversacion = regresarMensajesUsuario(aristaActual.getDestino());

        for (unsigned i = 0; i < conversacion.getContactos().size(); i++)
        {
            origen = aristaActual.getDestino();
            destino = conversacion.getContactos()[i].getUserName();
            peso = static_cast<unsigned long long>(conversacion.getContactos()[i].getConversacion().size());

            (peso != 0) ? colaPrioridad.push(*(new AristaVertices(origen, destino, peso))) : void();
        }
    }

    while (!colaPrioridad.empty()) {

        aristaActual = colaPrioridad.top();

        if(!listaVisitados.contains(aristaActual.getDestino()))
        {
            conversacion = regresarMensajesUsuario(aristaActual.getDestino());

            for (unsigned i = 0; i < conversacion.getContactos().size(); i++)
            {

                origen = aristaActual.getDestino();
                destino = conversacion.getContactos()[i].getUserName();
                peso = static_cast<unsigned long long>(conversacion.getContactos()[i].getConversacion().size());

                (peso != 0) ? colaPrioridad.push(*(new AristaVertices(origen, destino, peso))) : void();
            }

            listaVisitados.append(aristaActual.getDestino());
            agregarAlGrafo(aristaActual);
        }
        colaPrioridad.pop();
    }
}

void GrafoDialog::aplicarKruskal()
{
    std::priority_queue<AristaVertices, std::vector<AristaVertices>, std::greater<AristaVertices>> colaPrioridad;
    QList<QString> listaVisitados;
    QList<QList<QString>> listaConectados;

    QString origen, destino;
    unsigned long long peso;

    for(unsigned int i = 0; i < usuarioVector.size(); i++)
    {
        origen = usuarioVector[i].getUserName();
        User contacto = usuarioVector[i];

        for (unsigned j = 0; j < contacto.getContactos().size(); j++) {

            destino = contacto.getContactos()[j].getUserName();
            peso = static_cast<unsigned long long>(contacto.getContactos()[j].getConversacion().size());

            (peso != 0) ? colaPrioridad.push(*(new AristaVertices(origen, destino, peso))) : void();
        }
    }

//    colaPrioridad.push(*(new AristaVertices("origen", "destino", 1)));

    grafo.clear();

    AristaVertices aristaActual;

    if(!colaPrioridad.empty())
    {
        QList<QString> conectados;

        aristaActual = colaPrioridad.top();
        listaVisitados.append(aristaActual.getOrigen());
        listaVisitados.append(aristaActual.getDestino());
        agregarAlGrafo(aristaActual);

        conectados.append(aristaActual.getOrigen());
        conectados.append(aristaActual.getDestino());
        listaConectados.append(conectados);

        colaPrioridad.pop();
    }

    while (!colaPrioridad.empty()) {

        aristaActual = colaPrioridad.top();

        if(!listaVisitados.contains(aristaActual.getDestino()))
        {
            listaVisitados.append(aristaActual.getDestino());
            agregarAlGrafo(aristaActual);
        }
        else
        {
            ///validar si el origen y el destino estan conectados
            QListIterator<QList<QString>> iteradorLista(listaConectados);
            QList<QString> conectados;
            QList<QString> listaA, listaB;
            bool listasDistintas = true;

            while (iteradorLista.hasNext())
            {
                conectados = iteradorLista.next();

                if(conectados.contains(aristaActual.getOrigen()) or conectados.contains(aristaActual.getDestino()))
                {
                    if(conectados.contains(aristaActual.getOrigen()) and conectados.contains(aristaActual.getDestino()))
                    {
                        listasDistintas = false;
                        break;
                    }

                    if(!listaA.empty())
                    {
                        listaB = conectados;
                        break;
                    }
                    else
                    {
                        listaA = conectados;
                    }
                }

            }

            if(listasDistintas and !listaB.empty())
            {
                QList<QString> listaC(listaA + listaB);
                listaConectados.removeAll(listaA);
                listaConectados.removeAll(listaB);

                listaConectados.append(listaC);

                agregarAlGrafo(aristaActual);
            }
        }
        colaPrioridad.pop();
    }
}

void GrafoDialog::agregarAlGrafo(AristaVertices &aristaVertice)
{
    //Agregar de ida
    arista.clear();
    arista.insert(aristaVertice.getDestino(), aristaVertice.getPeso());
    grafo.insert(aristaVertice.getOrigen(), arista);

    //Agregar de regreso
    arista.clear();
    arista.insert(aristaVertice.getOrigen(), aristaVertice.getPeso());
    grafo.insert(aristaVertice.getDestino(), arista);

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

void GrafoDialog::on_btnMostrar_clicked()
{
    if(ui->rbtnPrim->isChecked())
    {
        aplicarPrim();
    }
    else if(ui->rbtnGrafo->isChecked())
    {
        grafoCompleto();
    }
    else if (ui->rbtnKruskal->isChecked())
    {
        aplicarKruskal();
    }

    vista();
}
