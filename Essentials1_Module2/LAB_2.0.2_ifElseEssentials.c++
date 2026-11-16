#include <iostream>

int main(void){
    int year;
    std::cout << "Input a year of the Gregorian Calender: ";
    std::cin >> year;
    if (year < 1582){
        std::cout << "Year is not of the Gregorian era";
    } else if (year % 4 != 0){
        std::cout << "Common year";
    } else if (year % 100 != 0){
        std::cout << "Leap year";
    } else if (year % 400 != 0){
        std::cout << "Common year";
    } else {
        std::cout << "Leap year";
    }
}