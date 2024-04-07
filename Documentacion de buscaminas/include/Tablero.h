#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
#include <vector>    // Biblioteca estándar de vectores
#include "Celda.h"   //Archivo del encabezado de la clase "Celda"

using namespace std;


//Clase tablero
class Tablero
{
    //atributos publicos
    public:

        //Constructor tablero
        Tablero();

        //Constructor de la clase tablero
        Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador);

        //se obtiene altura tablero
        int getAlturaTablero();

        //se da la altura tablero
        int setAlturaTablero(int alturaTablero);

        //Obtenemos el ancho del tablero
        int getAnchoTablero();

        //se da el ancho del tablero
        int setAnchoTablero(int anchoTablero);

        //Obtenemos el modo desarrollador
        bool getModoDesarrollador();

        //se da el modo desarrollador
        bool setModoDesarrollador(bool modoDesarrollador);

        //imprimir el tablero mediante las funciones
        void imprimirSeparadorEncabezado();
        void imprimirSeparadorFilas();
        void imprimirEncabezado();
        void imprimir();

        //se coloca la mina en la celda especifica
        bool colocarMina(int x, int y);

        //descubrir la mina en el tablero
        bool descubrirMina(int x, int y);

        //Contar las celdas sin minas y celdas sin descurbir
        int contarCeldasSinMinasYSinDescubrir();

    //atributos protegidos
    protected:

    //atributos privados
    private:
        int alturaTablero, anchoTablero;
        bool modoDesarrollador;
        vector<vector<Celda> > contenidoTablero; //Vector que da el contenido del tablero

        //obtenemos la representacion de una celda en el tablero y contar las minas cercanas
        string getRepresentacionMina(int x, int y);
        int minasCercanas(int fila, int columna);
};

#endif // TABLERO_H
