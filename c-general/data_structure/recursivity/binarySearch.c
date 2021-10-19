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

int main(){
    int position = binSrch(0,7); //Passing vector's range.
    if (position != -1) {
        printf("%d is in position %d\n",number,position);
    } else printf("We did not find %d\nSorry...",number);
    printf("--------------------------------------\n");
    return 0;
}