#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include "headers/converter.h"
#include "headers/asker.h"
#include "headers/validation.h"

using namespace std;

int main(){
    //Defining only 2 decimal places for decimal numbers to be printed.
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //-----------------------------------------------------------------
    converter conv;
    asker asker;
    validation val;
    string opt, temp;
    while (1) {
        opt = asker.menu();
        if(val.isInvalidOpt(opt, 1, 4)) {
            cout << "-----------------------------------------------------------------\n";
            cout << "                   -> Invalid option <-\n";
            cout << "-----------------------------------------------------------------\n";
        } else if (opt == "1") {
            cout << "Celsius: ";
            cin >> temp;
            system("cls");
            if (val.isInvalidNumber(temp)) {
                cout << "-----------------------------------------------------------------\n";
                cout << "                   -> Invalid number <-\n";
                cout << "-----------------------------------------------------------------\n";
            } else {
                cout << "-----------------------------------------------------------------\n";
                cout << "Celsius: " << temp << endl;
                cout << "Fahrenheit: " << conv.celToFah(atof(temp.c_str())) << endl;
                cout << "Kelvin: " << conv.celToKel(atof(temp.c_str())) << endl;
                cout << "-----------------------------------------------------------------\n";
            }
        } else if (opt == "2") {
            cout << "Fahrenheit: ";
            cin >> temp;
            system("cls");
            if (val.isInvalidNumber(temp)) {
                cout << "-----------------------------------------------------------------\n";
                cout << "                   -> Invalid number <-\n";
                cout << "-----------------------------------------------------------------\n";
            } else {
                cout << "-----------------------------------------------------------------\n";
                cout << "Fahrenheit: " << temp << endl;
                cout << "Celsius: " << conv.fahToCel(atof(temp.c_str())) << endl;
                cout << "Kelvin: " << conv.fahToKel(atof(temp.c_str())) << endl;
                cout << "-----------------------------------------------------------------\n";
            }
        } else if (opt == "3") {
            cout << "Kelvin: ";
            cin >> temp;
            system("cls");
            if (val.isInvalidNumber(temp)) {
                cout << "-----------------------------------------------------------------\n";
                cout << "                   -> Invalid number <-\n";
                cout << "-----------------------------------------------------------------\n";
            } else {
                cout << "-----------------------------------------------------------------\n";
                cout << "Kelvin: " << temp << endl;
                cout << "Celsius: " << conv.kelToCel(atof(temp.c_str())) << endl;
                cout << "Fahrenheit: " << conv.kelToFah(atof(temp.c_str())) << endl;
                cout << "-----------------------------------------------------------------\n";
            }
        } else {
            cout << endl;
            exit(0);
        }    
        system("pause");
        system("cls");
    }
    return 0;
}