//Contents: function declarations and function calls (passing by value) 
#include <stdio.h>

void print(int x); //Function header

void funct(y) //Direct function declation (without header)
int y;
{
    ++y;
    printf("Inside funct: %d\n",y);
}

int main(){ //main function
    int x = 7;
    print(x);
    funct(x);
    print(x);

    return 0;
}

void print(x) //Function mentioned at line 4
int x;
{
    printf("%d\n",x);
}