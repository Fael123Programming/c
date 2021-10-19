#include <stdio.h>

#define times 10

int fib(n)
int n;
{
    if (n < 0) return -1; //Invalid argument!
    if (n == 0 || n == 1) return n; //Bases of the definition; trivial cases of this sequence
    return fib(n - 2) + fib(n - 1);
}
int main(){
    printf("fib(6) = %d\n",fib(6));
    for (short int i = 0 ; i <= times ; i ++) {
        if (i < times) printf("%d, ",fib(i));
        else printf("%d\n",fib(i));
    }
    return 0;
}