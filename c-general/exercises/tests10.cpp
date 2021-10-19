#include <iostream>

using namespace std;

const int target = 14;

int fact(int n) { //1 operation: memory allocation; 1 operation: variable assignment.
    if (n < 0) return -1; //1 operation: memory access; 1 operation: logic comparison.
    if (n == 0) return 1; //1 operation: memory access; 1 operation: logic comparison.
    for (int i = n - 1; i >= 1; i--) { 
        //1 operation: memory allocation; 1 operation: memory access; 1 operation: subtraction; 
        //1 operation: variable assignment; n - 1 operations: logic comparison; n - 1 operations: decrementation.
        //A decrementation is composed of: memory access (n - 1), subtraction (n - 1) and variable assignment (n - 1).
        //The first instruction before the first semi-colon is executed only once during this loop execution and
        //as the first-of-all instruction performed.
        //The second instruction is executed n - 1 times, that is, at each repetition this loop does.
        //The third instruction is executed also n - 1 times but always as the last instruction of each repetition.
        n *= i;
        //n - 1 operations: memory access; n - 1 operations: memory access; n - 1 operations: multiplication;
        //n - 1 operations: variable assignment.
    }
    return n; //1 operation of this type at all! (here or in line 8 or line 9)
}

//1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + (n - 1) ^ 8 = 8 + (n - 1) ^ 8. 
//Operations regarded:
//-> Memory allocation;
//-> Memory access;
//-> Variable assignment;
//-> Logic comparison;
//-> Arithmetic operations (subtraction and multiplication);
//-> Flow control delivery (return command).

int main(){
    //cout << target << "!=" << fact(target) << endl;
    for (int i = 0; i <= 14; i++) {
        cout << i << "! = " << fact(i) <<endl;   
    }
    return 0;
}