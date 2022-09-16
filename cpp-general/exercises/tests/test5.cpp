#include <iostream>

using namespace std;

int main() {
    
    //Ternary operator in C++.
    int n1, n2;
    cout << "n1: ";
    cin >> n1;
    cout << "n2: ";
    cin >> n2;
    cout << "---------------------------------------\n";
    if (n2 == 0) {
        cout << "Bad value for n2." << endl;
        exit(-1);
    }
    if (n1 > n2? true : false) cout << "n1(" << n1 <<") greater than n2(" << n2 << ")." << endl;
    else cout << "They are either equal or n2 is greater than n1" << endl;
    cout << "---------------------------------------\n";
    cout << "n1/n2 has quocient " << n1 / n2 << endl;
    cout << "and rest " << n1 % n2 << endl;
    n1 = (90.00 / 12.34) + 10; //The result will be truncated because n1 is of type integer.
    //If all operands are integer, then the result will be integer.
    //If at least one of the operators has decimal digits, then the result will be of floating point.
    cout << n1 << endl; //Truncated!

    return 0;
}