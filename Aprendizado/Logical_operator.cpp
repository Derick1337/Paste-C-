#include <iostream>

int main() {
    //&& = and
    //|| = or
    // ! = not

    int temp;
    bool sunny = false;

    std::cout << "Enter a temperature ";
    std::cin >> temp;

    if (temp <= 0 || temp >= 30){
        std::cout << "It's a bad temperature!\n";
    }
    else{
        std::cout << "It's a good temperature!\n";
    }
    if(!sunny){
        std::cout << "It's cloudy outside\n";
    }else{
    std::cout << "It's sunny outside\n";
    }
    return 0;
}