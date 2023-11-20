#include <stdio.h>

//similar to dynamic programming approach
int findmax(int a[], int i){
    if(i == 0) return a[i];
    else{
        int m = a[i];
        int m2 = findmax(a, i-1);
        if(m > m2)
        return m;
        else return m2;
    }
}

//divide and conquer method
int findmax2(int a[], int l, int h){
    if(l==h) return a[l];
    else{
        int m = (l+h)/2;
        int max1 = findmax2(a, l, m);
        int max2 = findmax2(a, m+1, h);
        if(max1 > max2) return max1;
        else return max2;
    }
}

int main(){
    int arr[] = {3, 2, 5, 2, 4};
    int res = findmax2(arr, 0, 4);
    printf("%d", res);
    return 0;
}
