// The user has to guess a number from 0 - 5.
// Output whether or not the person is correct.

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>


int main()

{

    // constants
    int maxValue = 5;

    // Random Number
    srand(time(NULL));
    int randomNumber = rand() % maxValue + 1; 

    printf("%d \n",randomNumber);

    // User has to input a number between 0 and 5
    printf("Hey, pick a number between 0 and %d: ", maxValue);

    int input;

    // Computer has to scan that number between 0 and 5
    scanf("%d", &input);

    // Computer has to compare random number with the inputted number and see if match
    if(input == randomNumber)
    {
        printf("You win ! \n");
    }

    else 
    
    {
        printf("You lose! \n");
    }

    printf("Thank you for playing \n");
    return 0;
}