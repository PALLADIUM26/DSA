#include <stdio.h>

int binSer(int a[], int l, int u, int search){
    if(l <= u){
        int m = (l + (u-1))/2;
        if(a[m] == search)
            return m;
        else if(a[m] < search)
            return binSer(a, m+1, u, search);
        else
            return binSer(a, l, m-1, search);
    }
}

int main(){
    int arr[5] = {5, 6, 10, 12, 19};
    int x = binSer(arr, 0, 4, 10);
    printf("%d", x);
    return 0;
}

