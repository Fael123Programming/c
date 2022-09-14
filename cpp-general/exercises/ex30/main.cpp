#include <iostream>

using namespace std;

void fillUp(int[], int);
void printOut(int[], int);

int main() {
    int numbers[10];
    fillUp(numbers, 10);
    printOut(numbers, 10);
    int numbers2[30];
    fillUp(numbers2, 30);
    printOut(numbers2, 30);
    return 0;
}

void fillUp(int number[], int size) {
    for (int i = 0; i < size; i++) {
        number[i] = i + 1;
    }
}

void printOut(int number[], int size) {
    for (int i = 0; ; i++) {
        cout << number[i];
        if (i < size - 1) {
            cout << " ";
        } else {
            cout << endl;
            break;
        }
    }
}