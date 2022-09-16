#include "../headers/Date.h"
#include <iostream>
using namespace std;

Date::Date(int monthDay, int monthNumber, int year) : monthDay(monthDay), monthNumber(monthNumber), year(year) {}

Date::Date() : monthDay(0), monthNumber(0), year(0) {}

void Date::print() {
    cout << monthDay << "/" << monthNumber << "/" << year << endl;
}

void Date::setMonthDay(int newMonthDay) {
    monthDay = newMonthDay;
}

void Date::setMonthNumber(int newMonthNumber) {
    monthNumber = newMonthNumber;
}

void Date::setYear(int newYear) {
    year = newYear;
}

int Date::getMonthDay() {
    return monthDay;
}

int Date::getMonthNumber() {
    return monthNumber;
}

int Date::getYear() {
    return year;
}
