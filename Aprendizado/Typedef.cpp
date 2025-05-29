#include <iostream>

//typedef std::vector<std::pair<std::string, int >> pairlist_t; //transformamos uma coisa que era ernome em algo compacto
typedef std::string text_t; //resume coisas
//typedef int number_t;
using number_t = int;

int main() {
    //Agora vamos ver o Typedef que cria um nome adicional para outro tipo de dados e diminui subjeções grandes
    //pairlist_t pairlist;
    text_t firstname = "Lucas";
    std::cout << firstname << '\n';
    number_t teste = 32;
    std::cout << teste << '\n';
    return 0;
}