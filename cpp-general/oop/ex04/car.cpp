#include <iostream>

class Car {
    std::string brand; //'private' by default.

    public:
        std::string getBrand();
        void setBrand(std::string);
};

std::string Car::getBrand() {
    return brand;
}

void Car::setBrand(std::string newBrand) {
    brand = newBrand;
}
