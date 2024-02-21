#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

const int equipos = 6;
const int goles = 10;


struct Partido {
    string Locales;
    string equipoVisitante;
    int golesLocal;
    int golesVisitante;
};

int generarGolesAleatorios() {
    return rand() % (goles + 1);
}


    void mostrarTablaEquipos(const vector<string>& nombresEquipos, const vector<Partido>& partidos) {
    cout << "Tabla de equipos:\n";
    cout << "------------------\n";
    cout << "Equipo\tPartidos Jugados\tGanados\tPerdidos\tEmpatados\n";

    vector<int> partidosJugados(equipos, 0);
    vector<int> partidosGanados(equipos, 0);
    vector<int> partidosPerdidos(equipos, 0);
    vector<int> partidosEmpatados(equipos, 0);


    for (const Partido& partido : partidos) {
        partidosJugados[partido.golesLocal]++;
        partidosJugados[partido.golesVisitante]++;
        if (partido.golesLocal > partido.golesVisitante) {
            partidosGanados[partido.golesLocal]++;
            partidosPerdidos[partido.golesVisitante]++;
        } else if (partido.golesLocal < partido.golesVisitante) {
            partidosGanados[partido.golesVisitante]++;
            partidosPerdidos[partido.golesLocal]++;
        } else {
            partidosEmpatados[partido.golesLocal]++;
            partidosEmpatados[partido.golesVisitante]++;
        }
    }


    for (int i = 0; i < equipos; ++i) {
        cout << nombresEquipos[i] << "\t" << partidosJugados[i] << "\t\t"
             << partidosGanados[i] << "\t" << partidosPerdidos[i] << "\t\t"
             << partidosEmpatados[i] << "\n";
    }
}

int main() {
  //INgresamos los nombres de los equipos en este caso seran de formanual en el codigo.
    vector<string> nombresEquipos = {"Xela", "Coban", "Chipas", "Betis", "Rojos", "Cremas"};


    vector<Partido> partidos;
//En esta parte lo que haremos es que se generaran los partidos de forma aleatorea
    for (int i = 0; i < equipos; ++i) {
        for (int j = i + 1; j < equipos; ++j) {
            Partido partido;
            partido.Locales = nombresEquipos[i];
            partido.equipoVisitante = nombresEquipos[j];
            partido.golesLocal = generarGolesAleatorios();
            partido.golesVisitante = generarGolesAleatorios();
            partidos.push_back(partido);
        }
    }

//SE MUESTRA LA TABLA A CREAR
    mostrarTablaEquipos(nombresEquipos, partidos);
    return 0;
}
