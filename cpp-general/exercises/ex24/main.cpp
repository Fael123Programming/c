#include <iostream>

using std::cout;
using std::endl;

//Use of default arguments.
double calculateVolume(double length, double width = 1, double height = 1) {
    return length * width * height;
}

int main() {
    cout << calculateVolume(4, 6, 2) << endl;
    cout << calculateVolume(4, 6) << endl;
    cout << calculateVolume(4) << endl;
    return 0;
}