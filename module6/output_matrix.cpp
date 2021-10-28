#include<stdio.h>

void output_matrix(float* numbers, int rows, int cols)
{
	for(int row = 0; row < rows; row++)
	{
		for(int col = 0; col < cols; col++)
			printf("%5.2f", numbers[row, col]);
					

	}
}	
		

int main()
{
	int rows = 2;
	int cols = 3;
	float numbers[rows][cols]
	{
		{1, 2, 3},
		{4, 5, 6}
	}	
	
	output_matrix(numbers, rows, cols);
}	

