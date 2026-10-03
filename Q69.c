#include <stdio.h>

int main(void)
{
	int n;
	long long value, largest = 0, secondLargest = 0;
	int hasLargest = 0, hasSecondLargest = 0;

	if (scanf("%d", &n) != 1 || n <= 0)
		return 0;

	for (int i = 0; i < n; ++i) {
		if (scanf("%lld", &value) != 1)
			return 0;

		if (!hasLargest || value > largest) {
			if (hasLargest) {
				secondLargest = largest;
				hasSecondLargest = 1;
			}
			largest = value;
			hasLargest = 1;
		} else if (value < largest &&
				   (!hasSecondLargest || value > secondLargest)) {
			secondLargest = value;
			hasSecondLargest = 1;
		}
	}

	if (hasSecondLargest)
		printf("%lld\n", secondLargest);
	else
		printf("-1\n");

	return 0;
}
