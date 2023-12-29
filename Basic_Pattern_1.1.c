#include<stdio.h>
int main()
{
    int i=0,j=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("* ");
        }
        printf("
");
    }
}