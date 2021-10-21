#include <iostream>
#include <cstdlib>

//using namespace std; -> if you want to use the whole namespace.
//using std::cin, using std::cout, using std::endl and furthermore -> if you want to use only those features.
using std::cout;

int main (){
    cout << "-----------------------------------------------------------------\n";
    cout << "All standard libraries of C++ have their definitions of names\n"; 
    cout << "(such as function names) definite in the namespace 'std'.\n";
    cout << "Then to access those features you have to use that namespace.\n";
    cout << "-----------------------------------------------------------------\n";
    system("pause");
    cout << "'using namespace std;' -> if you want to use the whole namespace.\n";
    cout << "'using std::cin, using std::cout, using std::endl and furthermore' -> if you want to use only those features.\n";
    cout << "-----------------------------------------------------------------\n";
    system("pause");

    return 0;
}