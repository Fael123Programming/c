#include <stdio.h>
#include <iostream>

int *getPointerToDataInVector(int *vectorFirstPos,int totalOfElements,int data){
	/*It returns an integer pointer that points to the memory address of a vector position that has as its value,data.
	If nothing that matches data in the analysed vector is found,then it returns a pointer that points to NULL.*/
	int *pointer;
	for(int counter=0;counter<totalOfElements;counter++){
		if(*(vectorFirstPos+counter)==data){
			pointer=vectorFirstPos+counter;
			return pointer;
		}
	}
	pointer=NULL;
	return pointer;
}

using namespace std;
int main(){
	int numbers[10]={1,2,3,4,5,6,7,8,9,10};
	int *pt;
	pt=getPointerToDataInVector(numbers,10,8);//pt will have the memory address of the 7th position of vector numbers
	*pt=0;//From 8 to 0
	  
	for(int i=0;i<sizeof(numbers)/4;i++){
		printf("Pos[%i]=%d\n",i,numbers[i]);
	}
	
	return 0;
}

