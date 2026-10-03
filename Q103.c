#include <stdio.h>

int findPivotIndex(int nums[], int n)
{
    int totalSum = 0;
    int leftSum = 0;

    // Calculate total sum
    for (int i = 0; i < n; i++)
    {
        totalSum += nums[i];
    }

    // Find pivot index
    for (int i = 0; i < n; i++)
    {
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum)
        {
            return i;
        }

        leftSum += nums[i];
    }

    return -1;
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int pivot = findPivotIndex(nums, n);

    printf("%d\n", pivot);

    return 0;
}
