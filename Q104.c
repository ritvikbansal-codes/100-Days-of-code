#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2;
    int leftSum = 0;

    for (int x = 1; x <= n; x++)
    {
        leftSum += x;

        int rightSum = totalSum - leftSum + x;

        if (leftSum == rightSum)
        {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}
