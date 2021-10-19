#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Implementation of a circular queue to avoid indexing problems in a static structure such as a vector.
//Queue is empty when its front and rear structure variables are equal.
//The front structure variable indexes the last position before the first element of the queue.
//This is made to avoid problems when figuring out whether the queue is empty or not.
//This means that our queue can have at most MAXSIZE - 1 elements because one position of the array is sacrificed to
//the implementation sake.

#define MAXSIZE 6 //5 items can be added.
#define TRUE 1
#define FALSE 0

typedef struct staticQueue{
    int numbers[MAXSIZE];
    int front, rear;
} staticQueue;

void startQueue(staticQueue *queue){
    queue -> front = queue -> rear = MAXSIZE - 1;
}

bool isEmpty(staticQueue *queue){
    return queue -> front == queue -> rear;
}

bool isFull(staticQueue *queue) {
    if (queue -> front == 0) {
        if (queue -> rear == MAXSIZE - 1) return TRUE;
        return FALSE;
    }
    if ((queue -> front) - 1 == queue -> rear) return TRUE;
    return FALSE;
}

bool insert(staticQueue *queue, int data){
    if(isFull(queue)) {
        printf("Overflow in queue: nothing can be added anymore.");
        return FALSE;
    }
    if (queue -> rear == MAXSIZE - 1) queue -> rear = 0;
    else (queue -> rear)++; //Opening a new position to the new item.
    queue -> numbers[queue -> rear] = data;
    return TRUE;
}

int remove(staticQueue *queue){
    if (isEmpty(queue)) {
        printf("Underflow in queue: there is nothing to remove.");
        exit(-1);   
    }
    if (queue -> front == MAXSIZE - 1) queue -> front = 0; //If the first element is in position 0.
    else (queue ->front)++; //Eating the first element of our queue. It simulates the removal of an item.
    return queue -> numbers[queue -> front]; 
}

void removeAndTest(staticQueue *queue, int *value, int *underflow) {
    if (isEmpty(queue)) {
        *underflow = TRUE;
        return;
    }
    *underflow = FALSE;
    if (queue -> front == MAXSIZE - 1) queue -> front = 0;
    else (queue -> front)++;
    *value = queue -> numbers[queue -> front];
    //Keep in mind that front will always index the last position in our vector before the first item.
    //Then hereafter, the new first item will be in (queue -> front) + 1 and the former first item is in queue -> front.
}

int main(){ 
    staticQueue queueOfNumbers;
    startQueue(&queueOfNumbers); 
    insert(&queueOfNumbers, 10);
    insert(&queueOfNumbers, 20);
    insert(&queueOfNumbers, 30);
    insert(&queueOfNumbers, 40);
    insert(&queueOfNumbers, 50);
    printf("%d\n",queueOfNumbers.numbers[queueOfNumbers.rear]);
    if (isFull(&queueOfNumbers)) printf("Queue is full\n");
    while(!isEmpty(&queueOfNumbers)) {
        printf("%d, ",remove(&queueOfNumbers));
    }
    if (isEmpty(&queueOfNumbers)) printf("\nQueue is empty.");
    if (!isFull(&queueOfNumbers)) printf("\nQueue is not full anymore.\n");
    insert(&queueOfNumbers, 1);
    insert(&queueOfNumbers, 2);
    insert(&queueOfNumbers, 3);
    insert(&queueOfNumbers, 4);
    insert(&queueOfNumbers, 5);
    if (isFull(&queueOfNumbers)) printf("Queue is full.\n");
    while(!isEmpty(&queueOfNumbers)) {
        printf("%d, ", remove(&queueOfNumbers));
    }
    if (isEmpty(&queueOfNumbers)) printf("\nQueue is empty.\n");
    insert(&queueOfNumbers, 34);
    insert(&queueOfNumbers, 56);
    insert(&queueOfNumbers, 66);
    insert(&queueOfNumbers, 12);
    insert(&queueOfNumbers, 33);
    insert(&queueOfNumbers, 123); //Not executed... Overflow!
    printf("\n");
    for (short int i = 0; i < MAXSIZE; i++) remove(&queueOfNumbers); //In the last repetition, this line will emit an underflow message.
    return 0;
}