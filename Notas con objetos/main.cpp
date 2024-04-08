#include "notas.h"
#include "Alumno.h"
#include "Utilidades.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {

    srand(getpid());

    vector<notas> facultades;
    facultades.emplace_back("Facultad de Ingenieria");
    facultades.emplace_back("Facultad de Arquitectura");
    facultades.emplace_back("Facultad de Administracion");

    char opcion;
    do {
        cout << "*** Comparativo de Facultades ***" << endl << endl;
        for (notas &notas : facultades) {
            notas.imprimirMatriz();
        }
        cout << "Desea otro calculo (s/n)? ";
        cin >> opcion;
    } while (opcion == 's');

    return 0;
}
