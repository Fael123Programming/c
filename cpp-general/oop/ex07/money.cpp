#include <iostream>
#include <string>

class Money {
    public:
        inline Money() : amount(0) {}

        Money(double);

        inline double getAmount() const { return amount; }

        inline void setAmount(double newAmount) { amount = newAmount >= 0 ? newAmount : 0; }

        const Money operator -(const Money&);

        void operator ()() const;

        friend std::ostream& operator <<(std::ostream&, const Money&);

        friend std::istream& operator >>(std::istream&, Money&);

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

const Money Money::operator -(const Money& other) {
    return Money(amount - other.amount);
}

void Money::operator ()() const {
    std::cout << "calling this object as a member-function\n";
}

const Money operator -(const Money& m1) {
    return Money(-m1.getAmount());
}

std::ostream& operator <<(std::ostream& out, const Money& money) {
    std::string strMoney = std::to_string(money.amount);
    int dotPos = strMoney.find(".");
    out << "$" + strMoney.substr(0, dotPos + 3);
    return out;
}

std::istream& operator >>(std::istream& in, Money& money) {
    std::cout << "$";
    in >> money.amount;
    return in;
}
