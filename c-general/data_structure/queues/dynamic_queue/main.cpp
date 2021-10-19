#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct node{
    int data;
    struct node *next;
}node;

typedef struct queue{
    node *first;
    node *last;
}queue;

void startQ(queue *q){
    q->first=NULL;
    q->last=NULL;
}

bool isEmpty(queue *q){return q->first==NULL;}

int size(queue *q){
    if(isEmpty(q)) return 0;
    node *throughQueue=q->first;
    int counter=0;
    while(throughQueue!=NULL){
        counter++;
        throughQueue=throughQueue->next;
    }
    return counter;
}

bool insert(queue *q,int data){
    node *newNode=(node*) malloc(sizeof(node));
    if(newNode==NULL) return false;
    newNode->data=data;
    newNode->next=NULL;
    if(q->first==NULL){//No elements added yet.
        q->first=newNode;
    }else{
        q->last->next=newNode;
    }
    q->last=newNode;
    return true;
}

int remove(queue *q){
    if(isEmpty(q)) return 0;
    node *nodeToRemove=q->first;
    q->first=nodeToRemove->next;
    nodeToRemove->next=NULL;
    int data=nodeToRemove->data;
    free(nodeToRemove);
    if(q->first==NULL){//If we just removed the last element.
        q->last=NULL;
    }
    return data;
}

void printQ(queue *q){
    if(isEmpty(q)) printf("Empty queue.\n");
    else{
        node *throughQueue=q->first;
        while(throughQueue!=NULL){ 
            printf("%d -> ",throughQueue->data);
            throughQueue=throughQueue->next;
        }
        printf("End\n\n");
    }
}

int main(){
    queue *myQueue=(queue*) malloc(sizeof(queue));
    if(myQueue==NULL){exit(-1);}
    if(isEmpty(myQueue)){
        printf("Queue without elements.\n");
    }
    startQ(myQueue);
    insert(myQueue,10);
    insert(myQueue,20);
    insert(myQueue,30);
    printf("Size is %d\n",size(myQueue));
    printQ(myQueue);
    printf("%d removed.\n",remove(myQueue));
    printf("%d removed.\n",remove(myQueue));
    printQ(myQueue);
    printf("%d removed.\n",remove(myQueue));
    printQ(myQueue);
    return 0;
}