#include "main.h"

int main (void)
{
    //Initializing..
    float Matrix_1[MAX_SIZE * 2][MAX_SIZE] = {0};
    float Matrix_2[MAX_SIZE * 2][MAX_SIZE] = {0};
    short Row_1 = 1, Col_1 = 1, Row_2 = 1, Col_2 = 1;

    printf(" >> Matrix Calculator << \n\n");
    printf(" - Choose the number of operation you want to use:\n\n");
    printf("  1-Addition\n");
    printf("  2-Subtraction\n");
    printf("  3-Multiplication\n");
    printf("  4-Division\n");
    printf("  5-Inverse\n");
    printf("  6-Determinant\n");
    printf("  7-Transpose\n\n");

    char Operation = getch();

    //Check if input is in the right range..
    while(!(Operation >= 49 && Operation <= 55))
    {
        printf("Try Again\n");
        Operation = getch();
    }

    //Print the operation name..
    switch (Operation)
    {
        case '1':
            printf(" >> Addition <<");
            break;
        case '2':
            printf(" >> Subtraction <<");
            break;
        case '3':
            printf(" >> Multiplication <<");
            break;
        case '4':
            printf(" >> Division <<");
            break;
        case '5':
            printf(" >> Inverse <<");
            break;
        case '6':
            printf(" >> Determinant <<");
            break;
        case '7':
            printf(" >> Transpose <<");
            break;
        default: /* Do Nothing */ ; 
    }


    //Getting the Matrix Dimensions..
    //if its (Add, Sub, Multiplication, Division, Transpose)
    if(Operation <= 52 || Operation == 55)
    {
        short Flag = 1;
        while(Flag == 1)
        {
            printf("\n\n - Enter Dimensions of the%s Matrix (Max 50x50)", Operation <= 52 ? " 1st" : "");
            printf("\nNumber of Rows: ");
            scanf("%hd",&Row_1);
            printf("Number of Columns: ");
            scanf("%hd",&Col_1);

            if(Operation <= 52)
            {
                printf("\n - Enter Dimensions of the 2nd Matrix (Max 50x50)");
                printf("\nNumber of Rows: ");
                scanf("%hd",&Row_2);
                printf("Number of Columns: ");
                scanf("%hd",&Col_2);
            }

            //Checking if inputs are valid..
            Flag = Check(Row_1, Col_1, Row_2, Col_2, Operation);
        }
    }
    //if its (Inverse, Determinant)
    else if(Operation <= 54)
    {
        printf("\nThis Operation only accepts Square matrices.");
        short Flag = 1;
        while(Flag == 1)
        {
            printf("\n\n - Enter The Order of the Matrix (Max 50x50)");
            printf("\nOrder: ");
            scanf("%hd",&Row_1);
            Col_1 = Row_1;
            Col_2 = Row_1;
            Row_2 = Row_1;

            //Checking if inputs are valid..
            Flag = Check(Row_1, Col_1, Row_2, Col_2, Operation);
        }
    }

    //Getting values for the elements of the matrices..
    printf("\n - Enter the values for the elements of the%s Matrix:\n", Operation <= 52 ? " 1st" : "");
    for(int i = 0; i < Row_1; i++)
    {
        for(int j = 0; j < Col_1; j++)
        {
            printf("[%d]x[%d] = ", i+1 , j+1 );
            scanf("%f", &Matrix_1[i][j]);
        }
        printf("\n");
    }
    //if its 2 matrix input operation:
    if(Operation <= 52)
    {
        printf(" - Enter the values for the elements of the 2nd Matrix:\n");
        for(int i = 0; i < Row_2; i++)
        {
            for(int j = 0; j < Col_2; j++)
            {
                printf("[%d]x[%d] = ", i+1 , j+1 );
                scanf("%f", &Matrix_2[i][j]);
            }
            printf("\n");
        }
    }

    //Execute the chosen operation.
    switch (Operation)
    {
        case '1':
            printf("## The Addition of the Two Matrices Equals: ##\n\n");
            Add_Sub(Matrix_1, Matrix_2, Row_1, Col_1, Operation);
            break;
        case '2':
            printf("## The Subtraction of the 1st Matrix by 2nd Matrix Equals: ##\n\n");
            Add_Sub(Matrix_1, Matrix_2, Row_1, Col_1, Operation);
            break;
        case '3':
            printf("## The Product of The 1st Matrix to 2nd Matrix Equals: ##\n\n");
            Multi(Matrix_1, Matrix_2, Row_1, Col_1, Col_2);
            break;
        case '4':
            Division(Matrix_1, Matrix_2, Row_1, Col_1, Col_2, Operation);
            break;
        case '5':
            printf("## The Inverse of The Matrix Equals: ##\n\n");
            Division(0, Matrix_1, 0, 0, Col_1, Operation);
            break;
        case '6':
            Determinant(Matrix_1, Col_1);
            break;
        case '7':
            Transpose(Matrix_1, Row_1, Col_1);
            break;
        default: /* Do Nothing */ ;
    }

    //ٌRepeat the code again.
    printf(" >> Do you want to run the program again?\n    (Press \"y\" to Accept)");
    if (getch() == 'y')
    {
        system("cls");
        main();
    }

	getch();
    return 0;
}
