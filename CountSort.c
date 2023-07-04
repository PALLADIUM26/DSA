#include <stdio.h>

void countSort(int a[], int n){
    int max = 0, p = 0, i;
    for(i=0; i<n; i++){
        if(a[i] > max)
            max = a[i];
    }

    int count[max+1];

    for(i=0; i<=max; i++)
        count[i] = 0;
    
    for(i=0; i<n; i++)
        count[a[i]]++;
    
    i = 0;
    while(i <= max){
        if(count[i] > 0){
            a[p] = i;
            p++;
            count[i]--;
        }
        else
            i++;
    }
}
