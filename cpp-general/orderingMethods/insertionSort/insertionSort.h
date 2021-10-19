#include <iostream>
#include <string>
#include "../../data_types/map.h"

using namespace std;

void insertionSort(int *array, int size) {
    int aux, j;
    for (int i = 1; i < size; i++) {
        aux = array[i];
        for (j = i; j > 0 && aux < array[j - 1]; j--) {
            array[j] = array[j - 1];
        }
        array[j] = aux;
    }
}

void insertionSortForMaps(map *maps, int size) {
    map aux;
    int j;
    for (int i = 1; i < size; i++) {
        aux = maps[i];
        for (j = i; j > 0 && aux.value < maps[j - 1].value; j--) {
            maps[j] = maps[j - 1];
        }
        maps[j] = aux;
    }
}