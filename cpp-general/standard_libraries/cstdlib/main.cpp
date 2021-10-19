#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << abs(-90) << endl;
    long large = -1000L;
    cout << labs(large) << endl;
    system("pause");
    system("cls");
    int twelve = atoi("12"); //Converts a string onto an integer.
    cout << twelve + 234 << endl;
    long big = atol("1312L"); //Converts a string onto a long.
    cout << big / static_cast<double>(twelve) << endl;
    double PI = atof("3.141592"); //Converts a string onto a double.
    cout << "PI rounded with 2 decimal places: " << PI << endl;
    double test = atof("123a");
    cout << test << endl;
    return 0;
}