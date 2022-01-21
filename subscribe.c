#include <stdio.h>

int main() {
	int radius;
	printf("Please enter a radius: ");
	scanf("%i", &radius); // address-of operator
	double area = 3.14 * (radius * radius); // logical error
	printf("The area of a circle with %i radius is %f\n", radius, area);
	return 0;

}
