//Contents: function calls (passing by memory reference)
#include <stdio.h>

void increment(int *x);

void decrement(x)
int *x;
{
    (*x)--; //parentheses are required
}

void print(int x){
    printf("%d\n",x);
}

int main(){
    int age = 19;
    print(age); //19
    increment(&age); //age == 20
    print(age); //20
    decrement(&age); //age == 19
    decrement(&age); //age == 18
    print(age); //18

    return 0;
}

void increment(int *x){
    (*x)++; //parentheses are required
}