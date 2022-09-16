#include <iostream>

using std::string;

class Car {
    string brand; //'private' by default.

    public:
        string getBrand();
        void setBrand(string);
};

string Car::getBrand() {
    return brand;
}

void Car::setBrand(string newBrand) {
    brand = newBrand;
}
