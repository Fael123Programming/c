#include <iostream>
//#define NDEBUG //To disable assertions uncomment this line.
#include <cassert>

using namespace std;

void getData(double&, double&);

double divide(double, double);

int main() {
    double n1, n2;
    getData(n1, n2);
    assert(n2 != 0);
    cout << n1 << " / " << n2 << " = " << divide(n1, n2) << endl;
    return 0;
}

void getData(double& n1, double& n2) {
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
}

double divide(double n1, double n2) {
    return n1 / n2;
}