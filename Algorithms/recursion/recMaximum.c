// find max num from array
// using recurrence relation

#include <stdio.h>

// T(n) = 2T(n/2) + 1
int max(int a[], int l, int u){
    int p, x, y;
    p = (l + (u-1))/2;

    if(l == u){
        return a[l];
    }

    else{
        x = max(a, l, p);
        y = max(a, p+1, u);
        if(x > y)
            return x;
        else
            return y;
    }
}

// T(n) = T(n-1) + 1
int max2(int a[], int n){
    int maximum;
    if(n == 1)
        return a[0];
    else{
        maximum = max2(a, n-1);
        if(a[n-1] > maximum)
        return a[n-1];
        else return maximum;
    }
}

int main(){
    int arr[5] = {55, 48, 26, 12, 33};

    int maxx = max2(arr, 5);
    printf("%d\n", maxx);

    int maxxx = max(arr, 0, 4);
    printf("%d\n", maxxx);

    return 0;
}
