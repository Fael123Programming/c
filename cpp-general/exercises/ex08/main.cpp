#include <iostream>

using namespace std;

int main() {
    const double TAX = 6.9;  //A constant entity.
    double deposit, newBalance;
    cout << "Enter your deposit: $";
    cin >> deposit;
    newBalance = deposit * (1 + TAX / 100);
    cout << "In one year, this deposit will increase up to $" << newBalance << endl;
    cout << "An amount that's worth waiting...\n";
    return 0;
}