#include "admin.h"
#include <qmessagebox.h>

Admin::Admin()
{
    login = new loginDialog();

    //connect(quien envia, que envia, a quien se envia, con que responde);

    connect(login,
            SIGNAL(createUser(QString, QString, QString)),
            this,
            SLOT(addUser(QString, QString, QString)) );

    connect(login,
            SIGNAL(login(QString, QString)),
            this,
            SLOT(validateUser(QString, QString)) );

    db.setFileName("DB.json"); //Asignar nombre al archivo

    loadDB();
}

Admin::~Admin(){
    saveDB();
}

void Admin::saveDB()
{
    if(!db.open(QIODevice::WriteOnly))
    {
        QMessageBox message;
        message.setWindowTitle("Error!");
        message.setText("No se pudo abrir la base de datos");
        message.exec();
    }

    else{
        QJsonObject jsonObject;
        jsonObject["users"] = jsonArray;

        QJsonDocument jsonDocument(jsonObject);
        db.write(jsonDocument.toJson());    //FORMATEAR
    }

    db.close();
}

void Admin::loadDB(){
    if(!db.open(QIODevice::ReadOnly)){
        QMessageBox message;
        message.setWindowTitle("Error");
        message.setText("No se pudo abrir la base de datos");
        message.exec();
    } else{
        QByteArray data = db.readAll();
        QJsonDocument jsonDocument(QJsonDocument::fromJson(data)); //DESFORMATEAR
        QJsonObject jsonObject = jsonDocument.object();
        jsonArray = jsonObject["users"].toArray();
        for(int i=0; i < jsonArray.size(); ++i){
            QJsonObject obj = jsonArray[i].toObject();
            User u;
            u.setUserName(obj["name"].toString());
            u.setPassword(obj["password"].toString());
            u.setPhoneNumber(obj["phone"].toString());

            ///Para leer la lista de contactos
            /// se convierte en array
            QJsonArray jsonArrayContactos = obj["contactos"].toArray();
            Contacto contactos;
            for(int j=0; j < jsonArrayContactos.size(); j++)
            {
                QJsonObject objCont = jsonArrayContactos[j].toObject();
                contactos.setUserName(objCont["name"].toString());
                contactos.setPhoneNumber(objCont["phone"].toString());

                QJsonArray jsonArrayMensaje = objCont["mensajes"].toArray();
                Conversacion conversacion;

                ///Lo siguiente que se hará es ... No recuerdo, lo siento !!!!!! :(
                for(int m= 0; m <jsonArrayMensaje.size(); m++)
                {
                    QJsonObject objMensaje = jsonArrayMensaje[m].toObject();
                    conversacion.setFecha(objMensaje["fecha"].toString());
                    conversacion.setTexto(objMensaje["texto"].toString());
                    conversacion.setTrans(objMensaje["transmision"].toString());

                    contactos.addMensaje(conversacion);
                }

                u.addContact(contactos);

            }



            users.push_back(u);
        }
    }
    db.close();
}

void Admin::start()
{
    login->show();
}

void Admin::addUser(QString name, QString phone, QString password)
{
    User u;
    bool exist = false;

    u.setUserName(name);
    u.setPassword(password);
    u.setPhoneNumber(phone);


    //Encontrar coincidencias:
    for(unsigned int i = 0; i < users.size(); i++){
        if(users[i].getUserName() == u.getUserName()) //SI SON IGUALES
            exist = true;
    }

    QMessageBox message;

    if(exist == true){ //YA EXISTE UNO CON ESE NOMBRE
        message.setWindowTitle("El usuario ya existe");
        message.setText("El usuario existe");
        message.exec();
    }

    else{
        users.push_back(u); //AGREGAR AL VECTOR

        QJsonObject jsonObject;
        jsonObject["name"] = name;
        jsonObject["password"] = password;
        jsonObject["phone"] = phone;




        jsonArray.append(jsonObject);   //AGREGAR AL OBJETO JSON

        message.setWindowTitle("Nuevo Usuario");
        message.setText("Usuario nuevo creado.");
        message.exec();
    }
}

void Admin::validateUser(QString name, QString password)
{
    unsigned int i;

    bool found = false;

    for (i=0; i < users.size(); ++i)
    {
        if(users[i].getUserName() == name && users[i].getPassword() == password){

            mainWindow = new MainWindow(&users[i]);

            connect(mainWindow,
                    SIGNAL(saveUs(QJsonArray)),
                    this,
                    SLOT(guardarContacto(QJsonArray)) );

            connect(mainWindow,
                    SIGNAL(salir()),
                    this,
                    SLOT(cerrarSesion()));

            mainWindow->show();
            login->hide();
            found = true;
            break;
        }
    }

    if(!found){
        QMessageBox message;
        message.setWindowTitle("Error");
        message.setText("Usuario o contraseña Invalido");
        message.exec();
    }

}

void Admin::guardarContacto(QJsonArray jsonArray)
{

   this->jsonArray = jsonArray;
    saveDB();
}

void Admin::cerrarSesion()
{
    login->show();
}
