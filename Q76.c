#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int rows, cols;

	if (scanf("%d %d", &rows, &cols) != 2 || rows < 0 || cols < 0)
		return 1;

	size_t count = (size_t)rows * (size_t)cols;
	int *matrix = count ? malloc(count * sizeof(*matrix)) : NULL;
	if (count && matrix == NULL)
		return 1;

	for (size_t i = 0; i < count; ++i) {
		if (scanf("%d", &matrix[i]) != 1) {
			free(matrix);
			return 1;
		}
	}

	int symmetric = rows == cols;
	for (int i = 0; symmetric && i < rows; ++i) {
		for (int j = i + 1; j < cols; ++j) {
			if (matrix[(size_t)i * cols + j] != matrix[(size_t)j * cols + i]) {
				symmetric = 0;
				break;
			}
		}
	}

	printf("%s\n", symmetric ? "True" : "False");
	free(matrix);
	return 0;
}
