#include<stdio.h>
#include<string.h>

int max(int a, int b){
    return (a > b) ? a : b;}

int lcs(char *a,char *b){
    int m = strlen(a);
    int n = strlen(b);    
    // (m < n)
    
    int lcs[m+1][n+1];

    for(int i=0;i<=m;i++)
    lcs[i][0]=0;
    
    for(int j=0;j<=n;j++)
    lcs[0][j]=0;
    
    for(int i=1;i<=m;i++) {
        for(int j=1;j<=n;j++) {
            if(a[i-1]==b[j-1])
            lcs[i][j]=1+lcs[i-1][j-1];
            else
            lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
        }
    }
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++)
            printf("%d ", lcs[i][j]);
        printf("\n");
    }
    return lcs[m][n];
}

int main()
{
    int num1,num2;
    char a[100];
    char b[100];
    printf("Enter shorter String: ");
    scanf("%s", a);
    printf("\nEnter longer String: ");
    scanf("%s", b);
    int length=lcs(a,b);
    printf("\nLength of Longest Common Subsequence: %d\n", length);
}
