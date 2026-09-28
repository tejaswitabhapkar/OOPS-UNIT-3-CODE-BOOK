#include <iostream>

int add(int first, int second) 
{
    return first + second;
}

double add(double first, double second) {
    return first + second;
}

int add(int first, int second, int third) {
    return first + second + third;
}

int main() {
    std::cout << "Sum of two integers: " << add(50, 25) << '\n';
    std::cout << "Sum of two doubles: " << add(5.5, 4.5) << '\n';
    std::cout << "Sum of three integers: " << add(5 , 10 ,15) << '\n';

    return 0 ;
}
