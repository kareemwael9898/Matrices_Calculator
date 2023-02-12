#include "main.h"

void Multi(float Matrix_1[MAX_SIZE][MAX_SIZE], float Matrix_2[MAX_SIZE][MAX_SIZE], short Row_1, short Col_1, short Col_2)
{
    //Initializing the product matrix..
    float Matrix_Multi [MAX_SIZE][MAX_SIZE] = {0};

    //Multiplication Operation
    for (int i = 0; i < Row_1; i++)
    {
        for (int k = 0; k < Col_2; k++)
        {
            for (int j = 0; j < Col_1; j++)
            {
                Matrix_Multi[i][k] += Matrix_1[i][j] * Matrix_2[j][k];
            }
        }
    }

    //Printing Values of Matrix..
    PrintMatrix(Matrix_Multi, Row_1, Col_2);

    return 0;
}
