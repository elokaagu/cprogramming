#include <stdio.h>
#include <stdbool.h>

int main()

{
    int i = 0, k;
    while (i < 11)
    {
        int k = i - 1;
        printf("%d ", i);
        i++;

        while (k >= 0)
        {
            printf("%d ", k);
            k--;
        }
        


        printf("\n");
    }    
    return 0;
}