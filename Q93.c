#include <stdio.h>
#include <string.h>

int main(void)
{
	char first[1000];
	char second[1000];
	int frequency[256] = {0};

	if (fgets(first, sizeof(first), stdin) == NULL ||
		fgets(second, sizeof(second), stdin) == NULL) {
		return 0;
	}

	first[strcspn(first, "\r\n")] = '\0';
	second[strcspn(second, "\r\n")] = '\0';

	if (strlen(first) != strlen(second)) {
		printf("Not anagrams\n");
		return 0;
	}

	for (size_t i = 0; first[i] != '\0'; i++) {
		frequency[(unsigned char)first[i]]++;
		frequency[(unsigned char)second[i]]--;
	}

	for (int i = 0; i < 256; i++) {
		if (frequency[i] != 0) {
			printf("Not anagrams\n");
			return 0;
		}
	}

	printf("Anagrams\n");
	return 0;
}