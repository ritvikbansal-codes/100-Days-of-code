#include <stdio.h>

int main(void) {
	int rows, columns;
	long long sum = 0;

	if (scanf("%d %d", &rows, &columns) != 2) {
		return 0;
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			int value;
			if (scanf("%d", &value) != 1) {
				return 0;
			}
			if (i == j) {
				sum += value;
			}
		}
	}

	printf("%lld\n", sum);
	return 0;
}
