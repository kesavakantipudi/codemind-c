#include<stdio.h>
void self_div(int n, int m)
{
	int i=1;
    for(i=n;i<=m;i++)
	{
	    int r,flag=1,t=i;//t=120 flag=0 
	    while(t!=0)//120
	    {
		    r=t%10;//120%10=0
		    if(r==0 || i%r!=0)
		    {
			    flag=0;
			    break;
	        }
		    t=t/10;
	    }
	    if(flag!=0)
	    {
	    	printf("%d ",i);
	    }
	}
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	self_div(n,m);
}