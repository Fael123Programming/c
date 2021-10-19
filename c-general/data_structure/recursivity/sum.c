#include <stdio.h>

//Be a and b, two non-negative integer numbers. An addition of them is: a added with 1 b times
// a + 1 + 1 + ... + 1 (b times)

int sum(a,b)
int a,b;
{
    if (b == 0) return a; //Trivial or base case!
    return sum(a + 1,b - 1);

}
int main(){
    printf("%d\n",sum(-789,789));
    return 0;
}