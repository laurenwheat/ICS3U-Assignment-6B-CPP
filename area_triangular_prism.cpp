// Copyright (c) 2021 Lauren Wheatley All rights reserved.
//
// Created by: Lauren Wheatley
// Created on: May 2021
// This program adds numbers

#include <iostream>
#include <string>


float surfaceArea(int base1, int base2, int base3, int height) {
    float surfaceTriangularPrism;

    surfaceTriangularPrism = (base1 * height) + (base1 * base3) +
                             (base2 * base3) + (height * base3);

    return surfaceTriangularPrism;
}

int main() {
    std::string base1Input;
    int base1Int;
    std::string base2Input;
    int base2Int;
    std::string base3Input;
    int base3Int;
    std::string heightInput;
    int heightInt;
    float surfaceAreaTriangularPrism;

    // input
    while (true) {
        try {
            std::cout << "Enter the length of the 1st base (cm): ";
            std::cin >> base1Input;
            base1Int = std::stoi(base1Input);
            std::cout << "" << std::endl;

            std::cout << "Enter the length of the 2nd base (cm): ";
            std::cin >> base2Input;
            base2Int = std::stoi(base2Input);
            std::cout << "" << std::endl;

            std::cout << "Enter the length of the 3rd base (cm): ";
            std::cin >> base3Input;
            base3Int = std::stoi(base3Input);
            std::cout << "" << std::endl;

            std::cout << "Enter the length of the height (cm): ";
            std::cin >> heightInput;
            heightInt = std::stoi(heightInput);
            std::cout << "" << std::endl;

            if (base1Int > 0 && base2Int > 0 && base3Int > 0 && heightInt > 0) {
                surfaceAreaTriangularPrism = surfaceArea
                (base1Int, base2Int, base3Int, heightInt);

                std::cout << "The surface area is "
                          << surfaceAreaTriangularPrism << "cm²" << std::endl;

                break;
            } else {
                std::cout << "Enter a positive integer!!" << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "Enter a number please!!"
                      << std::endl;
        }
    }
}
