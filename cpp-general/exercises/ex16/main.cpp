#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    cout << "Generating pseudo-random numbers between 0 - " << RAND_MAX << endl;
    for (int i = 0; i < 10; i++) {
        cout << rand() << endl;
    } 
    cout << "Generating pseudo-random numbers between 0 - 10 (scaling)\n";
    for (int i = 0; i < 10; i++) {
        cout << rand() % 11 << endl;
    }
    cout << "Generating pseudo-random numbers between 0 - 1 (scaling)\n";
    for (int i = 0; i < 10; i++) {
        cout << rand() / static_cast<double> (RAND_MAX) << endl;
    }
    return 0;
}