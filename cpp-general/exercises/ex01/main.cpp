#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::ios;
using std::endl;

#define TON_IN_OUNCE 35273.92

int main(){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    double weightInOunces;
    cout << "Weight of a box of a stuff (in ounces): ";
    cin >> weightInOunces;
    cout << "Converted to tons: " << (weightInOunces / TON_IN_OUNCE) << endl;
    cout << static_cast<int>(ceil(TON_IN_OUNCE / weightInOunces)) << " box(es) to supply a ton of this stuff.\n";

    return 0;
}