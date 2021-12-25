#include <stdio.h>
#include <stdlib.h>//Functions such as malloc, calloc, realloc and exit.

typedef struct Cell{
    int data;
    Cell *next;
}Cell;

typedef struct LinkedList{
    Cell *first;
    Cell *last;
    int numberOfElements;
}LinkedList;

void start(LinkedList *list){
    list->first = NULL;
    list->last = NULL;
    list->numberOfElements = 0;
}

int size(LinkedList *list){
    return list->numberOfElements;
}

bool isEmpty(LinkedList *list){
    return list->numberOfElements == 0;
}

void insertBeginning(LinkedList *list, int data){
    Cell newCell;
    newCell.data = data;
    newCell.next = list->first;
    list->first = &newCell;
    if(isEmpty(list))
        list->last = &newCell;
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

int main() {
    LinkedList *numbers = (LinkedList*) malloc(sizeof(LinkedList));
    start(numbers);
    Cell c1;
    c1.data = 20;
    c1.next = numbers->first;
    numbers->first = &c1;
    numbers->numberOfElements++;
    numbers->last = &c1;
    Cell c2;
    c2.data = 10;
    c2.next = numbers->first;
    numbers->first = &c2;
    numbers->numberOfElements++;
    //insertBeginning(numbers, -5);
    printf("First: %d\n", getFirst(numbers)->data);
    printf("Last: %d\n", getLast(numbers)->data);

    return 0;
}
