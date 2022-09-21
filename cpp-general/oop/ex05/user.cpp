#include <iostream>
#include "../ex03/date.cpp"

class User {
    public:
        User();
        User(std::string, const Date&);
        std::string toString() const;
    private:
        std::string name;
        Date dateOfBirth;
};

User::User() {}

User::User(std::string name, const Date& dateOfBirth) : name(name), dateOfBirth(dateOfBirth) {}

std::string User::toString() const {
    return name + ", " + dateOfBirth.toString();
}