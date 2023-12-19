#include<stdio.h>
int main()
{
    int n,i,es=0,os=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            es+=arr[i];
        }
        else
        {
            os+=arr[i];
        }
    }
    int diff=0;
    if(es>os)
    {
        diff=es-os;
        printf("%d",diff);
    }
    else
    {
        diff=os-es;
        printf("%d",diff);
    }
}