#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter a no:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=i;j<=i;j++)
        printf("%d %d=%d\n",i,j,i*j);
    }
    return 0;
}