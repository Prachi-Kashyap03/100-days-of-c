// searching an element in an array using linear search
#include <stdio.h>
int main()
{
    int arr[100], n, i, key, found = 0;
    printf("enter number of elements:");
    scanf("%d", &n);
    printf("enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter elements to search:");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("elements found at positive %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("element not found\n");
    }
    return 0;
}
