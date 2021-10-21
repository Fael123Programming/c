#include <iostream>
#include <cstdlib>

using namespace std;

#define STOP RAND_MAX

int main(){
    int number;
    while ((number = rand()) != STOP) {
        cout << number << endl;
    }
    cout << number << endl;
    cout << "rand() generates an integer number between 0 and " << RAND_MAX << " where both are inclusive\n";
    system("pause");
    system("cls");
    srand(423424);
    cout << "{";
    for (int i = 0; i < 100; i++) {
        cout << rand();
        if (i < 99) cout << " ,";   
    }
    cout << "}";

    return 0;
}