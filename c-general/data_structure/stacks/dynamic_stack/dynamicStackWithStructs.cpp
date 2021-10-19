#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *previous;
}node;

typedef struct stack{
	node *top;
}stack;

bool start(stack *s){
	s->top=NULL;
	return true;
}

bool push(stack *s,int data){
	node *newNode=(node*) malloc(sizeof(node));
	if(newNode==NULL) return false;//Memory is full.
	newNode->data=data;
	newNode->previous=s->top;
	s->top=newNode;
	return true;
}

int pop(stack *s){
	node *nodeToRemove=s->top;
	if(nodeToRemove==NULL) return -1;//Can't remove top element.
	s->top=nodeToRemove->previous;//top changes its cel.
	nodeToRemove->previous=NULL;//Unlinking the node.
	int data=nodeToRemove->data;
	free(nodeToRemove);
	return data;
}

void printStack(stack *s){
	node *nodeToPrint=s->top;
	if(nodeToPrint==NULL) {
		printf("NULL");
		return;	
	}
	while(true){
		if(nodeToPrint!=NULL) {
			printf("%d -> ",nodeToPrint->data);
		}else {
			printf("NULL");
			return;
		} 
		nodeToPrint=nodeToPrint->previous;
	}
}

int main(){
	int number;
	stack *numbers=(stack*) malloc(sizeof(stack));
	if(numbers==NULL){
		printf("##### Memory full #####\n");
		exit(0);
	}
	start(numbers);
	for(int counter=0;counter<10;counter++){
		printf("Number %d: ",counter+1);
		scanf("%d",&number);
		system("cls");
		push(numbers,number);
	}
	system("cls");
	printf("Your numbers are:\n");
	printStack(numbers);
	printf("\n");
	system("pause");
	system("cls");
	printf("Cleaning stack...\n");
	system("pause");
	system("cls");
	int dataWeJustRemoved;
	for(int counter=0;counter<=10;counter++){
		dataWeJustRemoved=pop(numbers);
		if(dataWeJustRemoved!=-1) printf("Removed element: %d\n",dataWeJustRemoved);
		else printf("##### Empty stack! #####\n");
	}
	system("pause");
	system("cls");
	return 0;
}
