#include <iostream>

int main(){

    // Read in 2 numbers
    // Save them into variables
    // If big is larger than small
    // check if you can divide them without remainder
    // if yes then check if the 2 numbers are the same or not

    int firstNumber, secondNumber;
    std::cout << "Enter 2 numbers.\nFirst: ";
    std::cin >> firstNumber;
    std::cout << "Second: ";
    std::cin >> secondNumber;
    std::cout << "\n";

    if (firstNumber >= secondNumber){
        if ((firstNumber % secondNumber) == 0){
            if (firstNumber == secondNumber){
                std::cout << "They are the same!\n";
            } else {
                std::cout << "They are evenly divisible!\n";
            }
        } else {
            std::cout << "They are not evenly divisible\n";
        }
    } else {
        std::cout << "Hey! The second one is larger!\n";
    }

    return 0;
}