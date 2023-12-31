#include <stdio.h>
int main() 
{
    int rows, i, j,star=1;
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (j = 1; j <=star; j++) {
            printf("* ");
        }
        star+=1;
        printf("
");
    }
}
