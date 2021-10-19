#include <stdio.h>
#include <stdlib.h>//Functions such as malloc,calloc,realloc and exit.

typedef struct Cell{
    int data;
    struct Cell *next;
}Cell;

typedef struct LinkedList{
    Cell *first;
    Cell *last;
    int numberOfElements;
}LinkedList;

void start(LinkedList *list){
    list->first=NULL;
    list->last=NULL;
    list->numberOfElements=0;
}

int size(LinkedList *list){
    return list->numberOfElements;
}

bool isEmpty(LinkedList *list){
    return list->numberOfElements==0;
}

void insertBeginning(LinkedList *list,int data){
    Cell newCell;
    newCell.data=data;
    newCell.next=list->first;
    list->first=&newCell;
    if(size(list)==0){
        list->last=&newCell;
    }
    list->numberOfElements++;
}

Cell *getFirst(LinkedList *list){
    if(isEmpty(list)) return NULL;
    return list->first;
}

Cell *getLast(LinkedList *list){
    if(isEmpty(list)) return NULL;
    return list->last;
}

int main(){
    LinkedList *myList=(LinkedList*) malloc(sizeof(LinkedList));
    start(myList);
    insertBeginning(myList,20);
    insertBeginning(myList,10);
    printf("%d\n",size(myList));
    printf("%d\n",getFirst(myList)->data);
    printf("%d\n",getLast(myList)->data);

    return 0;
}
