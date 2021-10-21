#include <iostream>
#include <string> 
//This header file provides us the class string.
//Then going from it we can instantiate string 
//objects by calling a constructor function.

using namespace std;

int main(){
    string str; //Empty string.
    string str2("A string C converted into a string object of C++");
    cout << str << endl;
    cout << str2 << endl;
    cout << "At position " << str2.length() - 1 << " we can find the character '" << str2.at(str2.length() - 1) << "'\n";
    cout << "At position 0 we can find the character '" << str2[0] << "'\n";
    cout << str2.substr(9, 1) << " or " << str2.substr(45, 3) << " ?\n";
    str2 += " which is a better way to handle strings!";
    cout << str2 << endl;
    cout << str.empty() << endl;
    str.insert(0, "Now it left to be an empty string!");
    cout << str << endl;
    str.erase(3, 18); //from position 3 erase 18 characters.
    str.insert(3, " not an ");
    cout << str << endl;
    cout << (str < str2) << endl; //lexicographic comparison.
    cout << ("a" < "b") << endl;
    string myName = "Rafael Quintino Fonseca Guimaraes", anotherName = "Mateus Pereira da Silva";
    cout << "Is " << myName << " before than " << anotherName << " ? " << (myName < anotherName) << endl;
    cout << "'a' is in position " << myName.find('a') << " in Rafael" << endl;
    string crazy("sdasnkx1bwccq12");
    cout << "'x1bw' starts in position " << crazy.find("x1bw", 5) << " in " << crazy << endl;
    cout << crazy.find_first_not_of("sdasnkx1bwccq1", 0) << endl;
    return 0;
}