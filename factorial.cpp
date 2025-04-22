// Copyright (c) 2025 Angel all rights reserved
// Created by: Angel
// Created by: April 14, 2025
// This program asks the user for a whole number.
// It then calculates the factorial of that number.
#include <iostream>

int main() {
    // initializations
    int counter = 0;
    int factorialAnswer = 1;
    int userNum;

    // get the user number
    std::cout << "Enter the whole number: ";
    std::cin >> userNum;
    std::cout << std::endl;

    // Calculate the factorial of the number
    do {
        counter++;
        factorialAnswer = factorialAnswer * counter;
        std::cout << "Tracking " << counter << " times through the loop.\n";
    }   while (counter < userNum);

    // display the answer to the user
    std::cout << userNum << " ! = " << factorialAnswer << std::endl;
}
