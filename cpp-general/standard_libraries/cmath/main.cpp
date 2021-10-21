#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << fabs(-23.44) << endl;
    cout << sqrt(34.78) << endl;
    cout << pow(sqrt(34.78), fabs(-23.44)) << endl;
    cout << exp(log(1)) << endl; // e raised to ln(1)
    cout << pow(10, log10(10)) << endl;
    cout << ceil(-23.44) << endl; //round upward.
    cout << floor(-23.44) << endl; //round downward.
    cout << sin(0) << endl;
    cout << cos(3.141592 * 59.72) << endl;
    return 0;
}