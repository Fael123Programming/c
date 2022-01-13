#include <stdio.h>

#define MAXSIZE 10

void insertion_sort(int *array, int size) {
    int i, k;
    for (int j = 1; j < size; j++) {
        i = j - 1;
        k = array[j];
        while (i > -1 && array[i] < k) {
            array[i + 1] = array[i];
            i--;
        }
        array[i + 1] = k;
    }
}

int main(){
    printf("Decreasing Insertion Sort");
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    insertion_sort(numbers, MAXSIZE);
    for (int x = 0; x < MAXSIZE; x++) {
        printf("%d", numbers[x]);
        if (x == MAXSIZE - 1)
            printf("\n");
        else    
            printf(" ");    
    }    
    return 0;
}