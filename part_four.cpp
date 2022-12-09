#include <iostream>
#include <string>
#include "tester.h"


int part_four() {

    std::string input = " ";
    int length = 0;
    int firstDigit = 0;
    int lastDigit = 0;

    std::cout << "Question 8 : Numeral to Symbol" << '\n';

    std::cout << "Please enter a number between 0 and 2,147,483,646" << '\n';
    std::cin >> input;
    length = input.length();

    // subtract 48 to convert numeric char into integer because of Ascii
    firstDigit = (int) input[0] - 48;
    lastDigit = (int) input[length - 1] - 48;


    // Iterate over the string and change it
    for (int i = 0; i < length; i++) {

        switch (input[i]) {
            case '0':
                input[i] = '*';
                break;

            case '1':
                input[i] = 'B';
                break;
            case '2':
                input[i] = 'E';
                break;

            case '3':
                input[i] = 'A';
                break;
            case '4':
                input[i] = '@';
                break;

            case '5':
                input[i] = 'F';
                break;
            case '6':
                input[i] = 'K';
                break;

            case '7':
                input[i] = '%';
                break;
            case '8':
                input[i] = 'R';
                break;

            case '9':
                input[i] = 'M';
                break;
            default:
                break;
        }

    }

    // Check :
    // If the first AND last digits are ODD
    // If the first AND last digits are EVEN
    // If the last digit is ZERO
    if (firstDigit % 2 != 0 && lastDigit % 2 != 0) {
        input[0] = 'X';
        input[length - 1] = 'X';
    } else if (firstDigit % 2 == 0 && lastDigit % 2 == 0) {
        input[0] = '$';
        input[length - 1] = '$';
    } else if (firstDigit % 2 != 0 && lastDigit == 0) {
        input[length - 1] = '#';
    }


    std::cout << "Output :" << input << std::endl;

    return 0;
}