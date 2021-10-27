#include <iostream>

using namespace std;

int main(){
    int x, y, z;
    double form1, form2, form3, form4;
    cin >> x >> y >> z;
    form1 = 3.0 * x;
    form2 = 3.0 * x + y;
    form3 = (x + y) / 7.0;
    form4 = (3.0 * x + y) / (z + 2.0);
    cout << "----------------------------------------------\n";
    cout << "3x = " << form1 << endl;
    cout << "3x + y = " << form2 << endl;
    cout << "(x + y) / 7 = " << form3 << endl;
    cout << "(3x + y) / (z + 2) = " << form4 << endl;
    cout << "----------------------------------------------\n";
    char a, b, c;
    a = 'b';
    b = 'c';
    c = a;
    cout << a << b << c << 'c' << endl;
    int number = (1/3) * 3; //Integer division of 1 by 3 results in 0.
    cout << "(1/3) * 3 is equal to " << number << endl;

    return 0;
}