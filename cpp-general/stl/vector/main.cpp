#include <iostream>
#include <vector>
#include "../../oop/ex03/date.cpp"

void print(const std::vector<int>&);

void print(const std::vector<Date>&);

int main() {
    std::vector<int> numbers;
    numbers.push_back(0);
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    numbers.push_back(6);
    numbers.push_back(7);
    numbers.push_back(8);
    numbers.push_back(9);
    print(numbers);

    std::vector<Date> dates(10);
    print(dates);
    return 0;
}

void print(const std::vector<int>& v) {
    unsigned int size = v.size();
    for (unsigned int i = 0; ; i++) {
        std::cout << v[i];
        if (i < size - 1) {
            std::cout << " ";
        } else {
            std::cout << std::endl;
            break;
        }
    }
}

void print(const std::vector<Date>& v) {
    unsigned int size = v.size();
    for (unsigned int i = 0; ; i++) {
        std::cout << v[i].toString();
        if (i < size - 1) {
            std::cout << " ";
        } else {
            std::cout << std::endl;
            break;
        }
    }
}