#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	if (scanf("%d", &n) != 1 || n < 0) {
		return 0;
	}

	int *arr = malloc((size_t)n * sizeof(*arr));
	if (n > 0 && arr == NULL) {
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

	int left = 0;
	int right = n - 1;
	int index = -1;

	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == target) {
			index = mid;
			break;
		}
		if (arr[mid] < target) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}

	if (index != -1) {
		printf("Found at index %d\n", index);
	} else {
		printf("-1\n");
	}

	free(arr);
	return 0;
}
