#include <stdio.h>

#define n 5
int steps = 0;

void play(discs,from,to,aux)
int discs;
char from,to,aux;
{
    if(discs == 1) {
        printf("Move disc 1 from %c to %c\n",from,to); //Taking the first disc out of the stack of discs!
        steps++;                                       //See that depending on the function call, 'from' and 'to' may vary.
        return;
    }
    play(discs - 1,from,aux,to); //Moving all discs from 'A' to 'B' using 'C'.
    printf("Move disc %d from %c to %c\n",discs,from,to); //In this line, we are moving the resting disc from 'A' to 'C'.
    steps++;
    play(discs - 1,aux,to,from); //Moving all discs from 'B' to 'C' using 'A.
}

int main(){
    play(n,'A','C','B'); //Move n discs from tower 'A' to 'C' using 'B' as suplementary.
    printf("For %d disc(s) there have(as) to be %d step(s).\n",n,steps);

    return 0;
}