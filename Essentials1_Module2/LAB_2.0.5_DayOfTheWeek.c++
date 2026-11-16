#include <iostream>

int main(void){
    int year, month, day;
    std::cout << "Enter the year: ";
    std::cin >> year;
    std::cout << "Enter the month: ";
    std::cin >> month;
    std::cout << "Enter the day: ";
    std::cin >> day;

    month -= 2;
    if (month < 0){
        month += 12;
        year -= 1;
    }
    month *= 83;
    month /= 32;
    month += day;
    month += year;
    month += (year/4);
    month -= (year/100);
    month += (year/400);
    std::cout << "Day of the week is: " << month % 7;

    return 0;
}