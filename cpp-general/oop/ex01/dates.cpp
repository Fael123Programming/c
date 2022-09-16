#include <iostream>
using namespace std;

class DayOfYear {
    public:
        void print();
        int month, day;
};

void DayOfYear::print() {
    switch (month) {
        case 1:
            cout << "January ";
            break;
        case 2:
            cout << "February ";
            break;
        case 3:
            cout << "March ";
            break;
        case 4:
            cout << "April ";
            break;
        case 5:
            cout << "May ";
            break;
        case 6:
            cout << "June ";
            break;
        case 7:
            cout << "July ";
            break;
        case 8:
            cout << "August ";
            break;
        case 9:
            cout << "September ";
            break;
        case 10:
            cout << "October ";
            break;
        case 11:
            cout << "November ";
            break;
        case 12:
            cout << "December ";
            break;
        default:
            cout << "Invalid month: " << month << endl;
            return;            
    }
    cout << day << endl;
}

int main() {
    DayOfYear today, birthday;
    cout << "-------------------------------------------" << endl;
    cout << "Today's date" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Month day: ";
    cin >> today.day;
    cout << "Month (from 1 to 12): ";
    cin >> today.month;
    cout << "-------------------------------------------" << endl;
    cout << "Your birthday's date" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Month day: ";
    cin >> birthday.day;
    cout << "Month (from 1 to 12): ";
    cin >> birthday.month;
    cout << "-------------------------------------------" << endl;
    cout << "Today is ";
    today.print();
    cout << "Your birthday is on ";
    birthday.print();
    cout << "-------------------------------------------" << endl;
    if (today.day == birthday.day && today.month == birthday.month) {
        cout << "Happy birthday!";
    } else {
        cout << "Happy not birthday!";
    }
    cout << endl;
    return 0;
}