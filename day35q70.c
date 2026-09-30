//rotate an array to the right by k position
#include<stdio.h>
int main()
{
    int arr[100], n, i, k, j, temp;
    printf("enter no. of elements:");
    scanf("%d", &n);
    printf("enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter k:");
    scanf("%d", &k);
    k = k % n;
    for (i = 0; i < k; i++)
    {
        temp = arr[n - 1];
        for (j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
    printf("array after right rotation:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
