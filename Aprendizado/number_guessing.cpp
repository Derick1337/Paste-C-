#include <iostream>
#include <ctime>
int main(){

    srand(time(NULL));

    int numero = rand()% 100 + 1;
    int tentativas = 0;
    int entradas;

    std::cout << "#####################################################NGG#####################################################\n";
    
    do{
        std::cout << "Coloque o numero :";
        std::cin >> entradas;
        tentativas+=1;
        
        if(entradas > numero){
            std::cout << "\nUm pouco alto dms\n";
        }
        else if(entradas < numero){
            std::cout << "\nUm pouco baixo dms\n";
        }
        else{
            std::cout << "\n Correto, suas tentativas foram de " << tentativas << " vezes e o numero eh " << numero <<"\n";
        }
    }while(entradas != numero);
    
    std::cout << "#############################################################################################################\n";

    return 0;
}