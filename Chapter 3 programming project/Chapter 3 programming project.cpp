// Chapter 3 programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    float s = 1.5; // s represents the cups of sugar per cookie
    float b = 1; // this represents the cups of butter per cookie
	float f = 2.75; // this represents the cups of flour per cookie
    int c; // this represents the number of cookies
    std::cout << "Enter the number of cookies you want to make: ";
    std::cin >> c;
    std::cout << "You will need: \n";
    std::cout << (s * c) / 48 << " cups of sugar\n";
    std::cout << (b * c) / 48 << " cups of butter\n";
	std::cout << (f * c) / 48 << " cups of flour\n";


   return 0;
   }