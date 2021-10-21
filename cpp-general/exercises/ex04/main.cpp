#include <iostream>

using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    double loanValue, feeTax;
    int durationInMonths;
    cout << "Loan value: $";
    cin >> loanValue;
    cout << "Fee tax (in percentage): ";
    cin >> feeTax;
    cout << "Duration (in months): ";
    cin >> durationInMonths;
    double nominalValue = loanValue;
    while (nominalValue * (1 - (feeTax / 100) * (durationInMonths / 12.00)) < loanValue) {
        //While we did not find a value that when subtracted by its specific total fee, it is equal to loanValue.
        nominalValue++; //Then we have to count till we get it...
    }
    cout << "-------------------------------------------------------------\n";
    cout << "Nominal value: $" << nominalValue << endl;
    cout << "Monthly payment: $" << nominalValue / durationInMonths << endl;
    cout << "Total fee: $" << nominalValue * (feeTax / 100) * (durationInMonths / 12.00) << endl;
    cout << "--------------------------------------------------------------------------------\n";
    return 0;
}