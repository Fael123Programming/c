#include <stdio.h>

void f2(int n) {
    for (int i = n; i > 0; i--) { //n + 1
        //Everything inside this loop will execute n times.
        for (int j = 0; j < i; j++) //At each n times, this header will execute i + 1 times.
            printf("%d ", j); //At each n times, this line will execute i times.
        printf("\n"); //At each n times, this line will execute once. Then, we will have n times.
    }
}

void f2R(int n) {
    if (n > 0) {
        for (int i = 0; i < n; i++)
            printf("%d ", i);
        printf("\n");
        f2R(n - 1);    
    }
    //Recursion base is n == 0.
}

void f3(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 1; j < i; j *= 2)
            printf("%d ", j);
        printf("\n");
    }        
}

void f3R(int n) {
    if (n > 0) {
        for (int i = 1; i < n; i *= 2) 
            printf("%d ", i);
        printf("\n");
        f3R(n - 1);
    }
}

void f4(int n) {
    for (int k = n; k > 0; k--) {
        printf("%d ", k);
        for (int i = n - 1; i > 0; i--) 
            printf("%d ", i);
        for (int i = n - 1; i > 0; i--) 
            printf("%d ", i);
    }    
}

void f4R(int n) {
    if (n > 0) {
        printf("%d ", n);
        f4R(n - 1);
        f4R(n - 1);
    }
}


int main() {
    /*f2(10);
    printf("\n");
    f2R(10);
    f3(10);
    printf("\n");
    f3R(10);*/
    f4(5);
    printf("\n\n");
    f4R(5);

    return 0;
}