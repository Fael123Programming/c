#include <iostream>
#include <string>

using namespace std;

int main(){
    int number = 13;
    cout << 60 / static_cast<double> (number) << endl; //Decimal division!
    cout << "Turning 2.9 into integer would result " << static_cast<int> (2.9) << endl;
    cout << "Turning 2 into float number would result " << static_cast<double>(2) << endl;
    //All new casting commands C++ provides us:
    //static_cast<type>(expression): for more common situations;
    //const_cast<type>(expression): to unmake constants;
    //dynamic_cast<type>(expression): to cast from a super type onto a descendant type; used in context of inheritance;
    double d = 5; //type coercion from integer to double.
    
    return 0;
}