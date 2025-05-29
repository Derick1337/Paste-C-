#include<iostream>

int main(){


    std::string foods[10];
    int size = sizeof(foods) / sizeof(foods[0]);
    std::string escolha;                            // Variável para armazenar a escolha do usuário

    for(int i = 0; i < size; i++){
        std::cout << "Digite o nome do alimento ou '0' para sair " << i + 1<< " : ";
        std::getline(std::cin, escolha);                                                // Lê a entrada do usuário
        if(escolha == "0"){                                     // Se o usuário digitar '0', sai do loop
            break;
        }
        else{
            foods[i] = escolha;                       // Armazena a escolha do usuário no array                             
        }
    }

    std::cout << "Os alimentos digitados foram: \n" ;

    for(int i = 0;  !foods[i].empty(); i++){    // Verifica se o elemento não está vazio
        std::cout << foods[i] << '\n';  // Imprime o alimento armazenado
    }


}