#include <iostream>

using namespace std;

void discardOdds(int[], int);

void print(int[], int);

int main() {
    int numbers[] = {9, 10, 5, 67};
    print(numbers, 4);
    discardOdds(numbers, 4);
    print(numbers, 4);

    return 0;
}

void discardOdds(int vector[], int size) {
    for (int i = 0; i < size; i++) {
        if (vector[i] % 2 == 1) {
            vector[i] = 0;
        }
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