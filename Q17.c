/* Q17: Find and categorize the roots of a quadratic equation. */
#include <math.h>
#include <stdio.h>

int main(void)
{
	double a, b, c, discriminant, root1, root2;

	if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a == 0) {
		return 1;
	}

	discriminant = b * b - 4 * a * c;

	if (discriminant > 0) {
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("Roots are real and different: %g, %g\n", root1, root2);
	} else if (discriminant == 0) {
		root1 = -b / (2 * a);
		printf("Roots are real and same: %g\n", root1);
	} else {
		printf("Roots are complex\n");
	}

	return 0;
}
