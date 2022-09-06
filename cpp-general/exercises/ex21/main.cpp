#include <iostream>

using namespace std;

void input(int&);

int main() {
    int number;
    input(number);
    cout << "You've given me " << number << endl;
    return 0;
}

void input(int& number) {
    cout << "Number: ";
    cin >> number;
}
