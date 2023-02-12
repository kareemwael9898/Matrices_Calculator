#include "main.h"

void Division(float Matrix_1[MAX_SIZE][MAX_SIZE], float Matrix_2[MAX_SIZE * 2][MAX_SIZE], short Row_1, short Col_1, short Size, char Operation)
{
	//Calculating the Augmented Matrix with the Identity Matrix..
    for(int i = 0; i < Size; i++)
    {
        for(int j = 0; j < Size; j++)
        {
            if(i == j)
            {
                Matrix_2[i][j+Size] = 1;
            }
            else
            {
                Matrix_2[i][j+Size] = 0;
            }
        }
    }

	//Using Gauss Jordan Elimination..
    for(int i = 0; i < Size; i++)
		{
			if(Matrix_2[i][i] == 0.0)
			{
				printf("\n Mathamtical Error (The Determinant Equales Zero)");
                exit(0);
			}
            else
            {
			for(int j = 0; j < Size; j++)
			{
				if(i != j)
				{
					float Ratio = Matrix_2[j][i]/Matrix_2[i][i];
					for(int k = 0; k < Size*2; k++)
					{
					    Matrix_2[j][k] -= (Matrix_2[i][k] * Ratio);
					}
				}
			}
            }
		}

	//Using Row Operations to Get The Inverse Matrix..
    for(int i = 0; i < Size; i++)
	 {
		for(int j = Size; j < 2*Size; j++)
		{
		   	Matrix_2[i][j] /= Matrix_2[i][i];
		}
	}

	//Shifting The Matrix Value to the beginning..
	for(int i = 0; i < Size; i++)
	{
		for(int j = 0; j < Size; j++)
		{
			Matrix_2[i][j] = Matrix_2[i][j+Size];
			Matrix_2[i][j+Size] = 0;
		}
	}

	//Checking to continue for division or only output the inverse..
	if(Operation == '5')
    {
        //Printing Values of Matrix..
        PrintMatrix(Matrix_2, Size, Size);
        return 0;
    }
    else
    {
        //Printing Values of Matrix..
        printf("## The Inverse of The 2nd Matrix Equals: ##\n\n");
        PrintMatrix(Matrix_2, Size, Size);
        //Forwarding the matrices for multiplication..
        printf("## The Division of The 1st Matrix over The 2nd Matrix Equals: ##\n\n");
        Multi(Matrix_1, Matrix_2, Row_1, Col_1, Size);
    }

    return 0;
}


