#include <iostream>
int x = 1;


int main() {



     std::cout << "N\t10N\t100N\t1000N" <<std::endl;

    while (x <= 5)//Dictamina hasta que numero llega
    {

    std::cout << x << "\t" << 10 * x << "\t" << 100 * x << "\t" << 1000 * x <<std::endl;
    ++x;// contador para x que ira de 1 a 5
    }

    return 0;
}

