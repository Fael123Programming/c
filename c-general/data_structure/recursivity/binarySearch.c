#include <stdio.h>

/*Better than sequential search, binary search divides your group of elements into two parts each time and looks for the specified element.
Note that as the execution goes forward, your group of data becomes smaller.
There is a requirement to use this type of search: you have got to organize your data in an increasing order because it uses mathematical
comparison between values (>,== and <)*/

#define number 6789
const int vector[] = {56,78,123,789,1900,6789,10000,67895};

int binSrch(firstPos, lastPos) //Binary search for 'number' in array 'vector'.
int firstPos, lastPos;
{
    if (firstPos > lastPos) return -1; //In case that number was not found.
    int mid = (firstPos + lastPos) / 2; //Integer division; it gets the middle position of the vector.
    return number == vector[mid] ? mid : number < vector[mid] ? binSrch(firstPos, mid - 1) : binSrch(mid + 1, lastPos);
}

int bs(int *array, int low, int high, int wanted) {
    if (low > high) //Cost 1
        return low;  //Cost 1
    int mid = (low + high) / 2; //Cost 1
    if (wanted == array[mid]) //Cost 1
        return mid; //Cost 1
    else if (wanted < array[mid]) //Cost 1
        return bs(array, low, mid - 1, wanted); //Cost T(n / 2) 
    else
        return bs(array, mid + 1, high, wanted); //Cost T(n / 2)       
}

int binarysearch(int *numbers, int size, int wanted) {
    return bs(numbers, 0, size - 1, wanted);
}

int main(){
    /*int position = binSrch(0,7); //Passing vector's range.
    if (position != -1) {
        printf("%d is in position %d\n",number,position);
    } else printf("We did not find %d\nSorry...",number);
    printf("--------------------------------------\n");*/
    int numbers[] = {89, 100, 120, 560, 4569, 10000};
    printf("%d\n", binarysearch(numbers, 6, 3123123123));
    return 0;
}