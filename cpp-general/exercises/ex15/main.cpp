#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double COST_PER_SQ_FT = 10.5;
    double budget, area, sideLength;
    cout << "Inform how much money you want to spend in the dog house: ";
    cin >> budget;
    area = budget / COST_PER_SQ_FT;
    sideLength = sqrt(area);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "For a price of $" << budget << " it's possible to build a dog house with " 
        << sideLength << " ft in each side\n";
    cout << pow(2, 3.45) << endl;
    cout << abs(-891) << endl;
    cout << labs(-15000) << endl;
    cout << fabs(-45.67) << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "sqrt(" << i << ") = " << sqrt(i) << endl;
    }
    return 0;
}