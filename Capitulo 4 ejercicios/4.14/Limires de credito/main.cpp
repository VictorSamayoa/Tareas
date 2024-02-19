#include <iostream>

using namespace std;

float Saldo_inicial = 0;
float Cargos_Totales = 0;
float Creditos_Totales = 0;
float Limite_de_credito = 0;
float Nuevo_saldo = 0;
int numero_cuenta = 0;
int fin = 1;
int main()
{
    while (fin == 1)
    {
        cout << "Escriba el numero de cuenta:"<< endl;
        cin >> numero_cuenta;

        cout << "Escriba el saldo incial: "<< endl;
        cin >> Saldo_inicial;

        cout << "Escriba Cargos Totales: "<< endl;
        cin >> Cargos_Totales;

        cout << "Escriba Creditos Totales: "<< endl;
        cin >> Creditos_Totales;

        cout << "Escriba el limite de credito: "<< endl;
        cin >> Limite_de_credito;

        Nuevo_saldo = ( Saldo_inicial + Cargos_Totales)-Creditos_Totales;

         cout << "saldo incial: "<< Saldo_inicial << endl;

         cout << "Cargos totales: "<< Cargos_Totales << endl;

         cout << "limite de credito: " << Limite_de_credito << endl;

         cout << "Nuevo Saldo: "<<Nuevo_saldo << endl;

            if (Nuevo_saldo > Limite_de_credito)
            {
                std::cout << "Cuenta: "<< numero_cuenta << endl;

                std::cout << "Se exedio el limite de su credito " << endl;

            }
            else if (Nuevo_saldo < Limite_de_credito)
            {
                std::cout << "Cuenta: "<< numero_cuenta << endl;

                std::cout << "No exedio el limite" << endl;
            }
               cout << "Si desea finalizar ingrese -1 de lo contrario ingrese 1:"<< endl;
               cin >> fin;

    }


}


















