#include <stdio.h>

int main(void) {
	int a, b;
    scanf("%d %d", &a, &b);
	printf("%d\n%.4f\n", a / b, (double)a / b);
	
	return 0;
}

