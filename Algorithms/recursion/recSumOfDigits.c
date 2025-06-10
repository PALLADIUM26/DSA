#include <stdio.h>

int func(int n){
    if(n==0)
        return 0;
    return (n%10)+func(n/10);
}

int main(){
    int num, res;
    printf("Enter number: ");
    scanf("%d",&num);
    res = func(num);
    printf("Sum of Digits of %d = %d\n",num,res);
    return 0;
}
