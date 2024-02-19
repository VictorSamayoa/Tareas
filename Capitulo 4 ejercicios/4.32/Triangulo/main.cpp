#include <iostream>
using namespace std;
double l1;
double l2;
double l3;
int main() {
    // se ingresan los primero 3 valores
    cout << "Ingrese el primer valor ";//v1
    cin >> l1;
    cout << "Ingrese el segundo valor ";//v2
    cin >>  l2;
    cout << "Ingrese el tercer valor ";//v3
    cin >> l3;

    if (l1 +  l2 > l3 && l1 +l3 >  l2 &&  l2+ l3 > l1)
    {
        cout << " si pueden ser Lados del trinagulo" << endl;
    }
    else
    {
        cout << "No es un triangulo" << endl;
    }

    return 0;
}
