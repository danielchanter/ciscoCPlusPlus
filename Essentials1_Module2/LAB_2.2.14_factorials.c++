#include <iostream>

int main(void){
    int n;
    std::cin >> n;
    long total = 1;

    if (n == 0 || n == 1){
        std::cout << 1;
    } else {
        for (int i = 1; i <= n; i++){
            total *= i;
        }
    }
    std::cout << total;
    return 0;
}