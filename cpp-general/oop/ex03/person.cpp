#include <iostream>
#include "date.cpp"

using std::string;

class Person {
    public:
        //Member functions.
        string getName();
        Date getDateOfBirth();
        void setName(string);
        void setDateOfBirth(Date);
        string toString();
    private:
        //Member variables.
        string name;
        Date dateOfBirth;
};

string Person::getName() {
    return name;
}

Date Person::getDateOfBirth() {
    return dateOfBirth;
}

void Person::setName(string newName) {
    name = newName;
}

void Person::setDateOfBirth(Date newDateOfBirth) {
    dateOfBirth = newDateOfBirth;
}

string Person::toString() {
    return "name=" + name + ", dateOfBirth=" + dateOfBirth.toString();
}