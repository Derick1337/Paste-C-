#include <iostream>

void elevado_a_2(int elevado){
int multiplo=0;
for(int i=0;i<elevado;i++){
    multiplo+=elevado;
} 
    std::cout << multiplo << "\n"; 
}

int main(){
    int j = 9;
    elevado_a_2(j);
    return 0;
}