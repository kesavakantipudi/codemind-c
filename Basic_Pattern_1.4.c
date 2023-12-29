#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int p=n+65;
    for(i=1;i<=n;i++)
    {
        for(j=65;j<p;j++)
        {
            printf("%c ",j);
        }
        printf("
");
    }
}