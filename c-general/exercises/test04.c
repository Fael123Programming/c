//Content: using vectors 
#include <stdio.h>

#define size 5 //constant declaration

int main(){
    int a[size];
    for (int i = 0;i < size; a[i++] = 0); //Initializing our vector and deleting memory trash!
    //for (int i = 0;i < size; i++) printf("%d\n",a[i]);
    //Reading values and computing them with a vector
    int sum = 0;
    float mean;
    printf("-- Data\n");
    for(int i = 0; i < size; i++) {
        printf("%d: ",i);
        scanf("%d",&a[i]);
        sum += a[i];
    }
    mean = sum / size;
    printf("-- Mean: %.2f\n",mean);
    printf("-- Differences between each value and mean\n");
    for (int i = 0; i < size; i++) {
        printf("%d: %.2f\n",i,a[i] - mean);
    }
    printf("\n");
    printf("-- Reading values sequentially\n");
    int newVector[size];
    scanf("%d %d %d %d %d",&newVector[0],&newVector[1],&newVector[2],&newVector[3],&newVector[4]);
    printf("-- Given data\n");
    for(short int i = 0; i < size; i++) printf("%d\n",newVector[i]);
    return 0;
}