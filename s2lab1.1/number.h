#pragma once

#include <iostream>

class Number {
private:
    int first;
    double second;

public:
    Number();
    void Init(int first, double second);
    void Read();
    void Display() const;
    void multiply(double factor);

    int getFirst() const { return first; }
    double getSecond() const { return second; }

    void setSecond(double newSecond) {
        if (newSecond < 0) {
            std::cerr << "Error: second value must be non-negative.\n";
            exit(EXIT_FAILURE);
        }
        second = newSecond;
    }
};


