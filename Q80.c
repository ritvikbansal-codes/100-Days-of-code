#include <stdio.h>
#include <stdlib.h>

int main() {
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);

    int *a = (int *)malloc(r1 * c1 * sizeof(int));
    for (int i = 0; i < r1 * c1; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Invalid dimensions for multiplication\n");
        free(a);
        return 0;
    }

    int *b = (int *)malloc(r2 * c2 * sizeof(int));
    for (int i = 0; i < r2 * c2; i++) {
        scanf("%d", &b[i]);
    }

    int *result = (int *)malloc(r1 * c2 * sizeof(int));

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i * c2 + j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i * c2 + j] += a[i * c1 + k] * b[k * c2 + j];
            }
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d", result[i * c2 + j]);
            if (j != c2 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    free(a);
    free(b);
    free(result);
    return 0;
}
