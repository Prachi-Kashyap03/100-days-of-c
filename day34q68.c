// delete an element from an array
#include <stdio.h>
int main()
{
    int arr[100], n, i, position;
    printf("enter number of elements:");
    scanf("%d", &n);
    printf("enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter position to delete:");
    scanf("%d", &position);
    /*shift elements to the left*/
    for(i = position - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("array after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
