#include <stdio.h>
#include <ctype.h> //To isalpha() become accessible. 
//Method isalpha() receives a character as argument and returns: 
//--> 0 if it is not alphabetic (as arithmetic operators, numbers and etc);
//--> positive number if it is alphabetic.

#define TRUE 1
#define FALSE 0
#define VECTORSIZE 31

//length will contain the quantity of typed characters the array string has.
int length = 0;

//pos is used to traverse the array string during runtime.
int pos = 0;

//This array will contain the input string representing an algebric expression.
char string[VECTORSIZE];

void readStr(){
    printf("Stream: ");
    scanf("%s",string);
    while(string[length++] != '\0');
    length--;
}

char getSymb(ppos)
int *ppos;
{
    char wanted;
    if (*ppos < length) wanted = string[*ppos];
    else wanted = ' ';
    (*ppos)++;
    return wanted;
}

int exp_(int *ppos); //This way factor starts to know who exp is!

int factor(ppos)
int *ppos;
{
    char c;
    if((c = getSymb(ppos)) != '(') return isalpha(c);
    return exp_(ppos) && getSymb(ppos) == ')'; 
}

int term(ppos) 
int *ppos;
{
    if(factor(ppos) == FALSE) return FALSE;
    if(getSymb(ppos) != '*') {
        (*ppos)--;
        return TRUE;
    }    
    return factor(ppos);
}

int exp_(ppos) 
int *ppos;
{
    if(term(ppos) == FALSE) return FALSE;
    if(getSymb(ppos) != '+') {
        (*ppos)--;
        return TRUE;
    }
    return term(ppos);
}

int main(){
    readStr();
    if(exp_(&pos) && pos >= length) printf("Valid");
    else printf("Invalid");
    printf(" Expression!\n");

    return 0;
}