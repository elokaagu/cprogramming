#include <stdio.h>
#include <stdbool.h>
#include <math.h>


bool isPrime(int input)
{
    for (int i = sqrt(input); i > 1; i--)
    {
        if (input % i == 0)
        {
            return false;
        }
    }
    return true;
}


int main() 
{
    int input;
    scanf("%d", &input);

    for (int i = 0; i > 1; i--)
    {
        bool prime = isPrime(i);
        if (prime)
        {
            printf("%d Is Prime! \n", i);
        }
     }
    return 0;
}