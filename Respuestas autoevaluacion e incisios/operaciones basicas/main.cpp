#include <iostream>

using namespace std;
int x = 0;
int y = 0;
int suma = 0;
int resta = 0;
int multi = 0;
int divi = 0;
int main()
{
    cout << "INTRODUCE DOS NUMEROS:"<< endl;
     cin >> x >> y;

     suma = x + y;
     resta = x - y;
     multi = x * y;
     divi = x / y;
     cout << "la suma es:" << suma <<endl;
     cout << "la resta es:" << resta <<endl;
     cout << "la multiplicacion es:" << multi <<endl;
     cout << "la divicion es:" << divi <<endl;


    return 0;
}
