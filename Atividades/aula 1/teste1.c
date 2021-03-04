#include <stdio.h>

int main()
{
    int k = 1;

    int mat[3][3];

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            mat[i][j] = k++;
        }
    }

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            if (i == j)
                printf("%d ", mat[i][j]);
        }
    }
    return 0;
}
