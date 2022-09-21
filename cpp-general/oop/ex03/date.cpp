#include <iostream>
#include <ctime>

class Date {
    public:
        Date(); //Default constructor.
        Date(int, int, int);
        int getDay();
        int getMonth();
        int getYear();
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        int getSystemDay();
        int getSystemMonth();
        int getSystemYear();
        std::string toString() const;
    private:
        int day, month, year; //Default value is 0.
};

Date::Date() : day(getSystemDay()), month(getSystemMonth()), year(getSystemYear()) {}

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {
    if (day < 1 || day > 31) {
        day = getSystemDay();
    }
    if (month < 1 || month > 12) {
        month = getSystemMonth();
    }
    if (year < 1) {
        year = getSystemYear();
    }
}

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

int Date::getSystemDay() {
    time_t t = time(NULL);
    tm* tt = localtime(&t);
    return tt->tm_mday;
}

int Date::getSystemMonth() {
    time_t t = time(NULL);
    tm* tt = localtime(&t);
    return tt->tm_mon + 1;
}

int Date::getSystemYear() {
    time_t t = time(NULL);
    tm* tt = localtime(&t);
    return tt->tm_year + 1900;
}

std::string Date::toString() const {
    return std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
}
