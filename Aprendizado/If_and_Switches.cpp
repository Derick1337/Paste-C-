#include <iostream>

int main() {

    /*
    int age; ///isso aqui é else if ent é de boa mas eu vou ter casos switch case

    std::cout << "Diga sua idade \n";
    std::cin >> age;

    else if(age >= 18){
        std::cout << "Welcome to the Mato! \n";
    }
    else else if(age < 0){
        std::cout << "You didn't born man \n";
    }
    else{
    std::cout << " You're not Welcome to the Mato!\n ";
    }
    */

    int month;
    std::cout << "Enter the monthh (1-12) ";
    std::cin >> month;

    switch(month){

        case 1:
            std::cout << "It is January";
            break;
    
        case 2:
            std::cout << "It is February";
            break;    
    
        case 3:
            std::cout << "It is March";
            break;    
    
        case 4:
            std::cout << "It is April";
            break;
        
        case 5:
            std::cout << "It is May";
            break;   
    
        case 6:
            std::cout << "It is June";
            break;    
    
        case 7:
            std::cout << "It is July";
            break;
        
        case 8:
            std::cout << "It is August";
            break;    
    
        case 9:
            std::cout << "It is September";
            break;   
    
        case 10:
            std::cout << "It is October";
            break;
      
        case 11:
            std::cout << "It is November";
            break;
       
        case 12:
            std::cout << "It is December";
            break;
        
        default:
            std::cout << "Please enter in only number (1-12)";
        }
    
    
    /*
    if (month == 1)
    {
        std::cout << "It is January";
    }
    else if(month == 2){
        std::cout << "It is February";
    }
    else if(month == 3){
        std::cout << "It is March";
    }
    else if(month == 4){
        std::cout << "It is Arpil";
    }
    else if(month == 5){
        std::cout << "It is May";
    }
    else if(month == 6){
        std::cout << "It is June";
    }
    else if(month == 7){
        std::cout << "It is July";
    }
    else if(month == 8){
        std::cout << "It is August";
    }
    else if(month == 9){
        std::cout << "It is September";
    }
    else if(month == 10){
        std::cout << "It is October";
    }
    else if(month == 11){
        std::cout << "It is November";
    }
    else if(month == 12){
        std::cout << "It is December";
    }
    else{
        std::cout << "You didn't enter a number between (1-12)";
    }
    */





    return 0;
}