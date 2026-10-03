#include <stdio.h>
#include <string.h>

int main() {
    char num[1000];
    int count[10] = {0};
    int i, maxCount = 0, result = 0;

    scanf("%s", num);

    for (i = 0; num[i] != '\0'; i++) {
        if (num[i] >= '0' && num[i] <= '9') {
            count[num[i] - '0']++;
        }
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            result = i;
        } else if (count[i] == maxCount && i < result) {
            result = i;
        }
    }

    printf("%d\n", result);
    return 0;
}
