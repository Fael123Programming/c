#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

typedef struct asker {
    string menu(){
        cout << "-----------------------------------------------------------------\n";
        cout << "                   TEMPERATURE CONVERTER\n";
        cout << "-----------------------------------------------------------------\n";
        cout << "(1) Celsius\n";
        cout << "(2) Fahrenheit\n";
        cout << "(3) Kelvin\n";
        cout << "(4) Exit\n";
        cout << "-----------------------------------------------------------------\n";
        string opt;
        cout << "-> ";
        cin >> opt;
        system("cls");
        return opt;
    }
}asker;