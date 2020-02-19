#include <stdio.h>
#include <stdlib.h>

int row;
int column;
int r;
int c;

int main(){
	float matrix[10][10];
	float transpose[10][10];
	printf("Please write row and column of the matrix : \n");
	printf("\n");
	printf(">>> Row : ");
	scanf_s("%d", &row);
	printf(">>> Column : ");
	scanf_s("%d", &column);
	printf("\n");
	printf("Please write the components : \n");
	printf("\n");
	for (r = 0; r < row; r++)
	{
		for (c = 0; c < column; c++)
		{
			printf("matrix[%d][%d] = ", r, c);
			scanf_s("%f", &matrix[r][c]);
		}
	}
	printf("\n");
	for (r = 0; r < row; r++)
	{
		for (c = 0; c < column; c++)
		{
			printf("%f ", matrix[r][c]);
		}
		printf("\n");
	}
	printf("\n");
	for (r = 0; r < row; r++)
	{
		for (c = 0; c < column; c++)
		{
			transpose[c][r] = matrix[r][c];
		}
	}
	for (r = 0; r < column; r++)
	{
		for (c = 0; c < row; c++)
		{
			printf("%f ", transpose[r][c]);
		}
		printf("\n");
	}


	getchar();
}