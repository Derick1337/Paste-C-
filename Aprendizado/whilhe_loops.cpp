#include <iostream>

int main(){
    
    //While Loops

    /*
    std:: string name;

    while(name.empty()){//ele sempre vai repetir quando verificar que o vetor não estiver entrada
        std::cout << "Coloque seu nome: ";
        std::getline(std::cin, name);
    }
    std::cout << "Hello " << name << ".\n";*/

    // Do while Loops funciona de acordo com a condição dada a situação ele primeiro roda o código e depois vê a situação

    int number;

    do{
        std::cout << "Coloque um num positivo :";
        std::cin >> number;
    }while(number < 0);

    std::cout << "o num eh :" << number ;

    return 0;

}
