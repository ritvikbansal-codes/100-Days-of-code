#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[1000];

	if (fgets(str, sizeof(str), stdin) == NULL)
		return 0;

	str[strcspn(str, "\r\n")] = '\0';
	size_t length = strlen(str);
	int first = 1;

	for (size_t start = 0; start < length; ++start) {
		for (size_t end = start; end < length; ++end) {
			if (!first)
				putchar(',');
			first = 0;

			for (size_t i = start; i <= end; ++i)
				putchar(str[i]);
		}
	}

	putchar('\n');
	return 0;
}
