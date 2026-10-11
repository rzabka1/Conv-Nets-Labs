#include <stdio.h>

int main(void) {
	double m, v;
	scanf("%lf%lf", &m, &v);
	printf("%.4f\n", 0.5 * m * v * v);

	return 0;
}

