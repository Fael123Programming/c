#include <iostream>
#include <string>
#include "insertionSort.h"

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
    int numbers[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; //Worst case! O(size ^ 2) cost.
    cout << "--------------------------------------------------------" << endl;
    cout << "Before ordination: ";
    print(numbers, 10);
    cout << endl;
    insertionSort(numbers, 10);
    cout << "After ordination: ";
    print(numbers, 10);
    cout << "\n--------------------------------------------------------" << endl;
    int values[] = {23, 4, 67, -8, 90, 54, 21};
    cout << "Before ordination: ";
    print(values, 7);
    cout << endl;
    insertionSort(values, 7);
    cout << "After ordination: ";
    print(values, 7);
    cout << "\n--------------------------------------------------------" << endl;
    map m1, m2, m3, m4, m5;
    m1.key = "A1";
    m1.value = 200;
    m2.key = "B1";
    m2.value = 200;
    m3.key = "C1";
    m3.value = 899;
    m4.key = "D1";
    m4.value = 1222;
    m5.key = "E1";
    m5.value = 566;
    map maps[] = {m4, m5, m3, m2, m1};
    cout << "Before ordination: ";
    printMaps(maps, 5);
    insertionSortForMaps(maps, 5);
    cout << "\nAfter ordination: ";
    printMaps(maps, 5);
    cout << "\n--------------------------------------------------------" << endl;   
    //Using maps (keys and values) we notice that insertion sort is STABLE!
    //It does not alter equal objects from their original order.
    return 0;
}