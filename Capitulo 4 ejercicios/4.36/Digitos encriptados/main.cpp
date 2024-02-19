#include <iostream>
using namespace std;


int encriptar(int numero)
{

    int v1;
    int v2;
    int v3;
    int v4;


    v1 = (numero / 1000 + 7) % 10;
    v2 = ((numero / 100) % 10 + 7) % 10;
    v3 = ((numero / 10) % 10 + 7) % 10;
    v4 = (numero % 10 + 7) % 10;


    return v3 * 1000 + v4 * 100 + v1 * 10 + v2;
}


int desencriptar(int encri)
{

    int v1;
    int v2;
    int v3;
    int v4;


    v1 = (encri / 1000 - 7 + 10) % 10;
    v2 = ((encri / 100) % 10 - 7 + 10) % 10;
    v3 = ((encri / 10) % 10 - 7 + 10) % 10;
    v4 = (encri % 10 - 7 + 10) % 10;

    return v3 * 1000 + v4 * 100 + v1 * 10 + v2;
}


int main()
{

    int Original;
    int codificado;
    int Desencriptado;


    cout << "Ingrese un numero entero de cuatro digitos: ";
    cin >> Original;


    codificado = encriptar(Original);
    cout << "El numero codificado es: " << codificado << endl;


    Desencriptado = desencriptar(codificado);
    cout << "El numero desencriptado (numero original) es: " << Desencriptado << endl;

    return 0;
}
