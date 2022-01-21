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

    if(input == 1)
    {
        printf("adding a patient \n");
     }

    else if (input == 2)
    {
        printf("viewing a patient \n");
    }
    else if (input == 3)
    {
        printf("searching patients \n");
    }
    else if (input == 4)
    {
        printf("exiting application \n");
        printf("Do you want to save ? Y / N: \n");
        char q;
        getchar();
        scanf("%c", &q);
        if (q == 'Y' || q == 'y')
        {
        printf("Saving changes... \n");
        }
        else if (q == 'N' || q == 'n')
        {
        printf("Coolio \n");
        }
        else
        {
        printf("This message will self destruct in 3..2...1 \n");
        }        
    }
    else
    {
        printf("Whoops, incorrect input ! Try again ? \n");
    }
    return 0;
}

