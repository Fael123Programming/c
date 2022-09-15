#include <iostream>
#include <iomanip>
using namespace std;

void fillUp(int[][5], int);

void printOut(int[][5], int);

int main() {
    int a[4][5];
    fillUp(a, 4);
    printOut(a, 4);
    return 0;
}

void fillUp(int numbers[][5], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> numbers[i][j];
        }
    }
}

void printOut(int numbers[][5], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; ; j++) {
            cout << numbers[i][j];
            if (j < 4) {
                cout << setw(5);
            } else {
                cout << endl;
                break;
                "asdasd"; //It does nothing.
            }
        }
    }
}