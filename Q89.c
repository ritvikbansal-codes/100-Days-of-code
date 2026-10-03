#include <stdio.h>

int main(void)
{
	char str[1000];
	char target;
	int frequency = 0;

	if (scanf("%999s %c", str, &target) != 2)
		return 1;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == target)
			frequency++;
	}

	printf("%d\n", frequency);
	return 0;
}
