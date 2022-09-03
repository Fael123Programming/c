#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int countdown;
    bool greeted = false;
    cout << "How many greetings do you want? ";
    cin >> countdown;
    while (countdown > 0) {
        cout << "Hello ";
        countdown--;
        if (!greeted) {
            greeted = true;
        }
    }
    if (greeted) {
        cout << endl;
    }
    cout << "End of program\n"; 
    return 0;
}