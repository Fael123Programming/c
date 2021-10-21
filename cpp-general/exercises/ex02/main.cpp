#include <iostream>

using namespace std;

const double QUANT_IN_DRINK = 0.001;

int main(){
    double quantToKillARat, ratWeight, personWantedWeight, quantityAllowedToDrink;
    cout << "Quantity to kill a rat: ";
    cin >> quantToKillARat;
    cout << "Weight of the rat (kg): ";
    cin >> ratWeight;
    cout << "Person wanted weight (kg): ";
    cin >> personWantedWeight;
    double quantToKillAPerson = (quantToKillARat * personWantedWeight) / ratWeight;
    cout << "----------------------------------------------------------------------------\n";
    cout << "Considering that a drink has 0.1% of forbidden substance, you will can\n"
        << "drink at most " << (quantToKillAPerson / QUANT_IN_DRINK) << " drinks.\n"; 
    cout << "----------------------------------------------------------------------------\n";
    return 0;
}