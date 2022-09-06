//Asks the user for a radius value and calculates the area of a circle and the volume of a sphere using it.
#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.141592;

double calculateArea(double);
//Calculates the area of a circle with the given argument as its radius.

double calculateVolume(double);
//Calculates the volume of a sphere with the given argument as its radius.

void checkRadius(double);
//Checks whether the given argument is a valid radius or not.
//If it is, shuts the program down.

int main() {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    double radius;
    cout << "Area/Volume Calculator" << endl;
    cout << "Enter radius: ";
    cin >> radius;
    checkRadius(radius);
    cout << "Area of circle: " << calculateArea(radius) << endl;
    cout << "Volume of sphere: " << calculateVolume(radius) << endl;
    return 0;
}

double calculateArea(double radius) {
    return PI * pow(radius, 2);
}

double calculateVolume(double radius) {
    return (4.0 / 3.0) * PI * pow(radius, 3);
}

void checkRadius(double radius) {
    if (radius <= 0) {
        cout << "radius must be > 0" << endl;
        exit(1);
    }
}