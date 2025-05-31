#include <iostream>

int main(){
    int *pointer = nullptr; // Inicializando um ponteiro nulo
    int x = 43; // Variável inteira

    //pointer = &x; // Atribuindo o endereço de x ao ponteiro

    if(pointer == nullptr) {
        std::cout << "A ponteiro esta nulo.\n"; // Verifica se o ponteiro é nulo
    }
    else {
        std::cout << "O valor de x eh: " << *pointer << "\n"; // Acessa o valor de x através do ponteiro
        std::cout << "O endereco de x eh: " << pointer << "\n"; // Exibe o endereço de x
    }

}
/*Null value = a special value that indicates that a pointer does not point to any valid memory location. It is often used to signify
 that the pointer is not initialized or that it has been explicitly set to not point to anything.
// In C++, the null pointer is represented by the constant `nullptr`, which is a type-safe null pointer constant introduced in C++11.
 It can be assigned to any pointer type and is used to indicate that the pointer does not point to any valid object or function.
*/