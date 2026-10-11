#include <stdio.h>

#define PI 3.14159265358979

int main(void) {
    double r;
    scanf("%lf", &r);
	printf("%.4f\n", PI * r * r);

    return 0;
}
