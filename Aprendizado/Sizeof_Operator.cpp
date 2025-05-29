#include <iostream>

int main() {
    //sizeof() = determina o tamanho de um tipo de dado ou de uma variável em bytes

    std::string name = "Maria";// Tamanho de uma string 32 bytes
    double gpa = 2.5; // Tamanho de um double 8 bytes
    char grade = 'A'; // Tamanho de um char 1 byte
    bool student = true; // Tamanho de um bool 1 byte
    char grades[] = {'A', 'B', 'C', 'D', 'F'}; // Tamanho de um array de char 5 bytes
    std::string students[] = {"Maria", "João", "Pedro", "Ana", "Bob Sponge"}; // Tamanho de um array de strings

    std::cout << sizeof(students)/sizeof(std::string) << " bytes\n"; // Tamanho da string é 32bytes e esta dividindo a quantidade de chamadas de string pelo tamanho de uma string
    return 0;
}