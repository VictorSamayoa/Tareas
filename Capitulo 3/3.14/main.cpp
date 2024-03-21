#include <iostream>
#include <string>

using namespace std;

//Creacion de clase publica llamada empleado
class Empleado
{

public:

   //Constructor del empleado
    Empleado(string Nombre, string Apellido, double Salario1)
{

    //variables
    mNombre = Nombre;
    mApellido = Apellido;

   //Se dice que el salario no debe ser negativo

    if (Salario1 > 0)
    {
        Salario = Salario1;
    }
    else
    {
        Salario = 0;
    }
}
    // Funciones para Obtencion de nombre, apellido y salario
    void NombreP(string Nombre)
    {
        mNombre = Nombre;
    }

    void ApellidoP(string Apellido)
    {
        mApellido = Apellido;
    }

    void SalarioP(int Salario1)
{
        if (Salario1 > 0)
    {
        Salario = Salario1;
    }
    else
    {
        Salario = 0;
    }
}
//Nombre a obtener
    string ONombre()
    {
        return mNombre;
    }

//apellido a obtener

    string OApellido()
    {
        return mApellido;
    }
//Obtencion de salraio, salario anual y aumentado
    int OSalario()
    {
        return Salario;
    }

    int OSalarioA()
    {
        return Salario * 12;
    }

    int OSalarioAu()
    {
        return Salario *= 1.10;
    }

private:

string mNombre;
string mApellido;
int Salario;


};

int main()
{
    //Variables
    string NombreE1, ApellidoE1, NombreE2, ApellidoE2;
    int SalarioE1, SalarioE2;

// Datos del empleados

    cout << " nombre del empleado 1: ";
    cin >> NombreE1;

    cout << " apellido del empleado 1: ";
    cin >> ApellidoE1;

    cout << " Ingresar el salario empleado 1: ";
    cin >> SalarioE1;


    cout << " nombre del empleado 2: ";
    cin >> NombreE2;

    cout << " apellido del empleado 2: ";
    cin >> ApellidoE2;

    cout << " salario mensual del empleado 2: ";
    cin >> SalarioE2;


    Empleado Empleado1(NombreE1, ApellidoE1, SalarioE1);
    Empleado Empleado2(NombreE2, ApellidoE2, SalarioE2);

    cout << "El empleado 1 " << Empleado1.ONombre() << " " << Empleado1.OApellido() << " salario anual de Q" << Empleado1.OSalarioA() << endl;
    cout << "El empleado 2 " << Empleado2.ONombre() << " " << Empleado2.OApellido() << " salario anual de Q" << Empleado2.OSalarioA() << endl;

    Empleado1.OSalarioAu();
    Empleado2.OSalarioAu();

    cout << "El empleado 1 " << Empleado1.ONombre() << " " << Empleado1.OApellido() << " salario anual aumentado de Q" << Empleado1.OSalarioA() << endl;
    cout << "El empleado 2 " << Empleado2.ONombre() << " " << Empleado2.OApellido() << " salario anual aument de Q" << Empleado2.OSalarioA() << endl;
}
