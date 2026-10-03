
#include <stdio.h>

int main(void)
{
	int n;
	if (scanf("%d", &n) != 1 || n <= 0)
		return 0;

	int array[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &array[i]);

	for (int i = 0; i < n / 2; i++) {
		int temp = array[i];
		array[i] = array[n - 1 - i];
		array[n - 1 - i] = temp;
	}

	for (int i = 0; i < n; i++)
		printf("%s%d", i == 0 ? "" : " ", array[i]);
	printf("\n");

	return 0;
}
