#include <stdio.h>

int main() 
{
	printf("How many dogs do you have?: ");
	double dogs;

	scanf("%lf", &dogs);

	printf("%f\n%e\n%g\n", dogs, dogs, dogs);

	/*
	%f - Decimal notation
	%e - Scientific notation
	%g - Computer decides

	*/	

	return 0;
}
