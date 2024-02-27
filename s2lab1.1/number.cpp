#include "number.h"
#include <iostream>

using namespace std;

Number::Number() {
    first = 0.0;
    second = 0.0;
}

void Number::setFirst(double value) {
    first = value;
}

double Number::getFirst() const {
    return first;
}

void Number::setSecond(double value) {
    second = value;
}

double Number::getSecond() const {
    return second;
}

void Number::init() {
    cout << "Enter the first value: ";
    cin >> first;
    cout << "Enter the second value: ";
    cin >> second;

    if (second < 0) {
        cout << "Error: Second value must be non-negative." << endl;
        first = 0.0;
        second = 0.0;
    }
}

void Number::Display() const {
    cout << "First: " << first << endl;
    cout << "Second: " << second << endl;
}

void Number::multiply(double multiplier) {
    if (multiplier != 0) {
        first *= multiplier;
        second *= multiplier;
    }
    else {
        cout << "Error: Multiplier cannot be zero." << endl;
    }
}
