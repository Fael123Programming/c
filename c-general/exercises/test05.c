#include <stdio.h>

#define size 10

//Function to delete all trashes in a specified position of memory separated for an integer vector
void clean(int *start,int length) {
    while (length > 0) {
        *(start++) = 0;
        length--;
    }
}

int main(){
    int values[size];
    clean(values,size);
    int pos = 0,amount = 0;
    while (1) {
        printf("-- Enter pos and amount to change\n");
        scanf("%d",&pos);
        if (pos == -1) break;
        if (pos < 0 || pos >= size) printf("\n### Invalid position ###\n");
        else{
            scanf("%d",&amount);
            if (amount < 0) printf("\n### Invalid amount ###\n");
            else values[pos] = amount;
        }    
    }
    printf("-- Values\n");
    for(int i = 0; i < size; i++) printf("%d -> %d\n",i,values[i]);
    return 0;
}