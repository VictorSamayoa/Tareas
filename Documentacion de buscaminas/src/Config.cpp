#include <iostream>
#include <unistd.h>
#include "Config.h" //Archivo del encabezado de la clase Config


using namespace std;


//Constructor de la clase config
Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero)
{
   //creacion de parametros de las variables
    this->filasTablero = filasTablero;
    this->columnasTablero = columnasTablero;
    this->minasTablero = minasTablero;
    this->modoDesarrolladorTablero = modoDesarrolladorTablero;
    this->vidasTablero = vidasTablero;
}


//se muestra el menu la configuracion que permite cambiar los valores
void Config::menuConfiguracion()
{
    int opciones;
    int valorIngresado;

    bool repetir = true; //se repite el menu de la configuracion


    //Inicio del ciclo do while
    do
    {
        system("cls"); //Limpiamos pantalla

        //se imprime el menu
        cout << "\n\n\t\tCONFIGURACION ACTUAL -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Filas del Tablero ----> " << this->getfilasTablero() << endl;
        cout << "\t\t2. Columnas del Tablero -> " << this->getcolumnasTablero() << endl;
        cout << "\t\t3. Minas del Tablero ----> " << this->getminasTablero() << endl;
        cout << "\t\t4. Modo del Juego -------> " << this->getmodoDesarrolladorTablero() << endl;
        cout << "\t\t5. Vidas del Jugador ----> " << this->getvidasTablero() << endl;
        cout << "\t\t6. Regresar al menu general" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;

        // se brindan las opciones a elegir
        if (opciones!=6)
        {
            cout << "\n\tIngrese el valor que desea cambiar: ";
            cin >> valorIngresado;
        }

        switch (opciones)
        {


        //filas del valor nuevo ingresador
        case 1:
            {
                this->setfilasTablero(valorIngresado);
                cout << "Filas del Tablero actualizadas" << endl;
                break;
            }


        //columnas del valor nuevo ingresado
        case 2:
            {
                this->setcolumnasTablero(valorIngresado);
                cout << "Columnas del Tablero actualizadas" << endl;
                break;
            }


        //cantidad nueva de minas en el tablero
        case 3:
            {
                this->setminasTablero(valorIngresado);
                cout << "Minas del Tablero actualizadas" << endl;
                break;
            }


        //actualizacion el modo desarrollador
        case 4:
            {
                this->setmodoDesarrolladorTablero(valorIngresado);
                cout << "Modo del Juego actualizado" << endl;
                break;
            }


        //vidas del usuario (intentos)
        case 5:
            {
                this->setvidasTablero(valorIngresado);
                cout << "Vidas del Juego actualizadas" << endl;
                break;
            }


        //se sale del juego
        case 6: repetir = false;
                break;
        }
        system("pause"); //Pausa la ejecucion del programa
    } while (repetir); //Repite todo el bucle


//obtener las filas del tablero
int Config::getfilasTablero()
{
    return this->filasTablero;
}


//establecer las filas del tablero
int Config::setfilasTablero(int filasTablero)
{
    this->filasTablero=filasTablero;
}


//obtener las columnas del tablero
int Config::getcolumnasTablero()
{
    return this->columnasTablero;
}


//establecer las colummnas del tablero
int Config::setcolumnasTablero(int columnasTablero)
{
    this->columnasTablero=columnasTablero;
}


//obtener minas del tablero
int Config::getminasTablero()
{
    return this->minasTablero;
}


//Funcion para establecer las minas del tablero
int Config::setminasTablero(int minasTablero)
{
    this->minasTablero=minasTablero;
}


//obtener el modo desarrollador
bool Config::getmodoDesarrolladorTablero()
{
    return this->modoDesarrolladorTablero;
}


//establecer el modo desarrollador del tablero
bool Config::setmodoDesarrolladorTablero(bool modoDesarrolladorTablero)
{
    this->modoDesarrolladorTablero=modoDesarrolladorTablero;
}


//obtener las vidas del usuario
int Config::getvidasTablero()
{
    return this->vidasTablero;
}


//establecer las vidas del usuario
int Config::setvidasTablero(int vidasTablero)
{
    this->vidasTablero=vidasTablero;
}


