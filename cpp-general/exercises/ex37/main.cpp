#include <stdio.h>

//Example of dynamic scope situation: it is determined during execution time.

#define a (x+1) //Macro

int x = 2;

void b() {
    int x = 0;
    printf("%d\n", a); //Local x will be used.
}

void c() {
    printf("%d\n", a); //Global x will be used.
}

int main() {
    b();
    c();
    return 0;
}