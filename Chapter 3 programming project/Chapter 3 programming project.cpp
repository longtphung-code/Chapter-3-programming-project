// Chapter 3 programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    float s = 1.5; // s represents the cups of sugar per cookie
    float b = 1; // this represents the cups of butter per cookie
	float f = 2.75; // this represents the cups of flour per cookie
    int c; // this represents the number of cookies you want to make
    std::cout << "Enter the number of cookies you want to make: "; // this line prints the message to the user
    std::cin >> c; // this is used to take the user input and store it to the cariable c which represents the number of cookies you want to make
    std::cout << "You will need: \n"; // prints the message to the user
    std::cout << (s * c) / 48 << " cups of sugar\n"; // the next three lines calculate the amount of sugar, butter, and flour needed to make the number of cookies the user wants to make
    std::cout << (b * c) / 48 << " cups of butter\n";
	std::cout << (f * c) / 48 << " cups of flour\n";


   return 0;
   }