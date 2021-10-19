#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

struct Person{
	char name[20],profession[20];
	int short age;
	
}teacher;

bool setProfession(struct Person *const pointerOfStruct,char newProf[20]){
	if(pointerOfStruct==NULL) return  false;
	strcpy(pointerOfStruct->profession,newProf);
	return true;
}

int main(){
	struct Person *pointsToTeacher;
	pointsToTeacher=&teacher;
	
	strcpy(teacher.profession,"teacher"); 
	printf("His current profession has been %s!\n",teacher.profession);
	setProfession(&teacher,"footballer");
	printf("\nThe former teacher has become a %s!\n",pointsToTeacher->profession); 
	printf("I'm not joking... he's now a %s!\n",teacher.profession);
	
	return 0;
}
