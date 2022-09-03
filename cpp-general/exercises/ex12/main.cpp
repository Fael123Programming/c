#include <iostream>
using std::cin;
using std::cout;

int main() {
    int countdown;
    bool greeted = false;
    cout << "How many greetings do you want? (I'll give you one at bare minimum) ";
    cin >> countdown;
    do {
        cout << "Hello ";
        //countdown--;
    } while (countdown-- > 0);
    cout << "\nEnd of program\n"; 
    return 0;
}