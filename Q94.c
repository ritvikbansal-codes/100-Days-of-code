#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[100] = "";
    char word[100];
    int i = 0, j, maxLen = 0;

    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        return 0;
    }

    sentence[strcspn(sentence, "\n")] = '\0';

    while (sentence[i] != '\0') {
        while (sentence[i] == ' ' && sentence[i] != '\0') {
            i++;
        }

        j = 0;
        while (sentence[i] != '\0' && sentence[i] != ' ') {
            word[j++] = sentence[i++];
        }
        word[j] = '\0';

        if (j > maxLen) {
            maxLen = j;
            strcpy(longest, word);
        }
    }

    if (maxLen > 0) {
        printf("%s\n", longest);
    }

    return 0;
}
