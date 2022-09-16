#include <iostream>
#include "Date.cpp"
using namespace std;

int main() {
    Date d1(23, 8, 2020);
    d1.print();
    cout << "Year: " << d1.getYear() << endl;
    d1.setYear(2002);
    d1.print();
    return 0;
}
