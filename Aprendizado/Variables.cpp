#include <iostream>

int main(){
    //numeros inteiros
    int age = 21;
    int year = 2004;
    int days = 12; 
    
    // numeros decimais
    double idade = 20;
    double anos = 2005;
    double dolar = 6.31;

    //Letras
    char letra_0 = 'A';
    char letra_1 = 'L';

    //Booleano
    bool student = false;
    bool material = true;
    bool good = true;

    //string(sequência de texto)
    std::string name = "Lucas";
    std::string tipo = "Fogo";
    std::string peso = "125 kg";

    //juntar ideias
    std::cout << name << " um pokemon do tipo " << tipo << "\n pesando cerca de " << peso << "\n tem a idade de " << idade << "\n nascendo no ano de " << anos << " ."<<std::endl; 
    return 0;
}