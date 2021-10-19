#include <iostream>
#include <cctype>

using namespace std;
int main(){
    //If the result is false, then 0 is returned.
    //If the result is true, then a number different of 0 is returned.
    cout << isalnum('A') << endl; //isalpha() || isdigit().
    cout << isalpha('A') << endl;
    cout << isdigit('A') << endl;
    cout << ispunct('A') << endl; //~isalnum(x) && x != ' '. 
    cout << isspace('\n') << endl; // ' ', '\n', '\t' and more!
    cout << islower('a') << endl;
    cout << isupper('Z') << endl;
    cout << static_cast<char>(tolower('Z')) << endl; //tolower returns an integer code.
    cout << static_cast<char>(toupper('a')) << endl; //Same way of tolower.
    cout << iscntrl('\n') << endl; //Checks whether a character is a control character (not printable, like '\n').
    cout << isprint('\t') << endl; //It is the opposite of iscntrl.
    return 0;
}