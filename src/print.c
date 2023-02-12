#include "main.h"

void PrintMatrix(float Matrix[MAX_SIZE * 2][MAX_SIZE], short Row, short Col)
{
	//Printing Values of The INPUT Matrix..
		for(int i = 0; i < Row; i++)
		{
		    for(int j = 0; j < Col; j++)
			{
				//Replacing "0" to "ZERO" to eliminate minus signs (-)..
                if(round(Matrix[i][j]*100000)/100000 == 0)
                {
                    printf("%12s ", "ZERO");
                }
				//Continue Printing..
                else
                {
			        printf("%12.5f ",Matrix[i][j]);
                }
			}
			printf("\n");
		}
    printf("\n");

    return 0;
}
