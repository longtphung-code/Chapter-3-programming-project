
#include <iostream>
#include <cmath>
#include <iomanip>    // for setprecision and formatting


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
	double interestEarned = amount - principal;
	// Display the report
	std::cout << "\nInterest Rate:      " << std::fixed << std::setprecision(2) << (rate * 100) << "%" << std::endl;
	std::cout << "Times Compounded:   " << timesCompounded << std::endl;
	std::cout << "Principal:          $" << std::fixed << std::setprecision(2) << principal << std::endl;
	std::cout << "Interest Earned     $" << std::fixed << std::setprecision(2) << interestEarned << std::endl;
	std::cout << "Amount in Savings:  $" << std::fixed << std::setprecision(2) << amount << std::endl;

	return 0;
}