#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[1000];

	if (fgets(name, sizeof(name), stdin) == NULL) {
		return 0;
	}

	name[strcspn(name, "\r\n")] = '\0';

	size_t end = strlen(name);
	while (end > 0 && isspace((unsigned char)name[end - 1])) {
		name[--end] = '\0';
	}
	if (end == 0) {
		return 0;
	}

	size_t surname_start = end;
	while (surname_start > 0 &&
		   !isspace((unsigned char)name[surname_start - 1])) {
		--surname_start;
	}

	size_t position = 0;
	while (position < surname_start) {
		while (position < surname_start &&
			   isspace((unsigned char)name[position])) {
			++position;
		}
		if (position < surname_start) {
			printf("%c.", name[position]);
			while (position < surname_start &&
				   !isspace((unsigned char)name[position])) {
				++position;
			}
		}
	}

	if (surname_start > 0) {
		putchar(' ');
	}
	printf("%s\n", name + surname_start);
	return 0;
}
