#include <iostream>

void swap (std::string &a, std::string &b) {                          // This function swaps the original strings using references    
    std::string temp = a;
    a = b;
    b = temp;
    std::cout << "a = " << &a << ",\n b = " << &b << "\n";
}
void swaper (std::string a, std::string b) {                        // This function does not swap the original strings, it only swaps the copies
    std::string temp = a;
    a = b;
    b = temp;
    std::cout << "a = " << &a << ",\n b = " << &b << "\n";
}


int main(){

    std::string name = "Jessé";
    int age = 25;
    bool isStudent = true;

    std::cout << &age << "\n";
    std::cout << &isStudent << "\n"; 
    std::cout << &name << "\n";

    std::string a = "World";
    std::string b = "Hello";
    std::cout << "a = " << &a << ",\n b = " << &b << "\n";
    std::cout << "Before swap: a = " << a << ", b = " << b << "\n";
    swap(a, b);
    swaper(a, b);
    std::cout << "After swap: a = " << a << " " << b << "\n";




    return 0;
}