#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.2f\n", (double)(a + b) / 2);
    return 0;
}
