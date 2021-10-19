#include <iostream>
#include <string>
#include "selectionSort.h"

void print(int *array, int size) {
    cout << "{";
    for (int i = 0; i < size; i++) {
        cout << array[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "}";
}

using namespace std;

int main(){
    int numbers[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};    
    cout << "--------------------------------------------------------" << endl;
    cout << "Before ordination: ";
    print(numbers, 10);
    selectionSort(numbers, 10);
    cout << "\nAfter ordination: ";
    print(numbers, 10);
    cout << "\n--------------------------------------------------------" << endl;
    int values[] = {23, 4, 67, -8, 90, 54, 21};
    cout << "Before ordination: ";
    print(values, 7);
    selectionSort(values, 7);
    cout << "\nAfter ordination: ";
    print(values, 7);
    cout << "\n--------------------------------------------------------" << endl;
    map m1, m2, m3, m4, m5;
    m1.key = "m1";
    m1.value = 999;
    m2.key = "m2";
    m2.value = 88;
    m3.key = "m3";
    m3.value = 88;
    m4.key = "m4";
    m4.value = 70;
    m5.key = "m5";
    m5.value = -100;
    map maps[] = {m1, m2, m3, m4, m5};
    cout << "Before ordination: ";
    printMaps(maps, 5);
    selectionSortForMaps(maps, 5);
    cout << "\nAfter ordination: ";
    printMaps(maps, 5);
    cout << "\n--------------------------------------------------------" << endl;
    //Because this last result, we conclude that selection sort algorithms are non-stable.
    return 0;
}