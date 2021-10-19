#include <stdio.h>
/* Be a and b two non-negative integer numbers, we can define a recursive definition to multiplication:
-> a * b = a summed to itself b times, a + a + ... + a + a (b times)
-> Then: a * b = a, if b = 1
         a * b = a * (b - 1) + a
*/
int mult(a,b)
int a,b;
{
    return b < 0 ? -1 : b == 0 ? 0 : b == 1 ? a : mult(a,b - 1) + a; 
}

int main(){
    printf("32 * 5 = %d\n",mult(32,5));
    printf("6 * 3 = %d\n",mult(6,3));
    printf("23 * 10000 = %d\n",mult(23,10000));
    printf("12 * -4 = %d\n",mult(12,-4));
    printf("0 * 4 = %d\n",mult(0,4));
    printf("456 * 0 = %d\n",mult(456,0));
    
    return 0;
}

