//program to form union of 2 Linked Lists
// List 1 = {1, 2 ,3 4}
// List 2 = {2, 3, 4, 5}
//resultant List = {1, 2, 3, 4, 5}

//header files
#include <stdio.h>
#include <stdlib.h>

//creating node of linked list datastructure
typedef struct Node{
    int data;
    struct Node* next;
}Node;

//to insert at end of linked list
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

//to check if data is present in any node of linked list
int present(Node** phead, int data){
    Node* ptr = *phead;
    int flag = 0;
    while(ptr != NULL){
        if(ptr->data == data){
            flag = 1;
            break;
        }
        ptr = ptr->next;
    }
    return flag;
}

//to form union of 2 linkded lists
void unionFunc(Node** phead1, Node** phead2){
    Node* ptr = *phead2;
    while(ptr != NULL){
        if(!present(phead1, ptr->data))
            append(phead1, ptr->data);
        ptr = ptr->next;
    }
}
//some more changes
//to print elements of linked list
void display(Node** phead){
    Node* ptr = *phead;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main(){
    Node* head1 = NULL;
    Node* head2 = NULL;
    int n1, n2;
    int data;

    printf("Enter no. of elements of 1st Linked List: ");
    scanf("%d",&n1);
    printf("Enter elements of 1st Linked List: ");
    for(int i=0; i<n1; i++){
        scanf("%d",&data);
        append(&head1, data);
    }
    printf("Elements of 1st Linked List: ");
    display(&head1);

    printf("Enter no. of elements of 2nd Linked List: ");
    scanf("%d",&n2);
    for(int i=0; i<n1; i++){
        scanf("%d",&data);
        append(&head2, data);
    }
    printf("Elements of 2nd Linked List: ");
    display(&head2);

    unionFunc(&head1, &head2);
    display(&head1);

    return 0;
}
