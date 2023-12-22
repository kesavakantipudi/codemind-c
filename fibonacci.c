#include<stdio.h>
void fib_sir(int n)
{
	int first=0,second=1,third,i,p,sum=0;
	third=first+second;
	printf("%d %d ",first,second);
	for(p=1;;p++)
	{
	
	    while(third<=p)
	    {
		    if(third==p)
		    {
			    sum++;
			    printf("%d ",third);
		    }
		    first=second;
		    second=third;
		    third=first+second;
	    }
	    if(sum==n-2)
	    {
			break;
	    }
    }
}
int main()
{
	int n;
	scanf("%d",&n);
	fib_sir(n);
}