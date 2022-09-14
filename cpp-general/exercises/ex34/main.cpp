#include <iostream>

using namespace std;

int outOfOrder(double[], int);

int main() {
    double numbers[] = {1.0, 1.2, 2.1, 2.5, 3.3, 4.5, 5.4, 7.9, 8.7, 9.9};
    cout << outOfOrder(numbers, 10) << endl;
    return 0;
}

int outOfOrder(double numbers[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (numbers[i] > numbers[i + 1]) {
            return i + 1; //Position of the first unordered number.
        }
    }
    return -1; //The numbers are ordered.
}