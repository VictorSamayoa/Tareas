#include <iostream>
#include <cmath>

using namespace std;
int peso = 0;
int altura = 0;
double BMI = 0;
int main()
{
    cout << "Ingrese su peso corporal en libras" << endl;
    cin >> peso;


    cout << "Ingrese su altura en pulgadas" << endl;
    cin >> altura;

    BMI = (peso / pow(altura, 2)) * 703;

    cout << "Su BMI ES:"<< BMI << endl;
    cout << " \n"<< endl;
    cout << "Valores del BMI" << endl;
    cout << "Bajo peso: menos de 18.5" << endl;
    cout << "Normal: entre 18.5 y 24.9" << endl;
    cout << "Sobrepeso: entre 25 y 29.9" << endl;
    cout << "obeso : 30 0 mas" << endl;

    return 0;
}
