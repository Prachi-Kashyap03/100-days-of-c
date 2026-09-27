// insert an element in a sorted array at the appropriate position
#include <stdio.h>
int main()
{
    int arr[100], n, i, element, pos;
    printf("enter number of elements:");
    scanf("%d", &n);
    printf("enter elements in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter elements to insert:");
    scanf("%d", &element);
    /* find the appropriate position*/
    pos = 0;
    while (pos < n && arr[pos] < element)
    {
        pos++;
    }
    /* shift elements to right */
    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    /* insert element*/
    arr[pos] = element;
    n++;
    printf("array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
