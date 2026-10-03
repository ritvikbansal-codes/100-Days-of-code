#include <stdio.h>
#include <string.h>

int main(void)
{
	char text[1000];

	if (fgets(text, sizeof(text), stdin) == NULL) {
		return 0;
	}

	text[strcspn(text, "\r\n")] = '\0';

	size_t left = 0;
	size_t right = strlen(text);
	int palindrome = 1;

	while (left < right) {
		right--;
		if (text[left] != text[right]) {
			palindrome = 0;
			break;
		}
		left++;
	}

	puts(palindrome ? "Palindrome" : "Not palindrome");
	return 0;
}
