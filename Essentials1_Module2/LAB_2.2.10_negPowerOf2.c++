#include <iostream>

int main(void){
    int n;
    std::cin >> n;
    double pow = 1;

    for (int i = 0; i < n; i++){
        pow /= 2;
    }

    std::cout.precision(20);
    std::cout << pow;
    return 0;
}