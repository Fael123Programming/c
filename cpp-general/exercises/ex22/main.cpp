#include <iostream>
#include <cmath>

using namespace std;

void getData(double&, double&, double&, double&);

void showResults(double, double, double, double);

double unitPrice(double, double);

int main() {
    double diameterSmall, priceSmall, diameterLarge, priceLarge;
    getData(diameterSmall, priceSmall, diameterLarge, priceLarge);
    showResults(diameterSmall, priceSmall, diameterLarge, priceLarge);

    return 0;
}

void getData(double& diameterSmall, double& priceSmall, double& diameterLarge, double& priceLarge) {
    cout << "--------------------------\n";
    cout << "Which pizza is cheaper?\n";
    cout << "--------------------------\n";
    cout << "Small pizza diameter: ";
    cin >> diameterSmall;
    cout << "Small pizza price: $";
    cin >> priceSmall;
    cout << "Large pizza diameter: ";
    cin >> diameterLarge;
    cout << "Large pizza price: $";
    cin >> priceLarge;
}

void showResults(double diameterSmall, double priceSmall, double diameterLarge, double priceLarge) {
    double unitPriceSmall = unitPrice(diameterSmall, priceSmall);
    double unitPriceLarge = unitPrice(diameterLarge, priceLarge);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "--------------------------\n";
    cout << "Small pizza - Price per area: $" << unitPriceSmall << endl;
    cout << "Large pizza - price per area: $" << unitPriceLarge << endl;
    cout << "It's better to buy the ";
    if (unitPriceSmall < unitPriceLarge) {
        cout << "small";
    } else {
        cout << "large";
    }
    cout << " one.\n";
}

double unitPrice(double diameter, double price) {
    const double PI = 3.141592;
    double radius = diameter / 2.0;
    double area = PI * radius * radius;
    return price / area; //Price per area.
}
