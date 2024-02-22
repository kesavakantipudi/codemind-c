#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10];
    char str2[10];
    scanf("%s",str1);
    scanf("%s",str2);
    int res = strcmp(str1,str2);
    if(res==0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
}