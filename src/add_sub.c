#include "main.h"

void Add_Sub(float Matrix_1[MAX_SIZE * 2][MAX_SIZE], float Matrix_2[MAX_SIZE * 2][MAX_SIZE], short Row_1, short Col_1, char Operation)
{
    //Initialize temporary variable
    float TempSum = 0;

    //Operation
    for (int i = 0; i < Row_1; i++)
    {
        for(int j = 0; j < Col_1; j++)
        {
            //For Addition..
            if (Operation == '1')
            {
                TempSum = Matrix_1[i][j] + Matrix_2[i][j];
            }
            //For Subtraction..
            else
            {
                TempSum = Matrix_1[i][j] - Matrix_2[i][j];
            }
            //Printing the result..
            printf("%12.5f ",TempSum);
        }
        printf("\n");
    }
    return 0;
}
