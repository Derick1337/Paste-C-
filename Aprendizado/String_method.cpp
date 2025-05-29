#include <iostream>

int main() {
    
    std::string name;
    std::cout << "Coloque seu nome: ";
    std::getline(std::cin, name);
    //tamanho da variavel
    
    /*
    if(name.length() > 12){
        std::cout << "Seu nome nao pode ser maior do que 12 caracteres";
    }
    else{
        std::cout << "welcome " << name << "." ;
    }*/
    
    //Verificar variável
    
    /*
    if(name.empty()){
        std::cout << "voce nao colocou nada \n";
    }
    else{
        std::cout << "Hello " << name << ".";
    }*/

    //limpar a variável

    /*
    name.clear();
    std::cout << "Hello " << name << ".";
    */

    //adicionar variavel
    std::cout << "Your email is " << name << ".\n";
    std::cout << name.at(0)<<"\n";//coloca só uma letra da string a que é da posição
    name.insert(0,"#\n");//adiciona caractere da asc2 e adiciona na posicão do vetor incrementando à
    name.append("@gmail.com");//adiciona uma string sem valor (alocação dinamica)
    std::cout << name << "\n";
    std::cout << name.find('@') << "\n";//encontra a posição do vetor
    name.erase(0, 5); //funciona como uma borracha ela apaga até antes do vetor final
    std::cout << name;
    return 0;
}