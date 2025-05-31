#include <iostream>

int main(){

    std::string name = "Lucas";                                                            // ponteiros 
    int age = 21;
    std::string bolo[5] = {"Cenoura", "Red_Velvet", "Floresta_Negra", "Baunilha", "Chocolate"};

    std::string *pname = &name;
    std::cout << " o endereco do ponteiro eh " << &pname << " para o endereco " << &name << " Para o nome " << *pname << "\n";

    int *page = &age;
    std::cout << " o endereco do ponteiro eh " << &page << " para o endereco " << &age << " Para a idade " << *page << "\n";

    std::string *pbolo = bolo; // porque não &bolo, porque bolo é um array e o nome do array já é um ponteiro para o primeiro elemento
    std::cout << " o endereco do ponteiro eh " << &pbolo << " para o endereco " << &bolo << " Para o bolo " << *pbolo << "\n";

    return 0;
}//Ponteiros são variáveis especiais em linguagens como C e C++ que armazenam o endereço de memória de outra variável, em vez de armazenar diretamente um valor.
// Com ponteiros, é possível acessar e manipular dados de forma indireta, permitindo, por exemplo, a passagem eficiente de grandes estruturas para funções, a criação de estruturas dinâmicas 
//(como listas e árvores) e o controle direto sobre a memória do programa.

//O uso de ponteiros é fundamental para entender como a memória é gerenciada em baixo nível, possibilitando operações como alocação dinâmica, manipulação de arrays e strings, e implementação de 
//algoritmos mais eficientes. Em resumo, ponteiros são ferramentas poderosas que permitem ao programador acessar, modificar e gerenciar dados de maneira flexível e eficiente.