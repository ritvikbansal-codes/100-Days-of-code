#include <stdio.h>

int findCeil(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    int answer = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x)
        {
            answer = mid;
            high = mid - 1;   // Search left for first occurrence
        }
        else
        {
            low = mid + 1;
        }
    }

    return answer;
}

int main()
{
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int index = findCeil(arr, n, x);

    printf("%d\n", index);

    return 0;
}