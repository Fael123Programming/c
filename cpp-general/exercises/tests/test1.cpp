#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    cout << "-------------------------------------------------------------------------------" << endl;
    bool check = !true, check2 = ~false;
    cout << "check is " << check << endl;
    cout << "check2 is " << check2 << endl;
    cout << "You can use as NOT logic operator either '!' or '~' in C++." << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "There go the primitive types C++ holds." << endl;
    short int vr1; //or 'short' only. 2 bytes.
    int vr2; //4 bytes.
    long int vr3; //or 'long' only. 4 bytes. Why does it exist knowing that its size is the same of 'int'?
    float vr4; //4 bytes.
    double vr5; //8 bytes.
    long double vr6; //10 bytes for it.
    char vr7; //1 byte.
    bool vr8; //1 byte.
    //If you want unsigned integer numbers (only positive), you can type before 'short', 'int' or 'long' the keyword 'unsigned'.
    //Let us see an example.
    cout << endl;
    unsigned short counter = 0;
    for (; counter < 10; counter ++) {
        cout << "counter==" << counter << endl;
    }
    cout << endl;
    cout << "The standard library <string> provides the type 'string' which is a group of characters." << endl;
    string name;
    cout << "Enter you name to proceed: ";
    cin >> name;
    if (name == "Rafael") {
        cout << "Access permitted.";
    } else {
        cout << "Access denied.";
    }
    cout << endl;
    string systemName = "Windows 11";
    //In C++ the expression or value in the right side of an assignment is called 'rvalue' and the variable identifier
    //in the left side is called 'lvalue'.
    //Let us define some important concepts on variable creation:
    //When you choose a type and an identifier for a variable, you did the declaration of it.
    //Whereas you're doing that, inside your computer memory space is being allocated to contain a value for that variable.
    //This is called definition of the variable!
    //When you enter a value onto a variable, you initialized it!
    //Then, three steps are done: declaration, definition and initialization!
    //To initialize a variable, use either '=' or '()'.
    //'()' is to be used only if you declare and initialize a variable at the same line.
    short students(123);
    cout << "students are " << students << endl;
    long double bigDouble; //Non-initialized variable!
    cout << "memory trash: " << bigDouble << endl;
    long int what = true;
    cout << what << endl; //true is worth 1.
    what = false;
    cout << what << endl; //false is worth 0.
    what = 123123123;
    bool b = what;
    cout << b << endl; //Whatever number different of 0 is evaluated as true.
    what = 0;
    b = what;
    cout << b << endl; //0 is evaluated as false.

    return 0;
}