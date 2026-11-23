#include <iostream>

int main(void){
    unsigned long bits;
    unsigned long result;
    std::cout << "Value: ";
    std::cin >> bits;
    for (int i = 0; i < 32; ++i){
        result <<= 1;
        result |= (bits & 1);
        bits >>= 1;
    }
    
    if (result == bits){
        std::cout << bits << " is a bitwise palindrome";
    } else {
        std::cout << bits << " is not a bitwise palindrome";
    }
    return 0;
}