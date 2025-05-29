#include <iostream>

int main() { 
       //uma estrutuda que cosegue armazenar varios valores do mesmo tipo que podem ser acessados por um indice

/*    Car Examples

    std::string cars[3];// = {"Corvete", "Mustang", "Camry"};
    cars[0] = "Corvete"; // Atribui o valor "Corvete" ao primeiro elemento do array
    cars[1] = "Mustang"; // Atribui o valor "Mustang" ao segundo elemento do array
    cars[2] = "Camry"; // Atribui o valor "Camry" ao terceiro elemento do array
    std::cout << "_________________\n";


    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';
    std::cout <<"_________________\n";
    
    cars[0] = "Ferrari"; // Modifica o valor do primeiro elemento do array
    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';
    */


    double prices[] = {5.00, 7.50, 9.99, 15.00};

    std::cout << prices[0] << '\n'; // Acessa o primeiro elemento do array
    std::cout << prices[1] << '\n'; // Acessa o segundo elemento do array
    std::cout << prices[2] << '\n'; // Acessa o terceiro elemento do array
    std::cout << prices[3] << '\n'; // Acessa o quarto elemento do array

    return 0;
}s