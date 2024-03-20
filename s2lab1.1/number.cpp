#include "number.h"

Number::Number() : first(0), second(0.0) {}

void Number::Init(int first, double second) {
    if (second < 0) {
        std::cerr << "Error: second value must be non-negative.\n";
        exit(EXIT_FAILURE);
    }
    this->first = first;
    this->second = second;
}

void Number::Read() {
    std::cout << "Enter the first part: ";
    std::cin >> first;
    std::cout << "Enter the second part: ";
    std::cin >> second;
}

void Number::Display() const {
    std::cout << "Number: " << first << ";" << second << std::endl;
}

void Number::multiply(double factor) {
    first *= factor;
    second *= factor;
}
