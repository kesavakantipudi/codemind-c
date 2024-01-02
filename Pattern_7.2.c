#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    l=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=l;k++)
        {
            printf("%d ",l);
        }
        l--;
        printf("
");
    }
}