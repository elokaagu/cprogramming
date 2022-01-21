#include <stdio.h>

int main()
{
    int myGrades[] = {12, 23, 45};
    int const columns = 3;
    int const rows = 2;
    int grades[][columns] = {
        {12, 23, 45},
        {64, 78, 89}
    };

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d \n", grades[i][j]);
        }
        printf(" \n");
    }
    return 0;
}