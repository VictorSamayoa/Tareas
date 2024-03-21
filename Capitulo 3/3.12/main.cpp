#include <iostream>
using namespace std;


//Creacion de la clase llamda Cuenta
class Cuenta
{
public:

    //constructor
    Cuenta(double SaldoI)
    {

    if (SaldoI >= 0)
    {
        Saldo = SaldoI;
    }

    else
    {
        cout << "Saldo invalido" << endl;
    }
}

    void abonarS(double monto)
    {
    //VALIDAR QUE EL MONTO SEA MAYOR A 0
    if(monto > 0)
    {
        Saldo+= monto;
        cout << " El monto abonado es:  " << monto << " a la cuenta consta del siguiente saldo: " << Saldo << endl;
    }

    else
    {
        cout << "Por favor ingrese Monto mayor a 0" << endl;
    }
    }


    //Cargo del monto
    void cargarS (double monto)
    {

//Validacion de datos del monto
    if(monto <= Saldo)
    {
        Saldo -= monto;
        cout << " Monto retirado: "  << monto << " saldo actual de la cuenta: " << Saldo << endl;
    }

    else
    {
        cout << " Este monto exede al saldo actual" << endl;
    }
}



    void SaldoObtenido()
    {
        cout << " El saldo actual: " << " Q " << Saldo << endl;
    }
private:
//Almacenamiento de datos para el saldo
    double Saldo;
    };




int main()
{
    double C1,abonarSC1,cargarSC1,C2,abonarSC2,cargarS2;



//Datos de las cuentas
    cout << " Ingrese el saldo de la cuenta 1: ";
    cin >> C1;
    Cuenta cuenta1(C1);

    cout << " Ingrese el saldo de la cuenta 2: ";
    cin >> C2;
   Cuenta cuenta2(C2);




//Cuenta 1
    cout << " Ingresar el monto que desea abonar a la cuenta 1: ";
    cin >> abonarSC1;

    cuenta1.abonarS(abonarSC1);

    cout << " Ingresar el monto a cargar a la cuenta 1: ";
    cin >> cargarSC1;

    cuenta1.cargarS(cargarSC1);


//Cuenta 2
    cout << "Ingresar el monto que desea abonar a la cuenta 2: ";
    cin >> abonarSC2;

    cuenta2.abonarS(abonarSC2);

    cout << "Ingresar el monto a cargar a la cuenta 2: ";
    cin >> cargarS2;

    cuenta2.cargarS(cargarS2);




  cout << " El saldo de la cuenta 1 tiene un total de :"; cuenta1.SaldoObtenido();
  cout << " El saldo de la cuenta 2 tiene un total de :"; cuenta2.SaldoObtenido();
}
