#include <iostream>

void printInfo(const std::string name, const int age) {             // This function prints the name and age, but does not modify them
    //name = " ";       // This line is not necessary, but it shows that the function does not modify the original variable                           
  //  age = 0;                 // This line is not necessary, but it shows that the function does not modify the original variable
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
}

int main(){
    std::string name = "Jessé";
    int age = 25;

    printInfo(name, age);

    return 0;
}