#include<stdio.h>
int main()
{
    int n,i,flag,j;
    printf("Enter a N:");
    scanf("%d",&n);

    for(i=2;i<=10;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
    if(i % j == 0){
        flag=1;
    break;
    }
}
        if(flag == 0)
        printf("%d\n",i);
    }
    return 0;
}