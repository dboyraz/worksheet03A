#include <iostream>
#include "tester.h"

void part_two()
{

    char input[255];
    char pattern[255];
    int count = 0;
    int t = 0;

    std::cout << "Question 2 : RGB Pattern" << '\n';


    std::cout << "Please enter 5 colors as one of R, G, B." << std::endl;


    // Take input from user,
    // if the input is either one of R, G, B and previous inputs are not same
    // add that input to array
    while (count < 5)

    {
        std::cin >> input[t];
        if ((input[t] == 'R' || input[t] == 'B' || input[t] == 'G') && input[t - 1] != input[t])
        {
            pattern[t] = input[t];
            t++;
            count++;
        }

    }


    // Print the array
    for (int i = 0; i < 5; ++i) {

        std::cout << pattern[i];


    }

    std::cout <<'\n' <<'\n';;



    part_three();
}