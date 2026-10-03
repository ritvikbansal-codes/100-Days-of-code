#include <stdio.h>

int main() {
    int n, x, i, pos;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    pos = n;
    while (pos > 0 && arr[pos - 1] > x) {
        arr[pos] = arr[pos - 1];
        pos--;
    }

    arr[pos] = x;

    for (i = 0; i <= n; i++) {
        printf("%d", arr[i]);
        if (i != n) {
            printf(" ");
        }
    }

    return 0;
}
