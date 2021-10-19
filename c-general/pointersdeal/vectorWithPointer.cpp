#include<stdio.h>
#include <iostream>
bool doubleVector(int *address,int elements);
bool showVector(int *address,int elements);
using namespace std;
int main(){
	/*
	int x=10,y=20,z=30;
	printf("Address of x: %p\tValue of x: %d\n",&x,x);
	printf("Address of y: %p\tValue of y: %d\n",&y,y);
	printf("Address of z: %p\tValue of z: %d\n",&z,z);*/
	int numbers[10]={1,2,3,4,5,6,7,8,9,10};
	showVector(numbers,10);
	doubleVector(numbers,10);
	showVector(numbers,10);
	
	for(int i=0;i<sizeof(numbers)/4;i++) printf("[%i]\n",numbers[i]);
	
	return 0;
}

bool doubleVector(int *address,int elements){
	if(address==NULL) return false;
	for(int i=0;i<elements;i++){
		*(address)=*(address)*2;
		address++;
	}
	return true; 
}

bool showVector(int *address,int elements){
	if(address==NULL) return false;
	for(int i=0;i<elements;i++) printf("[%d]\n",*(address+i));
	printf("\n");
	return true;
}
