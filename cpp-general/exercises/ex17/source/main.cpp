#include <iostream>
#include "time_guesser.cpp"
#include <cstdlib>

using namespace std;

int main() {
    TimeGuesser tg;
    cout << tg.getPrediction(9, 5) << endl;
    for (int i = 0; i < 100; i++) {
        cout << 5 + rand() % 6 << endl; //5 - 10
    }
    int seed;
    cin >> seed;
    srand(seed);
    for (int i = 0; i < 10; i++) {
        cout << rand() / static_cast<double>(RAND_MAX) << endl; //0 - 1
    }
    return 0;
}