#include <iostream>

using namespace std;

void getData(double&, double&, double&, double&, double&);

void showResults(double, double, double, double, double);

//Function overload.
double unitPrice(double, double);

double unitPrice(double, double, double);

int main() {
    double roundDiameter, roundPrice, recLength, recWidth, recPrice;
    getData(roundDiameter, roundPrice, recLength, recWidth, recPrice);
    showResults(roundDiameter, roundPrice, recLength, recWidth, recPrice);

    return 0;
}

void getData(double& roundDiameter, double& roundPrice, double& rectangularLength, double& rectangularWidth, double& rectangularPrice) {
    cout << "--------------------------\n";
    cout << "Which pizza is cheaper?\n";
    cout << "--------------------------\n";
    cout << "Diameter of round pizza: ";
    cin >> roundDiameter;
    cout << "Price of round pizza: $";
    cin >> roundPrice;
    cout << "Length of rectangular pizza: ";
    cin >> rectangularLength;
    cout << "Width of rectangular pizza: ";
    cin >> rectangularWidth;
    cout << "Price of rectangular pizza: $";
    cin >> rectangularPrice;
}

void showResults(double roundDiameter, double roundPrice, double rectangularLength, double rectangularWidth, double rectangularPrice) {
    double roundUnitPrice = unitPrice(roundDiameter, roundPrice);
    double rectangularUnitPrice = unitPrice(rectangularLength, rectangularWidth, rectangularPrice);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "--------------------------\n";
    cout << "Round pizza - price per area: $" << roundUnitPrice << endl;
    cout << "Rectangular pizza - price per area: $" << rectangularUnitPrice << endl;
    cout << "It's better to buy the ";
    if (roundUnitPrice < rectangularUnitPrice) {
        cout << "round";
    } else {
        cout << "rectangular";
    }
    cout << " one.\n";
}

//Function overload.
double unitPrice(double roundDiameter, double price) {
    const double PI = 3.141592;
    double radius = roundDiameter / 2.0;
    double area = PI * radius * radius;
    return price / area;
}

double unitPrice(double length, double width, double price) {
    double area = length * width;
    return price / area;
}