#include <iostream>

int main(){

    std::string name = "Lucas";
    int age = 21;
    std::string bolo[5] = {"Cenoura", "Red_Velvet", "Floresta_Negra", "Baunilha", "Chocolate"};

    std::string *pname = &name;
    std::cout << " o endereco do ponteiro eh " << &pname << " para o endereco " << &name << " Para o nome " << *pname << "\n";

    int *page = &age;
    std::cout << " o endereco do ponteiro eh " << &page << " para o endereco " << &age << " Para a idade " << *page << "\n";

    std::string *pbolo = bolo; // porque não &bolo, porque bolo é um array e o nome do array já é um ponteiro para o primeiro elemento
    std::cout << " o endereco do ponteiro eh " << &pbolo << " para o endereco " << &bolo << " Para o bolo " << *pbolo << "\n";

    return 0;
}