#include <stdio.h>

int main(void)
{
	int character;
	int count = 0;

	/* Read the whole line, counting spaces and other characters too. */
	while ((character = getchar()) != '\n' && character != EOF) {
		count++;
	}

	printf("%d\n", count);
	return 0;
}