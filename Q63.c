#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, m;

	if (scanf("%d", &n) != 1 || n < 0)
		return 0;

	int *first = n > 0 ? malloc((size_t)n * sizeof(*first)) : NULL;
	if (n > 0 && first == NULL)
		return 1;

	for (int i = 0; i < n; ++i) {
		if (scanf("%d", &first[i]) != 1) {
			free(first);
			return 0;
		}
	}

	if (scanf("%d", &m) != 1 || m < 0) {
		free(first);
		return 0;
	}

	int *second = m > 0 ? malloc((size_t)m * sizeof(*second)) : NULL;
	if (m > 0 && second == NULL) {
		free(first);
		return 1;
	}

	for (int i = 0; i < m; ++i) {
		if (scanf("%d", &second[i]) != 1) {
			free(first);
			free(second);
			return 0;
		}
	}

	int need_space = 0;
	for (int i = 0; i < n; ++i) {
		printf("%s%d", need_space ? " " : "", first[i]);
		need_space = 1;
	}
	for (int i = 0; i < m; ++i) {
		printf("%s%d", need_space ? " " : "", second[i]);
		need_space = 1;
	}
	putchar('\n');

	free(first);
	free(second);
	return 0;
}
