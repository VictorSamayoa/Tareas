//creacion del los archivos encabezado y definicion de estos
#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h" //se agrega el encabezado tablero

// creacion de clase Juego
class Juego
{

//atributos privados
private:
	Tablero tablero;    //se llama a Tablero
	int cantidadMinas; //cantidad de minas

	//generacion de numeros aleatoreos
	int aleatorio_en_rango(int minimo, int maximo);
	int filaAleatoria();
	int columnaAleatoria();

//atributos Publicos
public:

    //Constructor de la clase juego
    Juego(Tablero tablero, int cantidadMinas);

    //crea minas aleatoriamente
	void colocarMinasAleatoriamente();

	//le solicita cuantas filas quiere el usuario para jugar
	int solicitarFilaUsuario();

	//le solicita cuantas columnas quiere el usuario para jugar
	int solicitarColumnaUsuario();

	//Fverificar si el jugador gano
	bool jugadorGana();

	//Funcion para iniciar el juego
	void iniciar();

	//dibuja la portada del juego
	void dibujarPortada(string nombreArchivo);
};

#endif // finaliza el encabezado juego
