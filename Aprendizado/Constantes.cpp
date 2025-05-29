#include <iostream>

int main () {
    double pi = 3.14159;
    double radius = 10;
    double circunference = 2 * radius * pi;
    std::cout << circunference << "cm " <<std::endl;

    /*
    Constante que não mudam utilizam a variàvel const antes do tipo, o que não modifica nem a pau a primeira constante
    ex:
    const double PI = 3.14159
    PI = 3
    "Error PI"
    Meio que ela vira uma variável global
    */
    const double PI = 3.14159;
    const double RAIO = 10;
    const double CIRCU = 2 * RAIO * PI;
    std::cout << CIRCU << "cm " <<std::endl;
    return 0;
}