#include "Alumno.h"
#include <iostream>
#include <iomanip>

using namespace std;

Alumno::Alumno(string nombre) : nombre(nombre) {}

void Alumno::agregarNota(float nota) {
    notas.push_back(nota);
}

float Alumno::getPromedio() {

}

void Alumno::imprimir() {

}



