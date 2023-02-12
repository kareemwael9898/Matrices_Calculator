#include "main.h"

void Inverse(float Matrix[100][50], short Size)
{
	//Calculating the Augmented Matrix with the Identity Matrix..
    for(int i = 0; i < Size; i++)
    {
        for(int j = 0; j < Size; j++)
        {
            if(i == j)
            {
                Matrix[i][j+Size] = 1;
            }
            else
            {
                Matrix[i][j+Size] = 0;
            }
        }
    }

	//Using Gauss Jordan Elimination..
    for(int i = 0; i < Size; i++)
		{
			if(Matrix[i][i] == 0.0)
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
					float Ratio = Matrix[j][i]/Matrix[i][i];
					for(int k = 0; k < Size*2; k++)
					{
					    Matrix[j][k] -= (Matrix[i][k] * Ratio);
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
		   	Matrix[i][j] /= Matrix[i][i];
		}
	}

	//Shifting The Matrix Value to the begining..
	for(int i = 0; i < Size; i++)
	{
		for(int j = 0; j < Size; j++)
		{
			Matrix[i][j] = Matrix[i][j+Size];
			Matrix[i][j+Size] = 0;
		}
	}

	//Printing Values of Matrix..
    printf("\nInverse Matrix is:\n");
	PrintMatrix(Matrix, Size, Size);

}


