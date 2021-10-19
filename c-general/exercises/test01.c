#include <stdio.h>

int main(){
    char exp[11];
    int counter = 0;
    //-------------------------------------------------------------------------------------
    char cNum1 = 9 + '0'; //Sum an integer value with '0' to get it parsed to char
    int num1 = cNum1 - '0'; //Subtract a char by '0' to get it parsed to integer 
    //-------------------------------------------------------------------------------------
    /*cNum1++;
    num1++;
    printf("%c\n",cNum1);
    printf("%d\n",num1);
    while((exp[counter++] = getchar()) != '\n'); // Getting characters from user terminal
    exp[--counter] = '\0';
    printf("Original expression: %s\n",exp);
    int nums[10] = {1,2,3,4,5,6,7,8,9,10};
    int *pointer = nums; 
    printf("nums[9]: %d\n",nums[9]);
    printf("pointer: %p\nnums: %p\n",pointer + 9,nums + 9);
    int integer1;
    short int integer2;
    long int integer3;
    unsigned int integer4;
    printf("int: %d\nshort int: %d\nlong int: %d\nunsigned int: %d\n",sizeof(integer1),sizeof(integer2),sizeof(integer3),sizeof(integer4));*/
    int *pi;
    float *pf;
    float e = 2.71f;
    pf = &e;
    *pf = 3.56;
    printf("%f\n",e);
    pi = (int *) pf; //casting between pointers!
    printf("%p\n",pi); //All the following lines will print on screen the same memory address
    printf("%p\n",pf);
    printf("%p\n",&e);

    return 0;
}