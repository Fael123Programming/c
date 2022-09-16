#include <iostream>
#include "person.cpp"

using std::cout;
using std::endl;

int main() {
    
    Person p1;
    Date myDateOfBirth;
    p1.setName("Rafael Fonseca");
    myDateOfBirth.setDay(11);
    myDateOfBirth.setMonth(6);
    myDateOfBirth.setYear(2002);
    p1.setDateOfBirth(myDateOfBirth);
    string result = p1.toString();
    cout << result << endl;

    return 0;
}
