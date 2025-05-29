#include <iostream>

int main() {

    double temp;
    char unit;
    double f;
    double c;
    
    std::cout << "*******************Temperature_Calculator*******************\n";
    std::cout << "Temperature in Fahrenheit (F): \n";
    std::cout << "Temperature in Celsius (C): \n";
    std::cout << "Select a Form: (F) or (C)\n";
    std::cin  >> unit;
    switch (unit)
    {
    case 'C':
    case 'c':
        std::cout << "Diga a temperatura em celsius :\n";
        std::cin >> temp;
        f = (temp * 9.0 / 5.0) + 32;
        std::cout << "A temperatura em F eh :"<< f << "\n";
        break;
        
    case 'F':
    case 'f':
        std::cout << "Diga a temperatura em fahrenheit :\n";
        std::cin >> temp;
        c = (temp - 32)/9.0 * 5.0;
        std::cout << "A temperatura em C eh :"<< c << "\n";
        break;
    default:
        std::cout << "Opção inválida. Por favor, use 'C' ou 'F'.\n";
        break;
    }
    std::cout << "************************************************************\n";
    return 0;
}