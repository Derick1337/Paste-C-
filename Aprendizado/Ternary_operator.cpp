#include <iostream>

int main (){ //aqui temos o famoso caso de simplificação de código que pode ser usado em outras operações, talvez isso seja até um gadet para conseguir copar os problemas de outros códigos futuros
    int grade = 55;
    bool condition;
    //Method 1
    if (grade>= 60){
        std::cout << "You pass\n";
    }
    else{
        std::cout << "You don't pass\n";
    }
    //Method 2 (best for simple modifies)
    grade >= 60 ? std::cout << "You pass\n" : std::cout << "You don't pass\n"; 
    grade >= 60 ? condition = 1 : condition = 0; 
    //Both make the same thing

    //This case is with Expressions
    grade % 2 == 1 ? std::cout << "Odd\n" : std::cout << "Even\n";
    //condition ? std::cout << "No Exam\n": std::cout <<"Exam\n";
    std::cout <<(condition ? "No Exam\n": "Exam\n"); // dá pra fazer direto no cout
    
    return 0;
}