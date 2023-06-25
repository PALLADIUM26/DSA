//sum of odd nos btw a given range using recursion

#include <stdio.h>

int fun(int a, int b){
    if(b == a)
        return a;
    return a + fun(a+2,b);
}

int main(){
    int n1, n2, sum;
    printf("Enter 1st number: ");
    scanf("%d",&n1);
    printf("Enter 2nd number: ");
    scanf("%d",&n2);
    if(n1<n2)
        sum = fun(n1,n2);
    else
        sum = fun(n2,n1);
    printf("Sum of Odd Numbers between %d & %d = %d\n",n1,n2,sum);
    return 0;
}

/*
if given 1 & 10-
prints: 3+5+7+9 = 26
*/

