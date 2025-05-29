#include <iostream>

int main() {
    //basicamente é mudar o tipo do dado

    double x = 3.14;

    std::cout << x <<'\n';

    char y = 100;
    std::cout << y << '\n' ;//Implicit Conversion 
    
    int correct = 8;
    int questions = 10;
    double score = (double)correct/questions * 100; //Explicit Conversion

    std::cout << score << "%", '\n' ;
    



    return 0;
}