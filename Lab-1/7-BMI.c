#include <stdio.h>

float m, h;

int main(void) {
	scanf("%f%f", &m, &h);
	printf("%.2f\n", m / (h * h));
	
	return 0;
}

