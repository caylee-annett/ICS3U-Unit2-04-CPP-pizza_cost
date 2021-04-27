// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on April 2021
// This program calculates the cost of a pizza

#include <iostream>
#include <iomanip>

int main() {
    // This function calculates the cost
    const float LABOR = 0.75;
    const float RENT = 1;
    const float MATERIALS = 0.5;
    const float HST = 0.13;
    float diameterOfPizza;
    float subTotal;
    float tax;
    float total;

    // Input
    std::cout << "Enter the diameter of the pizza that you want (inches): ";
    std::cin >> diameterOfPizza;

    // Process
    subTotal = LABOR+RENT + MATERIALS*diameterOfPizza;
    tax = subTotal*HST;
    total = subTotal+tax;


    // Output
    std::cout << "" << std::endl;
    std::cout << "The cost of a " << diameterOfPizza << " inch pizza is: $"
    << std::fixed << std::setprecision(2) << std::setfill('0') << total << "."
    << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
