#include <iostream>

int main() {
    
/*    Break and Continue
    for(int index = 10; index >= 0; index-- ){
        if(index == 6){
            continue;//ele ignora o index do codigo e ja ´pula já o break ele simpresmente para o programa
        }
        std::cout << index << "\n";
        
    }
    std::cout << "Finished";
*/

    int rows;
    int columns;
    char symbol;

    std::cout << "Quantas linhas :";
    std::cin >> rows;

    std::cout << "Quantas Colunas :";
    std::cin >> columns;

    std::cout << "Coloque o simbolo :";
    std::cin >> symbol;

    for(int i = 0; i< columns; i++){
        for(int j = 0; j < rows; j++){
            std::cout << symbol;
        }
        std::cout << "\n";
    }
//Matriz padrão










    return 0;
}