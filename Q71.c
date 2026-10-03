#include <stdio.h>

int main(void)
{
	int rows, columns;

	if (scanf("%d %d", &rows, &columns) != 2 || rows <= 0 || columns <= 0)
		return 0;

	int matrix[rows][columns];

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			if (scanf("%d", &matrix[i][j]) != 1)
				return 0;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (j > 0)
				printf(" ");
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
