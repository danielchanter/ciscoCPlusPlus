#include <iostream>

using namespace std;

int main(void) {
	int   sys;
	float m, ft, in;

	std::cout << "Enter your measurement system, 0 for metric, 1 for imperial: ";
    std::cin >> sys;
    if(sys == 0){
        std::cout << "Enter distance in metres: ";
        std::cin >> m;
        std::cout << m << " metre in feet and inches is: ";
        in = m * 39.3701;
        ft = (in / 12);
        ft = (int)ft;
        in = in - (ft * 12);
        std::cout << ft << "\'" << in << "\"";
    } else {
        std:: cout << "Enter distance in feet and inches: ";
        std::cin >> ft >> in;
        m = (ft * 0.3048) + (in * 0.0254);
        std::cout << ft << "\'" << in << "\"" << "feet and inches in metres is: " << m;
    }
	
	return 0;
}