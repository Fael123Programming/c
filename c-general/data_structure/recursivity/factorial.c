#include <stdio.h>

int fact(n)
int n;
{
    if (n < 0) return -1;
    return n == 0 ? 1 : n * fact(n - 1);
}
int main(){
    for (short int i = 0; i <= 10; i++) {
        printf("%d! = %d\n",i,fact(i));
    }
    printf("-9! = %d\n",fact(-9)); //This argument was just ignored by the function!

    return 0;
}