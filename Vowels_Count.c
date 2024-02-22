#include<stdio.h>
int main()
{
    char str[20];
    int sum=0;
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o'|| str[i]=='u'|| str[i]=='A' || str[i]=='E'|| str[i]=='I' || str[i]=='O'|| str[i]=='U')
        {
            sum+=1;
        }
        
    }
    printf("%d",sum);
}