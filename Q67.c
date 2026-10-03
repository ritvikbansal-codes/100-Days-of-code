#include <stdio.h>

int main(void) {
	int n, position, value;
	int array[1001];

	if (scanf("%d", &n) != 1 || n < 0 || n >= 1001) {
		return 0;
	}

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &array[i]) != 1) {
			return 0;
		}
	}

	if (scanf("%d %d", &position, &value) != 2 ||
		position < 0 || position > n) {
		return 0;
	}

	for (int i = n; i > position; i--) {
		array[i] = array[i - 1];
	}
	array[position] = value;

	for (int i = 0; i <= n; i++) {
		if (i > 0) {
			printf(" ");
		}
		printf("%d", array[i]);
	}
	printf("\n");

	return 0;
}
