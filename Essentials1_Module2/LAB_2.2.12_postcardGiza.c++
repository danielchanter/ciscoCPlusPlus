#include <iostream>

int main(void){
    int h, h2;
    int gap = 1;
    std::cout << "Height: ";
    std::cin >> h;
    h2 = h*2 - 1;
    int spot = h;
    int qgap = -h;

    for (int i = 0; i < h; i++){
        std::cout << "\n";
        for (int j = 0; j < h2; j++){
            if (i == 0){
                if ( j == h-1){
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            
            } else if (i == h-1){
                std::cout << "*";
            
            } else if (j == spot - (i+1)){
                    std::cout << "*";
                    for (int k = 0; k < gap; k++){
                        std::cout << " ";
                    }
                    std::cout << "*";
                    gap+= 2;
            } else {
                std::cout << " ";
            } 
        }
    }
}
