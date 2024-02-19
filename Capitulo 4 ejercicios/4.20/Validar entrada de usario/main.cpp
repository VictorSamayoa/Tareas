#include <iostream>
using namespace std;

int main() {
    unsigned int aprobados = 0;
    unsigned int reprobados = 0;
    unsigned int contadorEstudiantes = 1;

    while (contadorEstudiantes <= 10) // Dice cuantos estudiantes se van a evaluar
        {
        cout << "Escriba el resultado (1 = aprobados, 2 = reprobados): ";
        int resultado = 0;
        cin >> resultado;


        while (resultado != 1 && resultado != 2) // Va a validar que los datos sean correctos
        {
            cout << "Valor no valido. Introduzca 1 o 2: ";
            cin >> resultado;
        }

        if (resultado == 1)
            aprobados = aprobados + 1;// deje  como esta en la figura 4.16 para no equivocarse pero se puede hacer un contador como: "aprobados++"
        else
            reprobados = reprobados + 1;

        contadorEstudiantes = contadorEstudiantes + 1;

        cout << "Aprobados: " << aprobados << "\nReprobados: " << reprobados << endl;

        if (aprobados > 8)
            cout << "Bono para el instructor" << endl;
    }

    return 0;
}
