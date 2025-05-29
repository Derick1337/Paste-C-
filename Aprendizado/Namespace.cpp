#include <iostream>

namespace first{
   int x = 1;
}
namespace second{
   int x = 2;
}
int main (){
    using std::cout;//isso retira a utilização do std::cout para aplicar uma saida porém use com cuidado, por que pode acabar com algumas funções
    int x = 0;

   // int x = 1; dá errado mudar a propriedade em C++ então utilizamos outros metodos para mudar as variaveis 
   /*como por exemplo usando o namespace para gerar a modificação
   como em:
   namespace first{
   int x = 1;
   }*/

    cout << second::x << '\n'; // printa o numero 2 pois ele faz a verificação no 'namespace'
    cout << first::x << '\n'; // printa o numero 1 pois ele faz a verificação no 'namespace'
    cout << x << '\n'; //printa o numero 0 pois não vai na função namespace
   return 0;
}
