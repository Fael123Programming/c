#include <ios>
#include <iostream>
#include "calc.cpp"

int main() {
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);
    double sub = Calc::sub(100, 200), radius = 6.78;
    std::cout << sub << std::endl;
    std::cout << Calc::mult(Calc::PI, radius * radius) << std::endl;
    return 0;
}

