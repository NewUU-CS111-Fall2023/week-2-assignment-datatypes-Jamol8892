/*
 * Author: Jamol 
 * Date: 25.10.2023
 * Name: Jamol
 */

#include <iostream>

int leapYear() {
    int lYear;

    // Prompt the user to enter a year
    std::cout << "Enter a year: ";
    std::cin >> lYear;

    if ((lYear % 4 == 0 && lYear % 100 != 0) || (lYear % 400 == 0)) {
        std::cout << lYear << " is a leap year." << std::endl;
    } else {
        std::cout << lYear << " is not a leap year." << std::endl;
    }

    return 0;
}
