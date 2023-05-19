// Heap Sort program
// sorting an array

// header files
#include<stdio.h>
#include<stdlib.h>

// swap items of heap
void swap(int* p, int* q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

// arrange heap
void heapify(int a[], int n){
    int i, c, p;
    for(i = i/2 - 1; i>=0; i--){
        p = i;
        while(p < n){
            c = 2*p + 1;
            if(c >= n)
                break;
            if(c < n-1 && a[c] < a[c+1])
                c = c + 1;
            if(a[p] < a[c]){
                swap(&a[p], &a[c]);
                p = c;
            }
            else
                break;
        }
    }
}

// sorting logic
void heapSort(int a[], int n){
    heapify(a, n);
    for(int i = n-1; i>0; i--){
        swap(&a[0], &a[i]);
        heapify(a, i);
    }
}

int main(){
    int arr[20];
    int i, n;
    // int a[5] = {5, 3, 4, 1, 2};
    printf("Enter no of elements of array: ");
    scanf("%d", &n);

    printf("Input elements of array:\n");
    for(i=0; i<n; i++){
        printf("Enter element %d: ",(i+1));
        scanf("%d",&arr[i]);
    }

    printf("Unsorted Array: ");
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
    printf("\n");
    
    heapSort(arr, n);
    printf("Sorted Array: ");
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
    printf("\n");
}