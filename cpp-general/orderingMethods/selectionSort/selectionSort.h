#include <iostream>
#include <string>
#include "../../data_types/map.h"

using namespace std;

void selectionSort(int *array, int size) {
    int aux, posMin;
    for (int i = 0; i < size - 1; i++) {
        posMin = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[posMin]) {
                posMin = j;
            }    
        }
        //Here, we already have caught the less number in our array of numbers!
        if (i != posMin) {
            aux = array[posMin];
            array[posMin] = array[i];
            array[i] = aux;
        }
    }
}

void selectionSortForMaps(map *maps, int size) {
    map aux;
    int posMin;
    for (int i = 0; i < size - 1; i++) {
        posMin = i;
        for (int j = i; j < size; j++) {
            if (maps[j].value < maps[posMin].value) {
                posMin = j;
            }
        }
        if (posMin != i) {
            aux = maps[posMin];
            maps[posMin] = maps[i];
            maps[i] = aux;
        }
    }
}