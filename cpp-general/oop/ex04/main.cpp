#include <iostream>
#include "car.cpp"

using std::string;
using std::cout;
using std::endl;

int main() {
    Car c1;
    c1.setBrand("Chevrolet");
    cout << c1.getBrand() << endl;
    // c1.brand = ""; //Not allowed.
    return 0;
}