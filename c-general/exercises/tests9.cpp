#include <iostream>
#include <stdio.h>

using namespace std;

void calculate(int n){
    //Growth order is n ^ 3 due all those nested loops!
    //int result = 0;
    for (int i = 1; i <= n; i++) { //At least, n operations. More precisely, 1 + n + n = 2n + 1.
        for (int j = 1; j <= n; j++) { //At least, n operations. More precisely, 1 + n + n = 2n + 1.
            for (int k = 1; k <= n; k++) { //At least, n operations. More precisely, 1 + n + n = 2n + 1.
                //result += i + j + k;
            }
        }
    }
    //As of the end of this algorithm, we will have at least n ^ 3 operations or more precisely, (2n + 1) * (2n + 1) * (2n + 1) = (2n + 1) ^ 3
}

void counter(int limit) {
    //Growth order is n.
    for (int i = 1; i <= limit; i++) {}
}

int main(){
    calculate(10000);
    counter(1000000);


    return 0;
}