#include <stdio.h>

/*
20.    ****
       *  *
       *  *
       *  *
       ****
*/

int main()
{
        int row, col;
        int n = 5;
        for (row = 1; row <= n; row++)
        {
                for (col = 1; col <= n - 1; col++)
                {
                        if (row == 1 || row == 5 || col == 1 || col == 4)
                        {
                                printf("*");
                        }
                        else
                        {
                                printf(" ");
                        }
                }
                printf("\n");
        }
}
