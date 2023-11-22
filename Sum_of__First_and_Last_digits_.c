#include<stdio.h>
int main()
{
    int n,r=0,p=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        break;
    }
    while(n!=0)
    {
        p=n%10;
        n=n/10;
    }
    printf("%d",p+r);
}