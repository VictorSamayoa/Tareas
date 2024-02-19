#include <iostream>

using namespace std;
int perimetro = 0;
int diametro = 0;
double radio = 0;
int circunferencia = 0;
int area = 0;
int main()
{
    cout << "Escriba el radio del circulo:"<< endl;
    cin >> radio;

    area =  3.14159 * radio * radio;

    cout << "El area es:" << area <<endl;

    cout << "Escriba el perimetro del circulo:"<< endl;
    cin >> perimetro;

    diametro = perimetro / 3.14159;

    cout << "El diametro es:" << diametro <<endl;

    circunferencia = 3.14159 * diametro;

    cout << "El circunferencia es:" << circunferencia <<endl;

    return 0;
}
