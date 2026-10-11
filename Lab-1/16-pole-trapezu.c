#include <stdio.h>

int main(void) {
	float a, b, h;
	scanf("%f%f%f", &a, &b, &h);
	printf("%.2f\n", (a + b) * h / 2);

	return 0;
}

