#include <stdio.h>

int main() {
    int rows, cols, i, j, value, sum = 0;

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &value);
            sum += value;
        }
    }

    printf("%d\n", sum);
    return 0;
}
