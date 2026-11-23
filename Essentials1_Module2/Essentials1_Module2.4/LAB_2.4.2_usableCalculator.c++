#include <iostream>

int main(void){
    bool exit = false;
    float a,b;
    int choice;


    while(!exit){
    std::cout << "MENU:\n";
    std::cout << "0 - exit\n";
    std::cout << "1 - addition\n";
    std::cout << "2 - subtraction\n";
    std::cout << "3 - multiplication\n";
    std::cout << "4 - division\n";
    std::cout << "Your choice? ";
    
    std::cin >> choice;

    if (choice >= 1 && choice <= 4){
        std::cout << "A = ";
        std::cin >> a;
        std::cout << "B = ";
        std::cin >> b;
    }

    switch(choice){
        case 0: exit = true; break;
        case 1: std::cout << "A + B = " << a + b << std::endl; break;
        case 2: std::cout << "A - B = " << a - b << std::endl; break;
        case 3: std::cout << "A * B = " << a * b << std::endl; break;
        case 4: if (b == 0.0){
            std::cout << "I cannot divide by 0, sorry! :(" << std::endl;
        } else{
            std::cout << "A / B = " << a / b << std::endl; break;
        }
        default: std::cout << "Bad option: " << choice << std::endl;
        
    }
    }
        return 0;
}