#include <iostream>
#include "number.h"

using namespace std;

int main() {
    Number num;
    num.init(); // з клавіатури
    num.Display(); 

    
    double multiplier;
    cout << "Enter the multiplier: ";
    cin >> multiplier;
    num.multiply(multiplier);
    num.Display(); //на екран після множ

    return 0;
}
