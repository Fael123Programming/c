#include <iostream>

using namespace std;

int main() {
    int languages;
    cout << "Hello, reader.\n";
    cout << "Welcome to C++.\n";
    cout << "How many programming languages have you ever used? ";
    cin >> languages;
    if (languages < 1) {
        cout << "Read the preface. Maybe you'd prefer\na more basic book from the same author.\n";
    } else {
        cout << "Have fun!!!\n";
    }
    return 0;
}