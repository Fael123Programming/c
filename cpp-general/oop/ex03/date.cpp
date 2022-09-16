#include <iostream>
#include <string>

using std::string;
using std::to_string;

class Date {
    public:
        int getDay();
        int getMonth();
        int getYear();
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        string toString();
    private:
        int day, month, year;
};

int Date::getDay() {
    return day;
}

int Date::getMonth() {
    return month;
}

int Date::getYear() {
    return year;
}

void Date::setDay(int newDay) {
    if (newDay < 1 || newDay > 31) {
        return;
    }
    day = newDay;
}

void Date::setMonth(int newMonth) {
    if (newMonth < 1 || newMonth > 12) {
        return;
    }
    month = newMonth;
}

void Date::setYear(int newYear) {
    if (newYear < 1) {
        return;
    }
    year = newYear;
}

string Date::toString() {
    return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
}