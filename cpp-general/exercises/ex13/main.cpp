#include <iostream>
using std::cout;
using std::endl;

int main() {
    int numbers = 100, sum = 0;
    for (int i = 1; i <= numbers; i++, sum += i);
    cout << "The sum of the first " << numbers << " numbers is " << sum << endl;

    return 0;
}