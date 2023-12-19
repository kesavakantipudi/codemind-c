#include<stdio.h>
int main()
{
    int n,i,c=0;
    int s;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            c++;
        }
    }
    printf("%d
",c);
}