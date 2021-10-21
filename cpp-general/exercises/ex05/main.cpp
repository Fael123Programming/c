#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int maximumCapacity, spectators, aux;
    cout << "Maximum capacity: ";
    cin >> maximumCapacity;
    cout << "Spectators: ";
    cin >> spectators;
    cout << "------------------------------------------\n";
    aux = maximumCapacity - spectators;
    if (aux >= 0) {
        cout << "Everything is according to law!\n";
        if (aux > 0) {
            cout << "There could be added " << aux << " people/person yet.\n";
        } else {
            cout << "Nobody can enter though.\n";
        }
    } else {
        cout << "This event cannot happen due fire risks (too many people in this meeting room).\n";
        cout << "To change it, at least " << abs(aux) << " people/person must get out.\n";
    }
    return 0;
}