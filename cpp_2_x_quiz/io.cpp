#include "io.h"
#include <iostream>

int readNumber(){
    int userInput{};
    std::cout << "Enter input number" << "\n";
    std::cin >> userInput;
    return userInput;
}

void writeAnswer(int a){
    std::cout<< "The sum of entered number is "<< a <<std::endl;
}

