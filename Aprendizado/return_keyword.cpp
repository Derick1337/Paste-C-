#include <iostream>

double square(int length){
    return length * length;
}
double cube(int length){                    //retorna um tipo decimal
    return length * length * length;
}
std::string contatenador(std::string FN,std::string LN){        //retorna um tipo string
    return FN + "_" + LN;
}
int main() {
    double length = 9.0;
    double area = square(length);
    double vol = cube(length);
    std::cout << area << "Cm^2\n";
    std::cout << vol << "Cm^3\n";
    
    std::string FN = "Derick";
    std::string LN = "1337";
    std::cout <<contatenador(FN,LN);


    return 0;
}