#include <iostream>
using namespace std;



const int filas = 16;
const int columnas = 16;
int main() {


    for (int x = 0; x < filas; ++x)
        {
        for (int y = 0; y < columnas; ++y)
        {

            if ((x + y) % 2 == 0)
            {
                cout << " ";
            }
            else
            {

                cout << '*';
            }
        }

        cout << endl;
    }

    return 0;
}
