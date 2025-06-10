//sum of !st 10 natural nos. using recursion

#include <stdio.h>

int func(int n){
    if(n==1)
        return n;
    return n + func(n-1);
}

int main(){
    int n, sum;
    n = 10;
    sum = func(n);
    printf("Sum of 10 Natural nos. = %d\n",sum);
}
