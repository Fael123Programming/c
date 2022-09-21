#include <iostream>
#include "account.cpp"

int main() {
    User user("Josh Eduards", Date(12, 10, 1990));
    std::cout << user.toString() << std::endl;
    Account account(user, Date(), 1000);
    std::cout << account.toString() << std::endl;
    return 0;
}