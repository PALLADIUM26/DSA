#include <stdio.h>

void merge(int a[], int mid, int low, int high){
    int ar2[100];
    int i, j, k;
    i = low;
    j = mid+1;
    k = low;
    while(i <= mid && j <= high){
        if(a[i] < a[j]){
            ar2[k] = a[i];
            i++;
            k++;
        }
        else{
            ar2[k] = a[j];
            j++;
            k++;
        }
    }
    while(i <= mid){
            ar2[k] = a[i];
            i++;
            k++;
        }
    while(j <= high){
        ar2[k] = a[i];
        i++;
        k++;
    }

    for(i=low; i<=high; i++){
        a[i] = ar2[i];
    }
}

void mergeSort(int a[],int low, int high){
    int mid;
    if(low < high){
        mid = (low + high)/2;
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        merge(a, mid, low, high);
    }
}


int main(){
    int arr[20];
    int i, n;

    printf("Enter no of elements of array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Enter element %d: ",(i+1));
        scanf("%d",&arr[i]);
    }

    printf("Unsorted Array: ");
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
    printf("\n");
    
    mergeSort(arr, 0, n-1);
    
    printf("Sorted Array: ");
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
    printf("\n");

    return 0;
}
