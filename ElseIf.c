// Doctor's office app
// 1. add a patient
// 2. view a patient
// 3. search patients
// 4. patients

#include <stdio.h>
#include <stdbool.h>

int main()

{
    printf("Choose a menu option 1 - 4: \n");
    printf("1. add a patient \n");
    printf("2. view a patient \n");
    printf("3. search patients \n");
    printf("4. exit \n");

    int input;
    scanf("%d", &input);

    switch (input)
    {
    case 1:
        printf("adding a patient \n");
        break;

    case 2:
        printf("viewing a patient \n");
        break;

    case 3:
        printf("searching patients \n");
        break;
    
    case 4:
        printf("exiting application \n");
        break;
    
    default:
        printf("Whoops, incorrect input ! Try again ? \n");
        break;
    }
    return 0;
}