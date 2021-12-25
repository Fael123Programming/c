#include <stdio.h>

#define MAXSIZE 10

void insertion_sort(int *array, int size) {
    int j;
    int key;
    for (int i = 1; i < size; i++) {
        j = i - 1;
        key = array[i]; //Backup variable.
        while (j > -1 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void print(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i == size - 1)
            printf("\n");
        else
            printf(" ");    
    }

}
int main(){
    int numbers[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    print(numbers, MAXSIZE);
    insertion_sort(numbers, MAXSIZE);
    print(numbers, MAXSIZE);

    return 0;
}