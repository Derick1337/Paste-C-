#include <iostream>

int main(){

    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Mr. Krabs", "Sandy"};
    /*
    for(int i =0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i]  << "\n";
    }
    */
    for(std::string estudante : students){
        std::cout << estudante  << "\n";
    }
    int grades[] = {10, 9, 8, 7, 6};
    for(int nota : grades){
        std::cout << nota << "\n";
    }
    
    
    return 0;
}