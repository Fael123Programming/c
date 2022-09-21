#include <iostream>
#include <vector>
#include "test.cpp"
#include "../../oop/ex03/date.cpp"

void print(const std::vector<int>&);

void print(const std::vector<Date>&);

void print(const std::vector<Test>&);

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

    std::vector<Test> testVector1;
    testVector1.push_back(Test(100));
    std::cout << "testVector1:\n"; 
    print(testVector1);
    std::vector<Test> testVector2;
    testVector2 = testVector1; //Copying elements from testVector1 to testVector2.
    std::cout << "testVector2:\n";
    print(testVector2);
    testVector2[0].setX(200); //Change to object copied does not affect testVector1.
    std::cout << "testVector1:\n"; 
    print(testVector1);
    std::cout << "testVector2:\n";
    print(testVector2);

    std::cout << "Size of 'numbers': " << numbers.size() << std::endl;
    numbers.resize(1); //Deleting all elements but leaving the first one.
    print(numbers);
    std::cout << "Size of 'numbers': " << numbers.size() << std::endl;
    std::cout << "Capacity of 'numbers': " << numbers.capacity() << std::endl;
    numbers.reserve(20); //Changing capacity from 16 to 20.
    std::cout << "Capacity of 'numbers': " << numbers.capacity() << std::endl;
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

void print(const std::vector<Test>& v) {
    unsigned int size = v.size();
    for (unsigned int i = 0; ; i++) {
        std::cout << v[i].getX();
        if (i < size - 1) {
            std::cout << " ";
        } else {
            std::cout << std::endl;
            break;
        }
    }
}
