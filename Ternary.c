#include <stdio.h>
#include <stdbool.h>

int main()
{
    double money = 30;
    double cost = 25;
    double lf = cost - money;


    money > cost ? printf("You can afford it ! \n") :  printf("Guess you can't afford that...You need %lf more money \n", lf);

    // if (money > cost)
    // {
    //     printf("You can afford it ! \n");
    // }

    // else
    // {
    //     printf("Guess you can't afford that...You need %lf more money \n", lf);
    // }
    return 0;
}