#include<stdio.h>
int main()
{
    int n,i,j,k,s;
    scanf("%d",&n);
    s=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=s;k++)
        {
            printf("%c ",64+i);
        }
        s--;
        printf("
");
    }
}