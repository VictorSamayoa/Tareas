#include "notas.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

notas::notas(string nombre) : nombre(nombre) {
    llenarMatriz();
}

int notas::busquedaAleatorios(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void notas::llenarMatriz() {
   for (int y = 0; y < NUMERO_ALUMNOS; y++) {
        for (int x = 0; x < NUMERO_NOTAS; x++) {
            matriz[y][x] = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
        }
        // Calcular suma de calificaciones y agregar promedio
        float suma = 0;
        for (int x = 0; x < NUMERO_NOTAS; x++) {
            suma += matriz[y][x];
        }
        matriz[y][NUMERO_NOTAS] = suma / NUMERO_NOTAS;
    }
}


void notas::imprimirMatrizLinea()
{
    //Funciòn que despliega titulo de cada nota calculada
    int x;

    cout << "+--------";
    for (x = 0; x < NUMERO_NOTAS + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}

float notas::getPromedio() {

}
void notas::imprimir() {
    // Implementación
}
void notas::imprimirMatriz() {
    cout << nombre << endl;
    cout << setw(16) <<  "Pp" << setw(10) << "SP" << setw(10)<< "TP" << setw(12)<< "Final" << endl;
    cout << setw(8) << "Alumno";
    for (int x = 0; x < NUMERO_NOTAS; x++) {
        cout << setw(9) << "Nota" << x + 1;
    }
    cout << setw(8) << "Total" << endl;
    for (int y = 0; y < NUMERO_ALUMNOS; y++) {
        cout << setw(9) << alumnos[y];
        for (int x = 0; x < NUMERO_NOTAS; x++) {
            cout << setw(9) << matriz[y][x];
        }
        cout << setw(10) << fixed << setprecision(2) << matriz[y][NUMERO_NOTAS] << endl;
    }
}
