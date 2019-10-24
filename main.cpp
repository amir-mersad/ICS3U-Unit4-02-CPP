// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on October 2019
// This program asks the user for a positive integer,
//  then multiplies the whole numbers up to that number

#include "iostream"


int main() {
    // This function asks the user for a positive integer,
    //  then multiplies the whole numbers up to that number
    int result = 1;
    int x = 1;
    std::string number_str;
    int number;


    // Input
    std::cout << "enter a number: " << std::endl;
    std::cin >> number_str;

    // Process and output
    try {
        number = std::stoi(number_str);
        if (number >= 0) {
            while (x <= number) {
                result = x * result;
                x++;
            } std::cout << result << std::endl;
        } else {
            std::cout << "should enter positive numbers!" << std::endl;
            }
    } catch(std::invalid_argument) {
        std::cout << "Wrong input!!!" << std::endl;
    }
}
