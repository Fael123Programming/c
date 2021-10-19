#include <stdio.h>
int main(){
	int farenheit,centigrade;
	printf("Centigrade to farenheit temperature table\n\n");
	for(int count=-2;count<=12;count++){
		centigrade=10*count;
		farenheit=32+(centigrade*9)/5;
		printf("C=%4d\tF=%4d\t",centigrade,farenheit);
		if(centigrade==0) printf("\tFreezing point of water");
		else if(centigrade==100) printf("\tBoiling point of water\t");
		printf("\n");
	}
	return 0;
}
