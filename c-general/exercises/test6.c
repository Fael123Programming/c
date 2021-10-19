//Contents: vectors and reference-passing function parameters
#include <stdio.h>

#define size 10

float avg(numbers,length)
float numbers[]; //pointer variable
int length;
{
    float sum;
    for (int i = 0; i < length; i++) sum += numbers[i];
    return sum / length;
}

float avg2(float *numbers,int length) {
    float sum;
    for (int i = 0; i < length; i++) sum += *(numbers + i);
    return sum / length;
}

int main(){
    float numbers[] = {1,2,3,4,5,6,7,8,9,10};
    /*As 'numbers' keeps already a memory address (that is, it's a pointer),
    it's not necessary to use another symbol when passing it to a function;
    it's already used reference-passing.*/
    printf("average is %.2f\n",avg(numbers,size));
    printf("average is %.2f\n",avg2(numbers,size));
    return 0;
}