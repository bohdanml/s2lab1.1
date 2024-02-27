#pragma once

#define NUMBER_H

class Number {
private:
    double first;
    double second;

public:
    Number();
    void setFirst(double value);
    double getFirst() const;
    void setSecond(double value);
    double getSecond() const;
    void init();
    void Display() const;
    void multiply(double multiplier);
};


