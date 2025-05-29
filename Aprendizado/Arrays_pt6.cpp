#include<iostream>

int main(){

    std::string cars[][3] = {{"Mustang", "Escape", "F-150",},
                             {"Corvette", "Equinox", "Silverado"},
                             {"Challenger", "Durango", "Ram 1500"}};

    int linhas = sizeof(cars) / sizeof(cars[0]);                    // Calculate number of rows 
    int colunas = sizeof(cars[0]) / sizeof(cars[0][0]);         // Calculate number of columns


    std::cout << "\n\n";
for(int i = 0; i < colunas; i++){
    for(int j = 0; j < linhas; j++){
        std::cout << cars[i][j] << " ";
    }
    std::cout << "\n\n";
    }
    return 0;
}