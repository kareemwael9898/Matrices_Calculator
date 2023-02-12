#include "main.h"

void Determinant(float Matrix[MAX_SIZE][MAX_SIZE], short Size)
{
	//Initializing..
	float Det = 1;

	//Calculating The (Upper Triangle Form) Matrix..
    for(int i = 0; i < Size; i++)
		{
			if(Matrix[i][i] == 0.0)
			{
				printf("\n The Determinant = Zero");
                exit(0);
			}
			for(int j = i + 1; j < Size; j++)
			{
					float Ratio = Matrix[j][i]/Matrix[i][i];
					for(int k = 0; k < Size; k++)
					{
					    Matrix[j][k] -= (Matrix[i][k] * Ratio);
					}
			}
		}

	//Printing Values of (Upper Triangle Form) Matrix..
	printf("\nUpper Triangle Matrix is:\n");
    PrintMatrix(Matrix, Size, Size);

	//Calculating The Determinant..
	for(int i = 0; i < Size; i++)
	{
		Det *= Matrix[i][i];
	}

	//Print The Value of The Determinant..
    printf("\n>> Determinant is: %.2lf\n", Det);

	return 0;
}
