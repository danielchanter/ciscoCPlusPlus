#include <iostream>

int main(void){
    int number;
    int steps = 0;
    std::cin >> number;
    if (number < 1){
        return 0;
    } else {
        while(number != 1){
            if (number % 2 == 0){
                number /= 2;
                std::cout << number << "\n";
                steps++;
            } else{
                number = (3 * number) + 1;
                std::cout << number << "\n";
                steps++;
            }
        }
    }

    std::cout << "steps = " << steps;
    return 0;
}