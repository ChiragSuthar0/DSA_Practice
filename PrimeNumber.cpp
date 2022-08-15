//
// Created by chirag on 14/8/22.
//
#include "PrimeNumber.h"
#include <iostream>


void PrimeNumber::init()
{
    if (testPrime())
    {
        std::cout << "The Number is a Prime Number";
    }
    else {
        std::cout << "The Number is not a Prime Number";
    }
}

bool PrimeNumber::testPrime() {

    std::cout << "Enter the Number to test: ";
    std::cin >> testNumber;

    if (testNumber % 2 == 0)
    {
        return false;
    }

    int i = 3;
    int j = 0;
    while (i < testNumber/i)
    {
        j++;
        if (testNumber % i == 0)
        {
            return false;
        }
        i+=2;
    }
    return true;
}
