
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int rows, cols;

	if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0)
		return 0;

	int *matrix = malloc((size_t)rows * cols * sizeof(*matrix));
	if (matrix == NULL)
		return 1;

	for (int i = 0; i < rows * cols; ++i) {
		if (scanf("%d", &matrix[i]) != 1) {
			free(matrix);
			return 0;
		}
	}

	int first = 1;
	for (int diagonal = 0; diagonal < rows + cols - 1; ++diagonal) {
		int min_row = diagonal - (cols - 1);
		if (min_row < 0)
			min_row = 0;
		int max_row = diagonal < rows - 1 ? diagonal : rows - 1;

		if (diagonal % 2 == 0) {
			for (int row = max_row; row >= min_row; --row) {
				if (!first)
					printf(" ");
				printf("%d", matrix[row * cols + diagonal - row]);
				first = 0;
			}
		} else {
			for (int row = min_row; row <= max_row; ++row) {
				if (!first)
					printf(" ");
				printf("%d", matrix[row * cols + diagonal - row]);
				first = 0;
			}
		}
	}

	printf("\n");
	free(matrix);
	return 0;
}
