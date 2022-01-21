#include <stdio.h>

int main()

{
	int slices = 17;
	int people = 2;
	
	double halfThePizza = (double) (slices / people);
	printf("%f\n", halfThePizza);

	double c = 25/2 * 2;
	double d = 25/2 * 2.0;

	printf("c: %f\n", c);
	printf("d: %f\n", d);
	return 0;
}
