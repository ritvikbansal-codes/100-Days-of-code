#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int rows, cols;
	if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
		return 0;
	}

	int diagonal_length = rows < cols ? rows : cols;
	int *diagonal = malloc((size_t)diagonal_length * sizeof(*diagonal));
	if (diagonal == NULL) {
		return 1;
	}

	int distinct = 1;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			int value;
			if (scanf("%d", &value) != 1) {
				free(diagonal);
				return 0;
			}
			if (i == j) {
				for (int k = 0; k < i; ++k) {
					if (diagonal[k] == value) {
						distinct = 0;
						break;
					}
				}
				diagonal[i] = value;
			}
		}
	}

	printf("%s\n", distinct ? "True" : "False");
	free(diagonal);
	return 0;
}
