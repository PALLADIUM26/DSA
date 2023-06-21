#include <stdio.h>

int power(int a, int b){
    if(b==1)
        return a;
    return a*power(a,b-1);
}

int main(){
    int a, b, res;
    scanf("%d %d",&a, &b);
    res = power(a,b);
    printf("Answer = %d",res);
    return 0;
}
