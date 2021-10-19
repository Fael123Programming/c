#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
	char symbol;
	node *previous;
}node;

typedef struct stack{
	node *top;//Which is the top element.
}stack;

void start(stack *s){
	s->top=NULL;
}

bool isEmpty(stack *s){
	return s->top==NULL;
}

bool push(stack *s,char symbol){
	node *newNode=(node*) malloc(sizeof(node));
	if(newNode==NULL) return false;
	newNode->symbol=symbol;
	newNode->previous=s->top;
	s->top=newNode;
	return true;
}

bool pop(stack *s){
	if(isEmpty(s))	return false;
	node *nodeToRemove=s->top;
	s->top=nodeToRemove->previous;
	nodeToRemove->previous=NULL; 
	free(nodeToRemove);
	return true;
}

char top(stack *s){
	if(isEmpty(s)) return ' ';
	return s->top->symbol;
}

int size(stack *s){
	if(isEmpty(s)) return 0;
	int counter=0;
	node *element=s->top;
	while(element!=NULL){
		counter++;
		element=element->previous;
	}
	return counter;
}

bool clean(stack *s){
	if(isEmpty(s)) return false;
	node *element;
	node *anotherElement;
	while(anotherElement!=NULL){
		element=s->top;
		anotherElement=element->previous;
		s->top=anotherElement;
		element->previous=NULL;//Unlinking cell.
		free(element);
	}	
	return true;
}

void show(stack *s){
	if(isEmpty(s)) printf("Empty stack\n");
	node *element=s->top;
	while(element!=NULL){
		printf("%c -> ",element->symbol);
		element=element->previous;
	}
	printf("NULL\n");
}

int main(){
	char exp[151];
	int counter,stackSize;
	stack *parentheses=(stack*) malloc(sizeof(stack));
	start(parentheses); 
	printf("Expression to analyse (max. 150 chars) (0 to exit): ");
	scanf("%[^\n]s",exp);
	if(strlen(exp)>150){
		system("cls");
		printf("##### Expression too long! #####\n");
		system("pause");
		system("cls");
		exit(0);
	}
	if(!strcmp(exp,"0")){//If exp=="0" strcmp() returns 0.
		system("cls");
		exit(0);
	}
	counter=0;
	while(exp[counter]!='\0'){
		if(exp[counter]=='(') push(parentheses,'(');
		else if(exp[counter]==')'){
			if(isEmpty(parentheses)) push(parentheses,')');
			else{
				if(top(parentheses)=='(') pop(parentheses);//It'll occur when we have in stack: ( + ).
				else push(parentheses,')');			
			}
		}
		counter++;
	}
	system("cls");
	stackSize=size(parentheses);
	if(stackSize>0){
		printf("##### Invalid expression! (%d problems found) #####\n",stackSize);
		clean(parentheses);
	}else printf("\a##### Correct expression! (no errors) #####\a\n");
	free(parentheses);
	system("pause");
	return 0;
}
