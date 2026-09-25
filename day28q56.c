// print elements of a one-dimensional array
#include <stdio.h>
int main()
{
    int a[100], n, i;
    printf("enter no. of elements:");
    scanf("%d", &n);
    printf("enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array elements are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
