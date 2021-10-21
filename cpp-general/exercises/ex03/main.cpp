#include <iostream>

using namespace std;

const double TAX_SALARY_AUGMENT = 0.076;

int main(){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    double annualFormerSalary;
    cout << "Annual former salary: $";
    cin >> annualFormerSalary;
    double extraQuantity = annualFormerSalary / 2 * TAX_SALARY_AUGMENT;
    double newAnnualSalary = annualFormerSalary * (1 + TAX_SALARY_AUGMENT);
    double newMonthSalary = newAnnualSalary / 12;
    cout << "--------------------------------------------------------------------------------\n";
    cout << "Extra quantity to receive based on the last year: $" << extraQuantity << endl;
    cout << "New annual salary: $" << newAnnualSalary << endl;
    cout << "New month salary: $" << newMonthSalary << endl;
    cout << "--------------------------------------------------------------------------------\n";
    return 0;
}