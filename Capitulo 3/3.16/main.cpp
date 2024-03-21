#include <iostream>
#include <string>
using namespace std;
//Se crea la clase FrecuenciasCardiacas
class FrecuenciasCardiacas
{
public:
//Se declara las variables de la persona
    FrecuenciasCardiacas(string nombre, string apellido, int mesNacimiento, int diaNacimiento, int anioNacimiento, int mesActual, int diaActual, int anioActual)

        : pNombre(nombre), pApellido(apellido), pMesNacimiento(mesNacimiento), pDiaNacimiento(diaNacimiento), pAnioNacimiento(anioNacimiento), pMesActual(mesActual), pDiaActual(diaActual), pAnioActual(anioActual) {}
//Se pide el año, mes y dia actual
    int oEdad() {
        int edad = pAnioActual - pAnioNacimiento;
        if (pMesActual < pMesNacimiento || (pMesActual == pMesNacimiento && pDiaActual < pDiaNacimiento)) {
            edad--;
        }
        return edad;
    }
//Se obtiene la frecuancia cardiaca del pasiente
    int FrecuenciaCardiacaMaxima()
    {
        return 220 - oEdad();
    }


    int FrecuenciaCardiacaEsperadaMaxima()
    {
        return FrecuenciaCardiacaMaxima() * 0.85;
    }

private:
    string pNombre;
    string pApellido;
    int pMesNacimiento;
    int pDiaNacimiento;
    int pAnioNacimiento;
    int pMesActual;
    int pDiaActual;
    int pAnioActual;
};

int main() {
    //Variables para obtencion de la persona
    string nombre, apellido;
    int mesNacimiento, diaNacimiento, anioNacimiento;
    int mesActual, diaActual, anioActual;
//Obtencion de datos del paciente a evaluar
    cout << "Ingrese nombre: ";
    cin >> nombre;

    cout << "Ingrese apellido: ";
    cin >> apellido;

    cout << "Ingrese el mes de nacimiento (1-12): ";
    cin >> mesNacimiento;

    cout << "Ingrese el dia de nacimiento: ";
    cin >> diaNacimiento;

    cout << "Ingrese el anio de nacimiento: ";
    cin >> anioNacimiento;

    cout << "Ingrese el mes actual: ";
    cin >> mesActual;

    cout << "Ingrese el dia actual: ";
    cin >> diaActual;

    cout << "Ingrese el anio actual: ";
    cin >> anioActual;

    FrecuenciasCardiacas persona(nombre, apellido, mesNacimiento, diaNacimiento, anioNacimiento, mesActual, diaActual, anioActual);

    //Recoleccion y mostrar en pantalla los datos de la pesona

    cout << "Informacion de la persona:" << endl;

    cout << "Nombre: " << nombre << " " << apellido << endl;

    cout << "Fecha de nacimiento: " << mesNacimiento << "/" << diaNacimiento << "/" << anioNacimiento << endl;

    int edad = persona.oEdad();

    cout << "Edad: " << edad << " anios" << endl;

    //Mostrar en pantalla los datos de frecuencia cardica de la pesona


    int frecuenciaMaxima = persona.FrecuenciaCardiacaMaxima();

    cout << "Frecuencia cardiaca maxima: " << frecuenciaMaxima << " pulsos por minuto" << endl;


    int FrecuenciaCardiacaEsperadaMaxima = persona.FrecuenciaCardiacaMaxima();

    cout << "Rango de frecuencia cardiaca esperada: " << " - " << FrecuenciaCardiacaEsperadaMaxima << " pulsos por minuto" << endl;

    return 0;
}
