#include <iostream>

int main(void){
    int n;
    std::cout << "Side size: ";
    std::cin >> n;
    if (n < 1){
        std::cout << "Sorry, size too small.";
    } else {
        for(int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if( (j == 0 || j == n-1) && (i == 0 || i == n-1)){
                    std::cout << "+";
                } else if ( (j != 0 || j != n-1) && (i == 0 || i == n-1)){
                    std::cout << "-";
                } else if ( j == 0 || j == n-1) {
                    std::cout << "|";
                } else {
                    std::cout << " ";
                }
            }
        std::cout << "\n";
        }
    }
    return 0;
}