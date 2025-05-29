#include <iostream>

int search(int array[], int size, int element){                         //  Função para pesquisar um elemento em um array
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i; // Retorna o índice do elemento encontrado

        }

    }
    return -1; // Retorna -1 se o elemento não for encontrado

}


int main(){

    int numbers[] = {1, 2, 3, 4, 5,6,7,8,9,10};
    int size = sizeof(numbers) / sizeof(numbers[0]);          // Calcula o tamanho do array
    int index;                                                   // Variável para armazenar o índice do elemento encontrado
    int myNum;                                                        // Variável para armazenar o número a ser pesquisado
    std::cout << "adicione um numero: ";
    std::cin >> myNum;

    index = search(numbers, size, myNum);

    if(index!= -1){
        std::cout << "O numero " << myNum << " foi encontrado no indice: " << index << '\n';
    } else {
        std::cout << "O numero " << myNum << " nao foi encontrado.\n";
    }

    return 0;
}