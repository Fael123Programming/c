#include <iostream>
#include "money.cpp"

int main () {
    Money m1(500), m2(900);
    std::cout << "m1 = " << m1.toString() << std::endl;
    std::cout << "m2 = " << m2.toString() << std::endl;
    std::cout << "m1 + m2 = " << (m1 + m2).toString() << std::endl;
    std::cout << "m1 - m2 = " << (m1 - m2).toString() << std::endl;
    std::cout << "-m1 = " << (-m1).toString() << std::endl;
    return 0;
}