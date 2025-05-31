#include <iostream>

int getDigits(const int number){
    return number % 10 + ((number / 10) % 10);
}
int sumOddDigits(const std::string CardNumber){
    int sum = 0;
    for(int i = CardNumber.size() - 1; i >= 0; i-=2){
        sum += CardNumber[i] - '0';
    }
    return sum;


}
int sumEvenDigits(const std::string CardNumber){
    int sum = 0;
    for(int i = CardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigits((CardNumber[i] - '0') * 2);
    }
    return sum;
}


int main(){

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits (cardNumber);

    if(result % 10 == 0){
        std::cout << cardNumber << " is Valid";
    } else {
        std::cout << cardNumber << " is Not Valid";
      }

    return 0;
}