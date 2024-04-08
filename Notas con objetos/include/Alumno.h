#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>
#include <vector>

class Alumno {
private:
    std::string nombre;
    std::vector<float> notas;

public:
    Alumno(std::string nombre);
    void agregarNota(float nota);
    float getPromedio();
    void imprimir();
};

#endif
