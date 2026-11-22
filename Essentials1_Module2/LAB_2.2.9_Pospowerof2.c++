#include <iostream>

int main(void){
    int n;
    unsigned long pow = 1;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        pow *= 2;
    }
    std::cout << pow;
    return 0;
}