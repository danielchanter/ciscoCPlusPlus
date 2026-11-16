#include <iostream>

int main(void){
    int ip1, ip2, ip3, ip4;
    std::cout << "Enter four numbers between 1 - 255:\n";
    std::cin >> ip1 >> ip2 >> ip3 >> ip4;
    if((ip1 < 1 || ip1 > 255) || (ip2 < 1 || ip2 > 255) || (ip3 < 1 || ip3 > 255) || (ip4 < 1 || ip4 > 255))
        std::cout << "Sorry, invalid numbers.";
    
    if((ip1 >= 1 && ip1 <= 255) || (ip2 >= 1 || ip2 <= 255) || (ip3 >= 1 || ip3 <= 255) || (ip4 >= 1 || ip4 <= 255))
        std::cout << ip1 << "." << ip2 << "." << ip3 << "." << ip4;
}