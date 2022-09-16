#ifndef DATE_H
#define DATE_H

class Date {
    public:
        Date(int monthDay, int monthNumber, int year);  // Constructor
        Date();
        void print();
        void setMonthDay(int newMonthDay);
        void setMonthNumber(int newMonthNumber);
        void setYear(int newYear);
        int getMonthDay();
        int getMonthNumber();
        int getYear();
    private:
        int monthDay, monthNumber, year;
};

#endif
