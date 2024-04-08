#ifndef notas_H
#define notas_H

#include <string>

class notas {
private:
    static const int NUMERO_ALUMNOS = 5;
    static const int NUMERO_NOTAS = 4;
    static const int MIN_CALIFICACION = 0;
    static const int MAX_CALIFICACION = 100;
    static const int MAXIMA_LONGITUD_CADENA = 100;

    std::string nombre;
    float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
    std::string alumnos[NUMERO_ALUMNOS] = {"Carlos", "Luis", "Maria", "Pedro", "Juan"};

    int busquedaAleatorios(int minimo, int maximo);
    void llenarMatriz();
    void imprimirMatrizLinea();


public:
    notas(std::string nombre);
    float getPromedio();
    void imprimir();
    void imprimirMatriz();

};

#endif
