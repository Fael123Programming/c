#include <iostream>

using std::cout;
using std::endl;

int main() {
    //Scope rules.
    {
        int x = 1;
        cout << x << endl; //1
        {
            cout << x << endl; //1
            int x = 2;
            cout << x << endl; //2
            {
                cout << x << endl; //2
                int x = 3;
                cout << x << endl; //3
            }
            cout << x << endl; //2
        }
        cout << x << endl; //1
    }
//An inner scope may access variables of an outter one.
    return 0;
}