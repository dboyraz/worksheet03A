#include "tester.h"
#include <iostream>

int main()
{

    char input = ' ';

    std::cout <<

                 " __    __           _        _               _     _____ \n"
                 "/ / /\\ \\ \\___  _ __| | _____| |__   ___  ___| |_  |___ / \n"
                 "\\ \\/  \\/ / _ \\| '__| |/ / __| '_ \\ / _ \\/ _ \\ __|   |_ \\ \n"
                 " \\  /\\  / (_) | |  |   <\\__ \\ | | |  __/  __/ |_   ___) |\n"
                 "  \\/  \\/ \\___/|_|  |_|\\_\\___/_| |_|\\___|\\___|\\__| |____/ \n"
                 "                                                         \n"
                 "" << '\n';





    std::cout << "Please press enter to go through questions 1, 2, 3, and 4." << '\n';
    std::cin.ignore();
    part_one();

    /*
    switch (input) {
        case '1':
            part_one();
            break;

        case '2':
            part_two();
            break;

        case '3':
            part_three();
            break;

        case '4':
            part_four();
            break;

        default:
            break;
    }
*/
    return 0;
}