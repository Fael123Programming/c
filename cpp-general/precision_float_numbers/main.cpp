#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);  //Rounds and prints floating-point numbers with 2 decimal places.
    cout << (450 / static_cast<double>(99)) << endl;
    return 0;
}