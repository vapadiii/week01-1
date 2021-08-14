#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    int sum;
    printf("input x : ");
    scanf("%d", &x);
    printf("input y : ");
    scanf("%d", &y);
    printf("\n");
    //printf("x+y = %d\n",x + y);
    printf("%d+%d = %d\n", x, y, x + y);
    printf("%d-%d = %d\n", x, y, x - y);
    printf("%d*%d = %d\n", x, y, x * y);
    printf("%d/%d = %d\n", x, y, x / y);
    return 0;
}