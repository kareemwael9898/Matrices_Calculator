#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#define MAX_SIZE 50

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void PrintMatrix(float Matrix[MAX_SIZE][MAX_SIZE], short Row, short Col);
short Check(short Row_1, short Col_1, short Row_2, short Col_2, char Operation);
void Add_Sub(float Matrix_1[MAX_SIZE][MAX_SIZE], float Matrix_2[MAX_SIZE][MAX_SIZE], short Row_1, short Col_1, char Operation);
void Multi(float Matrix_1[MAX_SIZE][MAX_SIZE], float Matrix_2[MAX_SIZE][MAX_SIZE], short Row_1, short Col_1, short Col_2);
void Division(float Matrix_1[MAX_SIZE][MAX_SIZE], float Matrix_2[MAX_SIZE * 2][MAX_SIZE], short Row_1, short Col_1, short Size, char Operation);
void Determinant(float Matrix[MAX_SIZE][MAX_SIZE], short Size);
void Transpose(float Matrix[MAX_SIZE][MAX_SIZE], short Row_1, short Col_1);

#endif // MAIN_H_INCLUDED
