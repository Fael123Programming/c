#include <stdio.h>
#include <stdlib.h>

#define NUMNODES 500  //Maximum capacity of our array to assume.
#define NULLPOINTER -1 //The constant which states which value shall be considered as null. Commonly, the last element
//points to it.

typedef struct nodetype {
    int info; //The information a node has.
    int next; //An index inside the used array that tells who is the neighbour of the actual element. It must vary from 0 towards NUMNODES - 1.
}nodetype;

nodetype nodes [NUMNODES]; //A vector of "pointers" where -1 refers to NULL (points to nowhere).

int avail = NULLPOINTER; //This variable is used to index the current first position of our array.

int getnode() {
    int p; //Index of an item.
    if (avail == NULLPOINTER) {
        printf("Underflow");
        exit(-1);
    }
    p = avail;
    avail = nodes[avail].next; //Updating avail to point to the next item.
    return p;
}

//This function does that a node get back again into the available nodes group.
void freeNode(int p) {
    nodes[p].next = avail;
    avail = p;
}

void insertAfter(int p, int data) {
    if (p < 0 )
        printf("Invalid pointer");
        return;
    int q = getnode();
    nodes[q].info = data;
    nodes[q].next = nodes[p].next;
    nodes[p].next = q;
}

void delAfter(int p, int *backupVar) {
    if (p < 0 || nodes[p].next == NULLPOINTER) {
        printf("Invalid deletion");
        return;
    }
    int q = nodes[p].next; //Index of the to-remove element.
    *backupVar = nodes[q].info; //Saving the information of this element before "deleting" it.
    nodes[p].next = nodes[q].next;
    freeNode(q);
}

int main(){
    for (int i = 0; i < NUMNODES - 1; i++)
        nodes[i].next = i + 1;
    nodes[NUMNODES - 1].next = -1;    

    return 0;
}