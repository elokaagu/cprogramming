#include <stdio.h>
#include <stdbool.h>

int main()

{
    int i = 0;
    while (i < 10)
    {
        if (i == 7)
        {
            printf("7 is awesome ");
            i++;
            continue;
        }
        printf("%d ", i);
        i++;        
    }    
    return 0;
}