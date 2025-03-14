#include <string>
#include <iostream>
#include "InputOutput.h"

std::string askForStringInput(std::string message){
    //display message to user and retrieve input
    //remember to include newline
    std::cout << message << std::endl;
    //store input in a string variable before returning it
    std::string input;
    std::getline(std::cin, input);
    return input;
}

int askForIntInput(std::string message){
    //display message to user and retireve input
    //remember to include newline
    std::cout << message << std::endl;
    //store input in a int variable before returning it
    int input;
    std::cin >> input;
    std::cin.ignore();
    return input;
}

void printOut(std::string message){
    //Display message and include newline
    std::cout << message << std::endl;
}

