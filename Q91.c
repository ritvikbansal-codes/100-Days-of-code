#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower((unsigned char)str[i]);

        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            putchar(str[i]);
        }
    }

    putchar('\n');
    return 0;
}
