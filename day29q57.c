// sum of array elements
#include <stdio.h>
int main()
{
    int arr[100], n, i, sum = 0;
    printf("enter no. of elements:");
    scanf("%d", &n);
    printf("enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("sum of array elements=%d", sum);
    return 0;
}
