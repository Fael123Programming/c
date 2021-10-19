#include <iostream>
#include <stdio.h>

using namespace std;

void odds(int n) {
    //This simple algorithm costs only n,that is, its number of operations is dependant of the argument that will be passed simply.
    if (n <= 0) return;
    for (int i = 1; i <= n; i++) if (i % 2 == 1) cout << i << " ";
    cout << "End" << endl;
}

int main(){
    int numbers;
    cout << "How many odds? ";
    cin >> numbers;
    odds(numbers);
    
    return 0;
}