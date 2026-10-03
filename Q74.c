#include <stdio.h>

int main(void) {
    int rows, columns;
    int matrix[100][100];

    if (scanf("%d %d", &rows, &columns) != 2 ||
        rows < 1 || rows > 100 || columns < 1 || columns > 100) {
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
        }
    }

    for (int j = 0; j < columns; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d", matrix[i][j]);
            if (i < rows - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
