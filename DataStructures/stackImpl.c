//program for stack implementation

//header files
#include <stdio.h>
#include <stdlib.h>

//user defined datatype stack
typedef struct stack{
	int top;
	int size;
	int* arr;
}stack;

//function for initialisation
void init(stack* ptr, int size){
	ptr->size = size;
	ptr->top = -1;
	ptr->arr = (int*)malloc(size*sizeof(int));
}

//function to check stack is full or not
int isfull(stack* ptr){
	return (ptr->top == ptr->size-1);
}

//function for pushing element in stack
int push(stack* ptr, int item){
	int x = isfull(ptr);
	if(x == 1)
		return -1;
	else{
		ptr->arr[++ptr->top] = item;
		return 0;
	}
}

//function to check stack is empty or not
int isempty(stack* ptr){
	return (ptr->top == -1);
}

//function for popping element from stack
int pop(stack* ptr){
	if(isempty(ptr))
		return -1;
	else
		return ptr->arr[ptr->top--];
}

//function for displaying elements in stack
void display(stack* ptr, int length){
	int i;
	for(i=length; i>-1; i--)
		printf("%d\n",ptr->arr[i]);
}

int main(){

	stack s1;
	int len, val, choice, x;
	printf("Enter number of elements: ");
	scanf("%d",&len);
	init(&s1,len);
	
	while(1){
		printf("\nCHOICES-\n1. for push\n2. for pop\n3. for display\n0. for exit\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("\nEnter item to push (DO NOT ENTER -1): ");
				scanf("%d",&val);
				if(push(&s1,val))
					printf("\nOverflow\n");
				break;
			
			case 2:
				x = pop(&s1);
				if(x == -1)
					printf("\nUnderflow\n");
				else
					printf("\n%d is popped\n",x);
				break;
				
			case 3:
				display(&s1,s1.top+1);
				break;
				
			case 0:
				exit(0);
				
			default:
				printf("\nInvalid choice\n");
		}
	}
	
	return 0;
}
