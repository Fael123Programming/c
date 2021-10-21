#include <iostream>

using namespace std;

const double HOUR_PRICE = 16.78;

int main(){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Let us say that the normal working hours per day is 8 hours.
    //Then, multiplying 8 by 5 we get the total worked hours a week: 40 hours.
    double workedHours, rawSalary;
    int dependants;
    cout << "Worked hours (a week): ";
    cin >> workedHours;
    cout << "Dependants: ";
    cin >> dependants;
    if (workedHours > 40) { //If an employee worked extra hours.
        rawSalary = (workedHours - 40) * (HOUR_PRICE * 1.5) + 40 * HOUR_PRICE; //Extra hours is worth 50% more than regular hours. 
    } else {
        rawSalary = HOUR_PRICE * workedHours;
    }
    double socialSecurityTax = rawSalary * 0.06, federalTax = rawSalary * 0.14, stateTax = rawSalary * 0.05;
    double liquidSalary = rawSalary - socialSecurityTax - federalTax - stateTax - 10; //10 because sindicate tax.
    if (dependants >= 3) {
        liquidSalary -= 35; //Life ensurance!
    }
    cout << "----------------------------------------------\n";
    cout << "Raw salary------------$" << rawSalary << endl;
    cout << "----------------------------------------------\n";
    cout << "Social security tax---$" << socialSecurityTax << endl;
    cout << "Federal tax-----------$" << federalTax << endl;
    cout << "State tax-------------$" << stateTax << endl;
    cout << "----------------------------------------------\n";
    cout << "Liquid salary---------$" << liquidSalary << endl;
    cout << "----------------------------------------------\n";

    return 0;
}