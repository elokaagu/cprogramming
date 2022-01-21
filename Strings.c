#include <stdio.h>
#include <string.h>

int main()
{
    printf("What is your favourite food ? : ");
    char favFood[50];
    scanf("%49s \n", favFood);
    printf("%s \n", favFood);

    int charCount = 0;

    while (favFood[charCount] != '\0')
    {
        charCount++;
    }
    printf("The character count is %d \n", charCount);
    return 0;
}