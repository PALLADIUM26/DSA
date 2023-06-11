#include <stdio.h>

int fact(int n){
    if(n==1)
        return n;
    return n*fact(n-1);
}

int main(){
    int num, res;
    printf("Enter number: ");
    scanf("%d",&num);
    res = fact(num);
    printf("Factorial of %d = %d\n",num,res);
    return 0;
}
