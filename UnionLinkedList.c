//program to form union of 2 Linked Lists
// List 1 = {1, 2 ,3 4}
// List 2 = {2, 3, 4, 5}
//resultant List = {1, 2, 3, 4, 5}

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

void append(Node** phead, int data){
    Node* newNode = NULL;
    newNode->data = data;
    newNode->next = NULL;
    
    Node* ptr = *phead;
    if(*phead == NULL)
        *phead = newNode;
    else{
        while(ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = newNode;
    }
}

int present(){
  
}

void union(){
  
}

int main(){
  return 0;
}
