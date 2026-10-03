#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2 || len1 == 0)
        return 0;

    char temp[1000];
    strcpy(temp, s2);
    strcat(temp, s2);

    return strstr(temp, s1) != NULL;
}

int main() {
    char s1[1000], s2[1000];

    scanf("%s", s1);
    scanf("%s", s2);

    if (isRotation(s1, s2)) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}
