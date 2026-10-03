#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	if (scanf("%d", &n) != 1 || n <= 0) {
		return 0;
	}

	int *arr = malloc((size_t)n * sizeof(*arr));
	if (arr == NULL) {
		return 1;
	}

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			free(arr);
			return 0;
		}
	}

	int target;
	if (scanf("%d", &target) != 1) {
		free(arr);
		return 0;
	}

	int index = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] == target) {
			index = i;
			break;
		}
	}

	if (index == -1) {
		printf("-1\n");
	} else {
		printf("Found at index %d\n", index);
	}

	free(arr);
	return 0;
}
