#include <iostream>

using namespace std;

int main() {
    
    const double TAX = 6.9;
    double deposit;
    cout << "Type the total value of your deposit: $";
    cin >> deposit;
    double newBalance = deposit + deposit * (TAX / 100);
    cout << "In a year, this deposit would augment to\n$" 
        << newBalance <<" which is an amount worth to wait for.\n";
    
    return 0;
}