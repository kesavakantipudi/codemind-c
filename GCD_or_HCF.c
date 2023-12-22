#include <stdio.h>
int findHCF(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    int hcf = findHCF(num1, num2);
    printf("%d", hcf);
    
    return 0;
}