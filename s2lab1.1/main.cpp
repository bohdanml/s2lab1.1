#include <iostream>
#include "number.h"

int main() {
    Number num1;
    num1.Read();
    num1.Display();

    double factor;
    std::cout << "Enter the factor for multiplication: ";
    std::cin >> factor;
    num1.multiply(factor);
    num1.Display();

    
    return 0;
}
