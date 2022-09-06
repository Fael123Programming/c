#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double calculatePrice(int, double); //Function declaration or prototype.
bool inOrder(int, int, int);
bool isEven(int);
void print(string);

int main() {
    cout << calculatePrice(10, 45.67) << endl;
    cout << round(2.534) << endl;
    cout << inOrder(1, 100, 45) << endl;
    print("Program has ended.");
    return 0;
}
//Function definition.
double calculatePrice(int items, double price) {  //Header
    return items * price * 1.05; //Body
}

bool inOrder(int n1, int n2, int n3) {
    return n1 <= n2 && n2 <= n3;
}

bool isEven(int number) {
    return number % 2 == 0;
}

void print(string str) {
    cout << str << endl;
}