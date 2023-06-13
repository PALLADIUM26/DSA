#include <stdio.h>

int fibo(int n, int a, int b){
    if(n == 0)
        return a;
    return fibo(n-1, a+b, a);
}

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    int res = fibo(num, 0, 1);
    printf("%d\n",res);
    return 0;
}
