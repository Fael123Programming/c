//Programa que inverte os d�gitos de um n�mero inteiro digitado pelo usu�rio.
#include <stdio.h>

int main(){
	int number=0,result=0;
	bool isNegative=false;
	printf("Number: ");
	scanf("%d",&number);
	number<0? isNegative=true,number*=-1:NULL;
	printf("Inverted: ");
	if(isNegative) printf("-");
	do{
		result=number%10;
		number/=10;
		printf("%d",result);
	}while(number!=0);
	//Actually,number will never be exactly equal to zero but it's an integer variable and will be truncated after a division that rests a rest.
	return 0;
}
