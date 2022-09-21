#include <iostream>
#include <string>
#include "user.cpp"

class Account {
    public:
        Account();
        //Reference argument passing spares resources when working with objects.
        Account(const User&, const Date&, int);
        std::string toString() const; //This method does not change the object calling it.
        User getOwner();
    private:
        User owner;
        Date creationDate;
        int number;
};

Account::Account() {}

Account::Account(const User& owner, const Date& creationDate, int number) : owner(owner), creationDate(creationDate), number(number) {}

std::string Account::toString() const {
    return "owner=" + owner.toString() + ", creationDate=" + creationDate.toString() + ", number=" + std::to_string(number);
}

User Account::getOwner() {
    return owner;
}