#include <stdio.h>
int main() 
{
    int n, i, j,star=1;
    scanf("%d", &n);

    for (i = n; i>0; i--) {
        for (j = 1; j <= n - star; j++) {
            printf(" ");
        }
        for (j = 1;j<=star; j++) {
            printf("%d ",i);
        }
        star+=1;
        printf("
");
    }

    return 0;
}
