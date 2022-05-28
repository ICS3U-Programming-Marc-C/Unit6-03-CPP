// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: May 2022
// This program generates 10 random
// numbers and display the smallest

// Including modules
#include <time.h>
#include <iostream>
#include <random>
#include <array>
using std::string;


// Declaring constants
const int MAX_ARRAY_SIZE = 10;
const int MIN_NUM = 0;
const int MAX_NUM = 100;


// Defining the function that returns the min value

int MinNumber(std::array<int, 10> someArray) {
       int minVal = 101;
       // the for..each loop
       for (int aNum : someArray) {
              if (aNum < minVal) {
                     minVal = aNum;
              }
       }
       return minVal;
}

// Defining the main function
int main() {
       // Defining the variables
       std::array<int, 10> arrayOfInt;
       int  minNum = 0;
       int someRandomNumber;
       int counter;
       int counter2;
       srand(time(NULL));
       // First for loop to generate random numbers
       for (counter = 0; counter < 10; counter++) {
              someRandomNumber = (rand() % 100 + 1) + MIN_NUM;
              arrayOfInt[counter] = someRandomNumber;
              std::cout << someRandomNumber << " added to array at index ";
              std::cout << counter << "\n";
       }

       // Finding the min number
       minNum = MinNumber(arrayOfInt);

       std::cout << "\nThe min number is " << minNum;
}
