#include <iostream>

int main() {

    char op;
    double num1;
    double num2;
    double result;

    std::cout <<"*****************Caluclator*****************\n";

    std::cout << "Enter either ( + - / * ): ";
    std::cin >> op;

    std::cout << "Enter a Number 1 : ";
    std::cin >> num1;
    
    std::cout << "Enter a Number 2 : ";    
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "The result of "<< num1 << " + " << num2 << " is : " << result << ".\n";
        break;
    case '-':
        result = num1 - num2;
        std::cout << "The result of "<< num1 << " - " << num2 << " is : " << result << ".\n";
        break;
    case '/':
        result = num1 / num2;
        std::cout << "The result of "<< num1 << " / " << num2 << " is : " << result << ".\n";
        break;
    case '*':
        result = num1 * num2;
        std::cout << "The result of "<< num1 << " * " << num2 << " is : " << result << ".\n";
        break;
    default:
        std::cout << "Enter a correct number";
        break;
    }
    std::cout <<"********************************************";
    return 0;
}