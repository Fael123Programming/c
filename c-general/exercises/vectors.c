#include <stdio.h>

#define const 10

float avg(float *nums,int size) {
    float sum = 0;
    for (int i = 0 ; i < size ; i++) sum += *(nums + i);
    return sum / size;
}

float avg2(nums,size) 
float nums[];
int size;
{
    float sum = 0;
    for (int i = 0 ; i < size ; i++) sum += nums[i];
    return sum / size;
}

int main(){
    float n1[] = {1,2,3,4,5,6,7,8,9,10};
    printf("Average is %.2f\n",avg(n1,const));
    printf("Average is still %.2f\n",avg2(n1,const));
    return 0;
}