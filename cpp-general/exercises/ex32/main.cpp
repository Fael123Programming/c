#include <iostream>

using namespace std;

void addOne(int[], int);

void print(int[], int);

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print(numbers, 10);
    addOne(numbers, 10);
    print(numbers, 10);
    return 0;
}

void addOne(int vector[], int size) {
    for (int i = 0; i < size; i++) {
        vector[i]++;
    }
}

void print(int vector[], int size) {
    for (int i = 0; ; i++) {
        cout << vector[i];
        if (i < size - 1) {
            cout << " ";
        } else {
            cout << endl;
            break;
        }
    }
}