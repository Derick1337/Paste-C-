#include <iostream>

double getTotal(double prices[], int quanti){
    double total = 0;

    for(int i = 0; i < quanti;i++){
        total+= prices[i];
    }
    return total;
}


int main(){
    double prices[] = {49.99, 15.05, 75, 9.99};
    int quanti = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, quanti);

    std::cout << "Total: R$" << total << "\n";
return 0;
}