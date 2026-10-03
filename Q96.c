#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end)
{
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    char sentence[200];

    if (fgets(sentence, sizeof(sentence), stdin) == NULL)
        return 0;

    int len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n')
        sentence[len - 1] = '\0';

    char *start = sentence;

    for (char *i = sentence; ; i++)
    {
        if (*i == ' ' || *i == '\0')
        {
            if (start < i)
                reverseWord(start, i - 1);

            if (*i == '\0')
                break;

            start = i + 1;
        }
    }

    printf("%s\n", sentence);
    return 0;
}
