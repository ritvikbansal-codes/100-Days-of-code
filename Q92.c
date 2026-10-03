#include <stdio.h>

int main(void)
{
	char str[1000];
	int seen[26] = {0};

	if (fgets(str, sizeof(str), stdin) == NULL)
		return 0;

	for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			int index = str[i] - 'a';
			if (seen[index]) {
				printf("%c\n", str[i]);
				return 0;
			}
			seen[index] = 1;
		}
	}

	printf("-1\n");
	return 0;
}
