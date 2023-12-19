#include<stdio.h>
int main()
{
    int n,i,s,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(s==arr[i])
        {
            c=1;
            break;
        }
        else
        {
            c=0;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}