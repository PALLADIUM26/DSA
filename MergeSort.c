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
