//search in a sorted array using binary search
#include <stdio.h>
int main()
{
    int arr[100], n, i, key;
    int low, high, mid;
    int found = 0;
    printf("enter number of elements:");
    scanf("%d", &n);
    printf("enter elements in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter element to search:");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            printf("elements found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (found == 0)
    {
        printf("element not found\n");
    }
    return 0;
}
