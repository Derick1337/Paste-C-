#include <iostream>
#include <iomanip>

void mostreBalanco(double balance){
    std::cout << "\nYour balance is: R$" << std::setprecision(2) << std::fixed << balance << "\n";

}
double depositar(){
    double recebido = 0;

    std::cout << "Me diga a quantia em RS: ";
    std::cin  >> recebido;

    if(recebido > 0){
        return recebido;
    }
    else{
        std::cout << "Não tem dinheiro para depositar\n";
        return 0;
    }

    return 0;
}
double retirada(double balance){

    double retirado = 0;
    
    std::cout << "\nVoce tem \nRs"<<std::setprecision(2) << std::fixed << balance <<"\nQuanto voce quer retirar: ";
    std::cin  >> retirado;
    if(retirado > balance){
        std::cout << "\nDinheiro Insuficiente";
        return 0;
    }else if(retirado < 0){
        std::cout << "\nNao eh um numero valido ";
        return 0;
    }else{
        return retirado;
    }
}

int main() {

    double balance = 0.00;
    int choice = 0;
    do{
    std::cout << "********************:\n";
    std::cout << "Selecione uma delas :\n";
    std::cout << "*********************\n";
    std::cout << "1. Mostre a quantia :\n";
    std::cout << "2. deposite :\n";
    std::cout << "3. retire o dinheiro :\n";
    std::cout << "4. Exit :\n";
    std::cin  >> choice;

    switch(choice){
        case 1: mostreBalanco(balance);
                break;
        case 2: balance += depositar();
                mostreBalanco(balance);
                break;
        case 3: balance -= retirada(balance);
                mostreBalanco(balance);
                break;
        case 4: std::cout << "Thanks for visiting, have a Great day !!\n";
                break;
        default:
                std::cout << "Selecione um numero correto\n";
            
        }}while (choice != 4);

    return 0;
}