//Se agregan las librerias y los .h para inicializar los objetos
#include <iostream>
#include <unistd.h>
#include "Juego.h"
#include "Config.h"


using namespace std;


int main()
{

    const int FILASTABLERO = 5; //Con constantes asignamos las filas, columnas y minas del tablero
    const int COLUMNASTABLERO = 5;
    const int MINASENTABLERO = 3;
    const bool MODODESARROLLADOR = true; //Se crea el modo desarollador
    const int VIDASTABLERO = 3; //Establecemos las vidas

    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);// instancia para la creacion del videojuego


    //Instancia de la clase juego con parametros

    Juego juego(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());

    srand(getpid()); //Genera numeros aleatorios


    int opciones; // se hacen opciones y se almacenan en el menu


    bool repetir = true; // se repite el ciclo do while


    //Inicio del ciclo
    do
    {
        system("cls"); //limpiar la pantalla


        //Creacion del menu
        cout << "\n\n\t\tBUSCA MINAS -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Configuaracion del Juego" << endl;
        cout << "\t\t2. Iniciar el Juego" << endl;
        cout << "\t\t3. Salir del Juego" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;


        switch (opciones)
        {

        case 1:
            {
                configuracionJuego.menuConfiguracion(); //se llama a funcion configuracionJuego
                break;
            }


        //Se inicia el juego
        case 2:
            {
                //Instancia temporal para luego iniciarla
              	Juego juegoTemporal(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
                juegoTemporal.iniciar();


                system("pause"); //Se pausa la consola
                break;
            }


        case 3: repetir = false; // salida del juego
                break;
        }

    } while (repetir); // se repite para la ejecucion de un nuevo juego
    system("cls"); //Limpiamos pantalla
    return 0;
}
