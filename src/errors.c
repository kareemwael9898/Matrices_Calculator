#include "main.h"

short Check(short Row_1,short Col_1,short Row_2,short Col_2, char Operation)
{

    //Check if the matrix are (Positive)
    if(Row_1 < 1 || Row_2 < 1 || Col_1 < 1 || Col_2 < 1)
    {
        printf("\nERROR: The dimensions must be Positive (+)!");
        printf("\nPlease Try Again...");
        return 1;
    }

    //Check if the matrix is in the limit set (MAX_SIZE)
    if(Row_1 > MAX_SIZE || Row_2 > MAX_SIZE || Col_1 > MAX_SIZE || Col_2 > MAX_SIZE)
    {
        printf("\nERROR: The max size of a matrix is 50!");
        printf("\nPlease Try Again...");
        return 1;
    }

    //Check if the matrices are the same size for (Addition, Subtraction)
    if(Operation == '1' || Operation == '2')
    {
        if(Row_1 != Row_2 || Col_1 != Col_2)
        {
            printf("\nERROR: The matrices must have the same dimensions!");
            printf("\nPlease Try Again...");
            return 1;
        }
        else
        {
            return 0;
        }
    }

    //Check if the matrices follow the multiplication rule (1st Matrix Column Equals 2nd Matrix Row)
    else if(Operation == '3')
    {
        if(Col_1 != Row_2)
        {
            printf("\nERROR: The number of columns of the first matrix must equal the number of rows in the second matrix!");
            printf("\nPlease Try Again...");
            return 1;
        }
        else
        {
            return 0;
        }
    }

    //Check if the matrices follow the division rule (1st Matrix Column Equals 2nd Matrix Row & 2nd matrix must be sqaure)
    else if(Operation == '4')
    {
        //Square rule
        if(Col_2 != Row_2)
        {
            printf("\nERROR: The 2nd Matrix must be a Square!");
            printf("\nPlease Try Again...");
            return 1;
        }
        //Column & Row rule
        else if(Col_1 != Row_2)
        {
            printf("\nERROR: The number of columns of the first matrix must equal the number of rows in the second matrix!");
            printf("\nPlease Try Again...");
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}
