#include <iostream>

using namespace std;


int main() {
    const int filas = 16;
    const int columnas = 16;

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {

            if ((i + j) % 2 == 0) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
