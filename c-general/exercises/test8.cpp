#include <iostream>
#include <stdio.h>

using namespace std;

void poli(int n);

int main(){
    poli(50);


    return 0;
}

void poli(int n) {
    //Because of these nested loops, this algorithm costs n^2 operations in so that n is the argument will be passed.
    if (n <= 0) return;
    for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) cout << i + j << " ";
    cout << endl;
}