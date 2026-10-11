#include <stdio.h>

double celsius;

int main(void) {
	scanf("%lf", &celsius);
	printf("%.2f\n", celsius * 9.0 / 5.0 + 32);
	
	return 0;
}

