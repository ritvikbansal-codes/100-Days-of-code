#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("%s\n", str);
    return 0;
}
