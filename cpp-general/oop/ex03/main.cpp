#include <iostream>
#include "person.cpp"

int main() {
    // Person p1;
    // Date myDateOfBirth;
    // p1.setName("Rafael Fonseca");
    // myDateOfBirth.setDay(11);
    // myDateOfBirth.setMonth(6);
    // myDateOfBirth.setYear(2002);
    // p1.setDateOfBirth(myDateOfBirth);
    // string result = p1.toString();
    // std::cout << result << std::endl;
    Date d1 = Date(20, 12, 0);
    std::cout << d1.toString() << std::endl; 
    Date d2; //Calls default constructor.
    std::cout << d2.toString() << std::endl;
    //Date d3(); //WRONG!
    Date d4(16, 9, 2022);
    std::cout << d4.toString() << std::endl;
    //Cast a char to a digit.
    std::cout << static_cast<int>('6') - static_cast<int>('0') << std::endl;
    //'6'-'0' -> 6 - 0 -> 6.
    return 0;
}
