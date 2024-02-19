#include <iostream>

int main() {
    int salida = 1;
    double horas, tarifa, salario;

    while (salida == 1) {
        std::cout << "Ingrese las horas trabajadas: ";
        std::cin >> horas;

        std::cout << "Ingrese la tarifa de horas del empleado: ";
        std::cin >> tarifa;

        if (horas >= 41) {
            salario = horas * tarifa + (tarifa / 2);
        } else if (horas < 40) {
            salario = horas * tarifa;
        }

        std::cout << "El salario a pagar es: " << salario << std::endl;

        std::cout << "Si desea salir del programa, escriba -1. Si desea continuar, ingrese 1: ";
        std::cin >> salida;
    }

    return 0;
}

