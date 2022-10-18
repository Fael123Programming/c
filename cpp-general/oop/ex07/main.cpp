#include <iostream>
#include "money.cpp"

int main () {
    Money m1(500), m2(900);
    std::cout << "m1 = " << m1 << std::endl;
    std::cout << "m2 = " << m2 << std::endl;
    std::cout << "m1 + m2 = " << m1 + m2 << std::endl;
    std::cout << "m1 - m2 = " << m1 - m2 << std::endl;
    std::cout << "-m1 = " << -m1 << std::endl;
    m1();
    Money m3;
    std::cin >> m3;
    std::cout << m3 << std::endl;
    return 0;
}