// min and max in an array
#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int max, min;
    printf("enter of elements:");
    scanf("%d", &n);
    printf("enter %d elements:\n", n);
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("maximum element =%d\n", max);
    printf("minimum element =%d\n", min);
    return 0;
}


  
