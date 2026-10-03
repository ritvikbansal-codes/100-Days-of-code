#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[200];

    fgets(name, sizeof(name), stdin);

    int first = 1;
    int len = strlen(name);

    for (int i = 0; i < len; i++) {
        if (isalpha((unsigned char)name[i])) {
            if (first || !isalpha((unsigned char)name[i - 1])) {
                printf("%c.", toupper((unsigned char)name[i]));
                first = 0;
            }
        }
    }

    return 0;
}
