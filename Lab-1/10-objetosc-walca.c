#include <stdio.h>
#define PI 3.14159265358979

int main(void) {
    double r, h;
    scanf("%lf %lf", &r, &h);
	printf("%.4f", PI * r * r * h);

    return 0;
}
