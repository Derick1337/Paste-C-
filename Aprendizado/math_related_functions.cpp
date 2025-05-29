#include <iostream>
#include <cmath>

int main (){

    /*double x = 3;
    double y = 4;
    double z;

    //z = std::max(x,y);
    //z = std::min(x,y);
    //z = pow(2, 3);
    //z = sqrt(9);
    //z = abs(-3);
    //z = round(x);
    //z = ceil(x);
    z = floor(x);

    std::cout << z;

*/

    double a;
    double b;
    double c;

    std::cout << "Enter side A:" ;
    std::cin >> a;

    std::cout << "Enter size B: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    std::cout << "side C: " << c;

    return 0;
}