#include <stdio.h>

int main(void) {
	int rows1, cols1, rows2, cols2;

	if (scanf("%d %d", &rows1, &cols1) != 2) {
		return 0;
	}
	if (rows1 <= 0 || cols1 <= 0) {
		return 0;
	}

	int first[rows1][cols1];
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			if (scanf("%d", &first[i][j]) != 1) {
				return 0;
			}
		}
	}

	if (scanf("%d %d", &rows2, &cols2) != 2 ||
		rows1 != rows2 || cols1 != cols2) {
		return 0;
	}

	int second[rows2][cols2];
	for (int i = 0; i < rows2; i++) {
		for (int j = 0; j < cols2; j++) {
			if (scanf("%d", &second[i][j]) != 1) {
				return 0;
			}
		}
	}

	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			printf("%d%s", first[i][j] + second[i][j],
				   j == cols1 - 1 ? "" : " ");
		}
		printf("\n");
	}

	return 0;
}
