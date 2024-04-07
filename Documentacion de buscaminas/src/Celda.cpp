#include "Celda.h"  //Archivo del encabezado de la clase "Celda"
#include <iostream>


using namespace std;


//Constructor celda
Celda::Celda()
{
}


//Constructor de la clase celda le agrgaremos las varibales creadas en el -h
Celda::Celda(int coordenadaX, int coordenadaY, bool estadoMina)
{
   //creacion de parametros de las variables
    this->coordenadaX = coordenadaX;
    this->coordenadaY = coordenadaY;
    this->mina = estadoMina;
    this->minaDescubierta = false;
}


//Funcion para establecer la cordenada X
int Celda::setCoordenadaX(int coordenadaX)
{
    this->coordenadaX = coordenadaX;
}


//obtener la cordenada X
int Celda::getCoordenadaX()
{
    return this->coordenadaX;
}


//Establecen las cordenada Y
int Celda::setCoordenadaY(int coordenadaY)
{
    this->coordenadaY = coordenadaY;
}


//obtener la cordenada Y
int Celda::getCoordenadaY()
{
    return this->coordenadaY;
}


//Establecer la mina
bool Celda::setMina(bool estadoMina)
{
    if (this->getMina())
    {
        return false;
    }
    else{
        this->mina = estadoMina;
        return true;
    }
}


//obtener la mina
bool Celda::getMina()
{
    return this->mina;
}


// Establecer la mina descubierta
bool Celda::setMinaDescubierta(bool minaDescubierta)
{
    this->minaDescubierta = minaDescubierta;
}


//Obtener la mina descubierta
bool Celda::getMinaDescubierta()
{
    return this->minaDescubierta;
}

//se imprime la celda con sus cordenadas y si tiene mina
void Celda::imprimirCelda()
{
    cout << "Celda en " << this->coordenadaX << ", " << this->coordenadaY << " con mina? " << this->mina << "\n";
}


