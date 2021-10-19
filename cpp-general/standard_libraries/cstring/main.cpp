#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
    char str1[] = "My dream was ", str2[] = "to become a brilhant footballer";
    strcat(str1, str2); //Pointers required!
    cout << str1 << endl;
    cout << strcmp("A", "B") << endl;
    cout << strcmp("e", "b") << endl;
    cout << strcmp("z", "z") << endl;
    char str3[] = "But now, let me focus on computing...";
    strcpy(str1, str3);
    cout << str1 << endl;
    cout << "Mezadus has " << strlen("mezadus") << " chars.\n";
    string name = "Mezadus";
    cout << name << " has " << name.length() << " chars.\n";
    return 0;
}