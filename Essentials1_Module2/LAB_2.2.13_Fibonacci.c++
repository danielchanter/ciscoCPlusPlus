#include <iostream>

int main(void){
    int n, total;
    std::cin >> n;
    long c;

    if (n == 1 || n == 2){
        std::cout << 1;
    } else{
        long a = 1;
        long b = 1;
        for (int i = 2; i < n; i++){
            c = a + b;
            a = b;
            b = c;
        }
    }
    std::cout << c;
    return 0;
}