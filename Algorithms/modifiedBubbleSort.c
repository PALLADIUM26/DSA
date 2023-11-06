//modified bubble sort

#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int arr[], int size);
void swap(int *num1, int *num2);

int main(){
	int i,j,temp;
	int n;
	int flag;
	system("cls");
	printf("Total number of elements: ");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter %d elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	bubbleSort(a, n);

	printf("The Elements in sorted order: ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

//functiom for sorting
void bubbleSort(int arr[], int size){
	int i,j,flag = 0;
	for(i=0;i<size;i++){ //for each element
		flag = 0;
		for(j=0;j<size-i-1;j++){ //for total comparisons for each element 
			if(arr[j]>arr[j+1]){
				flag = 1;
				swap(&arr[j], &arr[j+1]);
			}
		}
		if(flag == 0)
			break;
	}
}

//function for swapping
void swap(int *num1, int *num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
