// Chapter 3 programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>

int main(){	
	// random number generater

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distrib_int(1, 1000);

	//generate two random numers
	int num1 = distrib_int(gen);
	int num2 = distrib_int(gen);
	int correcAnswer = num1 + num2;


	//take user input
	std::cout << "what is " << num1 << " + " << num2 <<"?";
	int userAnswer;
	std::cin >> userAnswer;
   return 0;
   }