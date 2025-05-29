#include <iostream>
#include <ctime>

int main(){


/*


    //pseudo-random = NÃO randomico Verdadeiramente (mas proximo)
    srand(time(NULL)); // forma de aleatorizar baseado no tempo do processo 

    int num0 = (rand() % 20)+1;             //aqui nos fizemos um randomizer que vai do 0 até o 19 só que adicionamos o +1 para ser de 1 até 20 para simularmos um dado 
    int num1 = (rand() % 20)+1;
    int num2 = (rand() % 20)+1;
    
    std::cout << num0 << "\n";
    std::cout << num1 << "\n";
    std::cout << num2 << "\n";

    
*/

    //Agora um aleatorizador de Evento

    srand(time(0));
    int randNum = rand() % 5 + 1 ;

    switch (randNum)
    {
    case 1:
        std::cout << "You Lose, more luck on next" ;
        break;
    case 2:
        std::cout << "You Lose, more luck on next" ;
        break;
    case 3:
        std::cout << "You Lose, more luck on next" ;
        break;
    case 4:
        std::cout << "You Won" ;
        break;
    case 5:
        std::cout << "You Lose, more luck on next" ;
        break;
    }

    return 0;
}