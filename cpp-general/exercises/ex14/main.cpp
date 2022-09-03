#include <iostream>
using std::cout;
using std::endl;

int main() {
    cout << "------------------------------------" << endl;
    for (int i = 1; i <= 10; i++) {
        for (int j = 10; j >= 0; j--) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << "------------------------------------" << endl;
    }
    return 0;
}