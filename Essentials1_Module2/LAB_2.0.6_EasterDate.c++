#include <iostream>

int main(void){
    int year, a, b, c, d, e;
    std::cout << "Enter the year: ";
    std::cin >> year;
    a = year % 19;
    b = year % 4;
    c = year % 7;
    a = (a * 19 + 24);
    d = a % 30;
    e = (2*b + 4*c + 6*d + 5) % 7;
    if (e + d < 10){
        std::cout << "March " << d + e + 22;
    } else{
        std::cout << "April " << d + e - 9;
    }
    return 0;
}