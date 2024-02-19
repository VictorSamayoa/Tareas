#include <iostream>

using namespace std;
int x = 0;
int y = 0;
int z = 0;
int resul = 0;


int main()
{

    cout << "INTRODUCE TRES NUMEROS:"<< endl;
    cin >> x >> y >> z;
    resul = x * y * z;
    cout << "el producto es:" << resul <<endl;
    return 0;
}
