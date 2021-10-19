#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>

using namespace std;

#define FACTOR 6.789 //Neither primitive type nor equal sign and semi-colon are required here!
//FACTOR is also a global entity in the program.

int main(){
    const long double PI(3.141592); //Constant or literal! It cannot be changed.
    //PI = 2.74;
    //The line above is invalid! 
    //FACTOR demontrates us another way to create a literal in C++.
    cout << "PI:" << PI << endl;
    cout << "FACTOR:" << FACTOR << endl;
    const int DEV_PLACE(90), MAX_TRI_MAG(7888);

    return 0;
}