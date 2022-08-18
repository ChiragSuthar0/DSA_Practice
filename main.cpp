// DataStructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"

template <class T>
void start() {
    T obj;
    obj.init();
}

int main()
{
SEL_DS:
    std::cout << "Please Enter the DS you want to try: " << std::endl;

    std::cout << "1. Stack" << std::endl
        << "2. Queue" << std::endl
        << "3. Circular Queue" << std::endl
        << "4. Priority Queue" << std::endl
        << std::endl <<"Select your choice: ";

    int DS;
    std::cin >> DS;
RESTART:
    if (DS == 1) {
        start<Stack>();
    }
    else if (DS == 2) {
        start<Queue>();
    }
    else if (DS == 3) {
        start<Circular_Queue>();
    }
    else {
        goto SEL_DS;
    }

    while(true) {
        std::cout << "Do you want to end the program?" <<
                  std::endl << "1. Yes" <<
                  std::endl << "2. No" <<
                  std::endl << "Enter Your Choice: ";


        int exitStatus;
        std::cin >> exitStatus;

        if (exitStatus == 1)
        {
            return 0;
        }
        else if (exitStatus == 2)
        {
            std::cout << "Do you want to change the DS?" << std::endl << "1. Yes" << std::endl << "2. No" << std::endl;

            std::cout << "Enter your choice: ";
            int temp;
            std::cin >> temp;
            if (temp == 1) {
                goto SEL_DS;
            }
            else if (temp == 2) {
                goto RESTART;
            }

        }
        else {
            std::cout << "Please select a valid response." << std::endl;
        }
    }
}