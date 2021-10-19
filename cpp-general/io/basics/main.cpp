#include <iostream>
using namespace std;
//The library iostream is included because it provides us three objects that were created specifically for input/output
//purposes. They are: cin, cout and cerr.
//The libraries in C++ put their definitions in a namespace.
//A namespace is a collection of definitions.

int main(){
    cout << "Welcome to your system." << endl;
    //'<<' is called as insertion operator.
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    double PI = 3.141592;
    cout << "PI: " << PI << endl;
    cout.precision(6);
    cout << "PI: " << PI << endl;
    //Use 'cout' to regular outputs on terminal.
    //Use 'cerr' to emit error messages on terminal.
    int n1, n2;
    cout.precision(2);
    cout << "Enter two numbers. The second will divide the first: ";
    cin >> n1 >> n2; //It is allowed to read multiple inputs at the same time.
    if (n2 == 0) {
        cerr << "An error occurred, please contact your administrator!\n";    
    } else cout << n1 / static_cast<double>(n2) << endl;
    
    return 0;
}