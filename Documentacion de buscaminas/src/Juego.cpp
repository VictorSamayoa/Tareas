#include "Juego.h"   //Archivo del encabezado de la clase "Juego"
#include <fstream>   //Biblioteca estandar para poder manejar archivos de texto
#include <unistd.h>  //biblioteca del nombre del archivo de encabezado que brinda acceso a la API del sistema operativo POSIX


//se genera un numero aleatorio en el rango especificado
int Juego::aleatorio_en_rango(int minimo, int maximo)
	{
		return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
	}


	//obtener una fila aleatoria del tablero
	int Juego::filaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
	}


    //obtener una columna aleatoria del tablero
	int Juego::columnaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
	}


    //Constructor de la clase tablero, inicializa e juego con la cantidad de minas especificadas
	Juego::Juego(Tablero tablero, int cantidadMinas)
	{
       //creacion de parametros de las variables
		this->tablero = tablero;
		this->cantidadMinas = cantidadMinas;
		this->colocarMinasAleatoriamente(); //colocamos minas
	}


    //funcion de minas aleatoriamente en el tablero
	void Juego::colocarMinasAleatoriamente()
	{

		int x, y, minasColocadas = 0;

		while (minasColocadas < this->cantidadMinas)
		{
			x = this->columnaAleatoria();
			y = this->filaAleatoria();

			//coloca una mina en la celda xy
			if (this->tablero.colocarMina(x, y))
			{
				minasColocadas++;//incrementando contador
			}
		}
	}


    //solicitar la fila de donde quiere comenzar el usuario
	int Juego::solicitarFilaUsuario()
	{
		int fila = 0;
		cout << "Ingresa la FILA en la que desea jugar: ";
		cin >> fila;
		return fila - 1;
	}


    //solicitar la columna de donde quiere comenzar el usuario
	int Juego::solicitarColumnaUsuario()
	{
		int columna = 0;
		cout << "Ingresa la COLUMNA en la que desea jugar: ";
		cin >> columna;
		return columna - 1; //retornamos la fila restandole 1
	}


    // obtencion para ver si el jugador ha ganado el juego
	bool Juego::jugadorGana()
	{
	    //celdas sin minas y sin descubrir
		int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();

		//Al no haber minas y sin descubrir el jugador ha ganado
		if (conteo == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

    //iniciar el juego
	void Juego::iniciar()
	{

		int fila, columna;

		while (true)
		{
		    //se imprime el tablero
			this->tablero.imprimir();
			fila = this->solicitarFilaUsuario();
			columna = this->solicitarColumnaUsuario();

			//almacenando la si la mina fue descubierta
			bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);

			//si se encuentra la mina se manda el mensaje "perdiste el juego"
			if (!respuestaAUsuario)
			{
				cout << "Perdiste el Juego\n";
				this->tablero.setModoDesarrollador(true);
				this->tablero.imprimir();
				break;
			}
			//mensaje de ganador del juego
			if (this->jugadorGana())
			{
				cout << "Ganaste el Juego\n";
				this->tablero.setModoDesarrollador(true); //modo desarrollador activado
				this->tablero.imprimir(); //imprimiendo el tablero
				break;
			}
		}
	}
