
#include <iostream>
#include <cmath>

int main() {
	// take user input for principal
	std::cout << "What is your principal amount? ";
	double principal;
	std::cin >> principal;

	// take user input for rate
	std::cout << "what is your interest rate in decimal form";
	double rate;
	std::cin >> rate;

	// convert to decimal form
	rate = rate / 10.0;

	// take user input for times the interest is compounded during a year
	std::cout << "How many times is the interest compounded during a year? ";
	double timesCompounded;
	std::cin >> timesCompounded;

	double amount = principal * pow((1 + rate / timesCompounded), timesCompounded);
	std::cout << "Your amount in savings is: " << amount << std::endl;
	std::cout << "Your interest earned is: " << amount - principal << std::endl;
	return 0;
}