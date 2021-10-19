#include <iostream>

using namespace std;

int main(){
    //Increment and decrement operators can be used only with variables and never with expressions or numbers themselves.
    //Ex.: (x + y)++, --(x + y), 5++ are all invalid in C++.
    short int five = 5;
    cout << five++ << endl;
    cout << five << endl;
    five = 5;
    cout << ++five << endl;
    cout << five << endl;
    five = 5;
    cout << five-- << endl;
    cout << five << endl;
    five = 5;
    cout << --five << endl;
    cout << five << endl;
    five = 5;
    cout << "A tricky operation" << endl;
    cout << five + (++five) << endl; //
    five = 5;
    cout << five + ++five << endl;
    short int two = 2;
    if (two <= 2 && ++two > 2) {
        cout << "Ok" << endl;
    }
    //Do not write code that depends on the order of execution of subexpressions!
    return 0;
}