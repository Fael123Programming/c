#include <iostream>
#include <string>

using namespace std;


struct Date {
    int day, month, year;
};

struct Person {
    string name;
    Date dateOfBirth;
};

void readPersonData(Person&);

void readDateData(Date&);

void printOutData(Person);

string dateFormatted(Date);

int main() {
    Person p1;
    readPersonData(p1);
    printOutData(p1);
    return 0;
}

void readPersonData(Person& person) {
    cout << "Person Data\n";
    cout << "-----------------------------\n";
    cout << "Name: ";
    cin >> person.name;
    cout << "-----------------------------\n";
    cout << "Date of birth\n";
    cout << "-----------------------------\n";
    readDateData(person.dateOfBirth);
}

void readDateData(Date& date) {
    cout << "Day: ";
    cin >> date.day;
    cout << "Month: ";
    cin >> date.month;
    cout << "Year: ";
    cin >> date.year;
}

void printOutData(Person person) {
    cout << "-----------------------------\n";
    cout << "Name: " << person.name << endl;
    cout << "Date of birth: " << dateFormatted(person.dateOfBirth) << endl;
}

string dateFormatted(Date date) {
    return to_string(date.day) + "/" + to_string(date.month) + "/" + to_string(date.year);
}