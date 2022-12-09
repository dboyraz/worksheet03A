#include <iostream>
#include <iomanip>
#include "tester.h"
void part_one()
{
    double n = 0;
    double r = 0;
    double guess = 0;
    const double ONE_PERCENT = 0.01;

    std::cout << "Question 1 : The Babylonian Algorithm" << '\n';


    // Take a number from user
    std::cout << "Please enter a number." << std::endl;
    std::cin >> n;

    // Initial guess
    guess = n / 2;

    while (guess - r > ONE_PERCENT) {

        // Follow the instructions in first question
        r = n / guess;
        guess = ( guess + r) / 2;


    }
    // Format the output to show two decimals after point
    std::cout << "Square root of " << n << " is " << std::setprecision(2 ) << std::fixed << guess << '\n' <<'\n';

    part_two();
}