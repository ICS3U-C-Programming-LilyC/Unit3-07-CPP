// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Oct/28/2023
// This program asks the user
// for their age, and tells
// them if they're eligible
// to date my grandchild.
#include <cstdlib>
#include <iostream>

int main() {
    // Declaring variable to get user's age.
    std::string userAgeAsString;

    // Getting user input.
    std::cout << "Enter your age: ";
    std::cin >> userAgeAsString;

    // Initiating try catch.
    try {
        int userAgeAsInteger = std::stoi(userAgeAsString);

        // If statement to see if the user's age is < 0 or > 120.
        if (userAgeAsInteger < 0 || userAgeAsInteger > 120) {
            std::cout << "Invalid age.";
            // Else if to see if the user's age is < 25.
        } else if (userAgeAsInteger < 25) {
            std::cout << "You're too young to date my grandchild.";
            // Else if to see if the user's age is > 120.
        } else if (userAgeAsInteger > 40) {
            std::cout << "You're too old to date my grandchild.";
            // Else to tell them they're eligible to date 
            // my grandchild.
        } else {
            std::cout << "You're eligible to date my grandchild.";
        }
        // Error message if the user age is invalid.
    } catch (std::invalid_argument) {
        std::cout << userAgeAsString << "is not a valid age.";
    }
}
