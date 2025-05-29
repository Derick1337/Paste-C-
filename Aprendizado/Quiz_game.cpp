#include <iostream>

int main(){

    std::cout << "Welcome to the Quiz Game!" << std::endl;
    std::string questions[] = {"1. What year was C++ created?",
                               "2. Who is the creator of C++?",
                               "3. What is the predecessor of C++?",   
                               "4.is the Earth flat?",};
    
    std::string options[][4] = { "A. 1969", "B. 1975", "C. 1985", "D. 1989",
                                 "A. Gui ban Rossum", "B. Bjarne Stroustup", "C. Ken Thompson", "D. Linus Torvalds",
                                 "A. C", "B. C++", "C. Java", "D. Python",
                                 "A. Yes", "B. No", "C. Maybe", "D. I don't know"}; 

    char answers[] = {'C', 'B', 'A', 'B'}; // Correct answers for each question
    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

        for(int i = 0; i < size; i++){
            std::cout << "#####################################################\n";
            std::cout << questions[i] << "\n";
            std::cout << "#####################################################\n";
            for(int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++){
                std::cout << options[i][j] << "\n";
            }
            std::cin >> guess;
            guess = toupper(guess); // Convert to uppercase for consistency
            if(guess == answers[i]){
                std::cout << "Correct!\n";
                score++;
            } else {
                std::cout << "Wrong! The correct answer is: " << answers[i] << "\n";
            }
        }
    std::cout << "You scored " << score << " out of " << size << ".\n";
return 0;
}