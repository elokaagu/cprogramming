#include <stdio.h>
#include <stdbool.h>

int main()
{

    // Create a constant int for slices of pizza ?
    int slices;

    // Ask how many slices of Pizza ? 
    printf("How many slices of pizza do you eat a day ? \n");
    // Scan this
    scanf("%d", &slices);

    int caloriesPerSlice = 250;

    // If under 5, respond with - healthy diet
    switch(slices)
    {
        case 1:
        case 2:
        case 3:
            printf("You did a good job \n");
            break;

        case 4:
            printf("You're a disappointment \n");
            break;
        
        default:
            printf("Enjoy you're heart disease! \n");
            break;

    }
    printf("You had %d calories. \n", caloriesPerSlice * slices);
    return 0;
}