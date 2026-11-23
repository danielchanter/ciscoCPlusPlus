#include <iostream>

int main(void){
    unsigned long bits;
    int counter = 0;

    std::cout << "Value: ";
    std::cin >> bits;

    while (bits != 0){
        if ((bits & 1) == 1){
            counter+= 1;
            bits >>= 1;
        }
    }

    std::cout << counter;
    return 0;
}