#include "Tablero.h" //Archivo del encabezado de la clase "Tablero"
#include <sstream>
#include <iostream>


using namespace std;


//Constructor Tablero
Tablero::Tablero()
{
}


//Constructor tablero con sus parametros
Tablero::Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador)
{
   //creacion de parametros de las variables
    this->alturaTablero = alturaTablero;
    this->anchoTablero = anchoTablero;
    this->modoDesarrollador = modoDesarrollador;

    //creacion de altura del tablero mediante el bucle
    int x, y;
    for (y=0; y < this->alturaTablero; y++)
    {
        vector<Celda> fila; //almacena las celdas de una fila

        //creacion de una nueva celda y se agrega a la fila
        for (x=0; x < this->anchoTablero; x++)
        {
            fila.push_back((Celda(x, y, false)));
        }
        this->contenidoTablero.push_back(fila); // le devuelve el contenido a la fila
    }
}

//Obtenemos la altura del tablero
int Tablero::getAlturaTablero()
{
    return this->alturaTablero;
}


//se da la altura del tablero
int Tablero::setAlturaTablero(int alturaTablero)
{
    this->alturaTablero = alturaTablero;
}


//Obtenemos el ancho del tablero
int Tablero::getAnchoTablero()
{
    return this->anchoTablero;
}


//se da el ancho del tablero
int Tablero::setAnchoTablero(int anchoTablero)
{
    this->anchoTablero = anchoTablero;
}


//Obtenemos el modo desarrollador
bool Tablero::getModoDesarrollador()
{
    return this->modoDesarrollador;
}


//se da el modo desarrollador
bool Tablero::setModoDesarrollador(bool modoDesarrollador)
{
    this->modoDesarrollador = modoDesarrollador;
}

//se representa la celda de las cordenadas especificadas
string Tablero::getRepresentacionMina(int coordenadaX, int coordenadaY)
{
    Celda celdaTemporal = this->contenidoTablero.at(coordenadaY).at(coordenadaX);


    if (celdaTemporal.getMinaDescubierta() || this->modoDesarrollador)
    {

        if (celdaTemporal.getMina())
        {
            return "*";
        }

        //Si la mina no esta en la celda, obtenemos un numero de minas cercanas
        else
        {
            int cantidadCelda=this->minasCercanas(coordenadaY,coordenadaX);
            string cantidadCeldaString = " ";
            stringstream ss;
            ss << cantidadCelda;
            ss >> cantidadCeldaString;
            return cantidadCeldaString; //devolviendo el numero de minas cercanas
        }
    }
    else
    {
        return "?"; //Si no se descubre la mina se devuelve "?"
    }
}
//se buscan las minas cernaas al tablero
int Tablero::minasCercanas(int filaTablero, int columnaTablero)
{

        int contadorTablero = 0;
        int filaInicioTablero, filaFinTablero, columnaInicioTablero, columnaFinTablero;

        if (filaTablero <= 0)
		{
			filaInicioTablero = 0;
		}
		else
		{
			filaInicioTablero = filaTablero - 1;
		}

		if (filaTablero + 1 >= this->alturaTablero)
		{
			filaFinTablero = this->alturaTablero - 1;
		}
		else
		{
			filaFinTablero = filaTablero + 1;
		}

		if (columnaTablero <= 0)
		{
			columnaInicioTablero = 0;
		}
		else
		{
			columnaInicioTablero = columnaTablero - 1;
		}
		if (columnaTablero + 1 >= this->anchoTablero)
		{
			columnaFinTablero = this->anchoTablero - 1;
		}
		else
		{
			columnaFinTablero = columnaTablero + 1;
		}


		int m;

		//busca las celdas para poder contar las minas
		for (m = filaInicioTablero; m <= filaFinTablero; m++)
		{
			int l;
			for (l = columnaInicioTablero; l <= columnaFinTablero; l++)
			{
				if (this->contenidoTablero.at(m).at(l).getMina())
				{
					contadorTablero++;
				}
			}
		}
		return contadorTablero;
}


//imprimir el separador del encabezado
void Tablero::imprimirSeparadorEncabezado()
	{
	    //variable
		int m;
		for (m = 0; m <= this->anchoTablero; m++)
		{
			cout << "----";
			if (m + 2 == this->anchoTablero)
			{
				cout << "-";
			}
		}
		cout << "\n";
	}


    //Funcion para imprimir el separador de filas
	void Tablero::imprimirSeparadorFilas()
	{
		int m;
		for (m = 0; m <= this->anchoTablero; m++)
		{

		    //Delimita las  celdas
			if (m <= 1)
			{
				cout << "|---";
			}
			else
			{
				cout << "+---";
			}

			if (m == this->anchoTablero)
			{
				cout << "+";
			}
		}
		cout << "\n";
	}


    //imprime el encabezado
	void Tablero::imprimirEncabezado()
	{
	    //imprime el separador del encabezado
		this->imprimirSeparadorEncabezado();

		cout << "|   ";
		int l;

		for (l = 0; l < this->anchoTablero; l++)
		{
		    //se imprime el numero de columna
			cout << "| " << l + 1 << " ";

			//el ancho del tablero al terminas se cierra con el simbolo "|"
			if (l + 1 == this->anchoTablero)
			{
				cout << "|";
			}
		}
		cout << "\n";
	}


    //se imprime el tablero con su encabezado y separador del encabezado
	void Tablero::imprimir()
	{
		this->imprimirEncabezado();

		this->imprimirSeparadorEncabezado();
		int x, y;

		for (y = 0; y < this->alturaTablero; y++)
		{

			cout << "| " << y + 1 << " ";

			for (x = 0; x < this->anchoTablero; x++)
			{
				cout << "| " << this->getRepresentacionMina(x, y) << " ";

				if (x + 1 == this->anchoTablero)
				{
					cout << "|";
				}
			}
			cout << "\n";
			this->imprimirSeparadorFilas();
		}
	}


	//establecer la mina en ciertas cordenadas
    bool Tablero::colocarMina(int x, int y)
	{
		return this->contenidoTablero.at(y).at(x).setMina(true);
	}


	//descubrir en la celda especificada
    bool Tablero::descubrirMina(int x, int y)
	{
	    //Marcando la celda descubierta
		this->contenidoTablero.at(y).at(x).setMinaDescubierta(true);

		//obteniendo celda especificada
		Celda celda = this->contenidoTablero.at(y).at(x);

		//si la casilla contiene mina devolvera false
		if (celda.getMina())
		{
			return false;
		}
		//de lo contrario devolvera
		return true;
	}


	//contar las minas sin descubrir y las celdas sin minas del tablero
	int Tablero::contarCeldasSinMinasYSinDescubrir()
	{
		int x, y, contador = 0;

		for (y = 0; y < this->alturaTablero; y++)
		{
			for (x = 0; x < this->anchoTablero; x++)
			{
				Celda celdaTemporal = this->contenidoTablero.at(y).at(x);

				//verificando si la celda no ha sido descubierta y si no contiene mina
				if (!celdaTemporal.getMinaDescubierta() && !celdaTemporal.getMina())
				{
				    //se incrementa el contador
					contador++;
				}
			}
		}
		return contador; // se devuelve al contador
	}
