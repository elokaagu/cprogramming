/* Create a programme that takes two doubles as inputs,
calculates the hypotenuse of a right triangle, and outputs it */

#include <stdio.h>
#include <math.h>

int main() 
{
    double a;
    double b;

    printf("This app will calculate the hypotenuse of the triangle. \n");
    // Get the first number
    printf("Enter the first value: ");
    // lf = double format character
    scanf("%lf", &a);

    // Get the second number
    printf("Enter the second value: \n");

    // Scan the second number

    scanf("%lf", &b);

    // Calculate the hypotenuse

    double c = sqrt((a * a) + (b * b));

    // Output the hypotenuse

    printf("The hypotenuse is: %f\n", c);


    return 0;
}