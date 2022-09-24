#include <iostream>
#include <string>

class Money {
    public:
        Money(double);

        inline double getAmount() const { return amount; }

        inline void setAmount(double newAmount) { amount = newAmount >= 0 ? newAmount : 0; }

        std::string toString() const;

    private:
        double amount;
};

Money::Money(double amount) : amount(amount) {}

std::string Money::toString() const {
    std::string strMoney = std::to_string(amount);
    int dotPos = strMoney.find(".");
    return "$" + strMoney.substr(0, dotPos + 3); //The amount with 2 decimal places.
}

const Money operator +(const Money& m1, const Money& m2) {
    return Money(m1.getAmount() + m2.getAmount());
}

const Money operator -(const Money& m1, const Money& m2) {
    return Money(m1.getAmount() - m2.getAmount());
}

const Money operator -(const Money& m1) {
    return Money(-m1.getAmount());
}
