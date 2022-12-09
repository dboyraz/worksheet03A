#include <iostream>
#include <cmath>
#include "tester.h"


bool isArmstrong(int num)
{
    int temp, rem,originalNum;
    int digits = 0;
    int sum = 0;

    originalNum = num;

    //Calculate the digits
    while (originalNum != 0)
    {
        originalNum = originalNum / 10;
        digits++;
    }

    temp = num;

    while (temp != 0)
    {
        rem = temp % 10; // store the remainder

        if(digits == 1){
            sum += rem*rem*rem;
        }
        else
            sum +=pow(rem, digits);

        temp = temp / 10;
    }

    //return whether sum is equal to original number
    return (num == sum);



}
void part_three() {
    int start = 0;
    int end = 0;
    int count = 0;

    std::cout << "Question 7 : Armstrong number" << '\n';

    std::cout << "Enter a start point." << std::endl;
    std::cin >> start;
    std::cout << "Enter an end point." << std::endl;
    std::cin >> end;

    std::cout << "-------\n";

    for (int i = start; i <= end; i++) {

        if (isArmstrong(i)) {
            std::cout << i << std::endl;
            count++;
        }
    }

    std::cout << "-------\n";

    std::cout << "There are " << count << " Armstrong numbers between " << start << " and " << end << '\n' << '\n';



    part_four();
}