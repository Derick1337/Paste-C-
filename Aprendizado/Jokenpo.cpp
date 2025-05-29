#include <iostream>
#include <ctime>
    
char getUserChoice(){
    char player;
    std::cout << "Rock-Paper-Scissor-Game!\n";
    do{
        std::cout << "Faca sua escolha:\n";
        std::cout << "::::::::::::::::::::\n";
        std::cout << "'R' to Rock\n";
        std::cout << "'P' to Paper\n";
        std::cout << "'S' to Scissor\n\n";
        std::cin  >> player;
}while(player != 'r' && player != 'R' && player != 'p' && player != 'P' && player != 's' && player != 'S' );
    return player;

}
char getComputerChoice(){

    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }


    return 0;
}
void showChoice(char choice){

    switch(choice){
        case 'r':
        case 'R':
            std::cout << "Rock\n";
            break;
        case 'p':
        case 'P':
            std::cout << "Paper\n";
            break;
        case 's':
        case 'S':
            std::cout << "Scissor\n";
            break;
    }
}
void chooseWhinner(char player, char computer){
    switch (player)
    {
    case 'r':
    case 'R':
        if (computer == 'r' || computer == 'R') {
            std::cout << "Empate!\n";
        } else if (computer == 'p' || computer == 'P') {
            std::cout << "Computador venceu!\n";
        } else {
            std::cout << "Voce venceu!\n";
        }
        break;
    case 'p':
    case 'P':
        if (computer == 'p' || computer == 'P') {
            std::cout << "Empate!\n";
        } else if (computer == 's' || computer == 'S') {
            std::cout << "Computador venceu!\n";
        } else {
            std::cout << "Voce venceu!\n";
        }
        break;
    case 's':
    case 'S':
        if (computer == 's' || computer == 'S') {
            std::cout << "Empate!\n";
        } else if (computer == 'r' || computer == 'R') {
            std::cout << "Computador venceu!\n";
        } else {
            std::cout << "Voce venceu!\n";
        }
        break;
    }
}

int main() {
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Sua escolha: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Escolha do computador: ";
    showChoice(computer);

    chooseWhinner(player, computer);

    return 0;
}