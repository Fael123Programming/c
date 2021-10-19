#include <stdio.h>

int ack(m,n)
int m,n;
{
    if (m == 0) return n + 1;
    if (m != 0 && n == 0) return ack(m - 1,1);
    if (m != 0 && n != 0) return ack(m - 1,ack(m,n - 1));
}
int main(){
    printf("Ack(2,2) = %d\n",ack(2,2));

    return 0;
}