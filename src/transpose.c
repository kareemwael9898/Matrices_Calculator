#include "main.h"

void Transpose(float Matrix[MAX_SIZE][MAX_SIZE], short Row, short Col)
{
    //Initializing the transpose matrix..
    float TransMatrix[MAX_SIZE][MAX_SIZE] = {0};

    //Transpose Operation
    for (int i = 0; i < Row; ++i)
    {
       for (int j = 0; j < Col; ++j)
        {
            TransMatrix[j][i] = Matrix[i][j];
        }
    }

    //Printing Values of Original Matrix..
    printf("## The Original Matrix Equals: ##\n\n");
    PrintMatrix(Matrix, Row, Col);
    //Printing Values of Transpose Matrix..
    printf("## The Transpose of The Matrix Equals: ##\n\n");
    PrintMatrix(TransMatrix, Col, Row);

    return 0;
}



