#include <stdio.h>

int fact(int n, int a){
    if(n == 0)
        return a;
    return (fact(n-1, a*n));
}

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    int res = fact(num, 1);
    printf("%d\n",res);
    return 0;
}
