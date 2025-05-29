#include <iostream>

int main() {

    std::string nome;

    std::cout <<"Qual seu nome Profeta?: ";

//    std::cin >> nome;   isso aqui é para palavras ou coisas sem espaço
    std::getline(std::cin >> std::ws, nome);

    int idade;
    
    std::cout <<"Qual a sua idade Profeta?: ";
    
    std::cin >> idade;
    
    std::cout << "A paz do Senhor, irmao " << nome << "\n";
    
    std::cout << "Olha irmao eu tenho " << idade << " de anos de ministerio \n";
    


    return 0;
}