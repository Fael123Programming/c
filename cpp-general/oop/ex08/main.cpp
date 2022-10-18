#include <iostream>
#include <map>

class Car {
    public:
        inline Car(std::string brand) : brand(brand) {}

        std::string brand;
};

class Truck : public Car {
    public:
        inline Truck(std::string brand, int capacity) : Car(brand), capacity(capacity) {}

        int capacity;
};

int main() {
    std::map<std::string, Car> garage; // Polymorphism! We handling all entities by only one abstract entity: Car.
    Car c1("Toyota");
    Truck t1("Volvo", 1000);

    // std::cout << "Car c1 brand: " << c1.brand << std::endl;
    // std::cout << "Truck t1 brand: " << t1.brand << " and capacity: " << t1.capacity << std::endl;
    garage.insert(std::pair<std::string, Car>(c1.brand, c1));
    garage.insert(std::pair<std::string, Car>(t1.brand, t1));
    std::cout << garage.at("Toyota").brand << std::endl;

    return 0;
}