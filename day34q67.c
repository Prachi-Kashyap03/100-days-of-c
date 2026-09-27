//insert an element in an array at a given position
#include<stdio.h>
int main()
{
    int arr[100], n, i, element, position;
    scanf("%d", &n);
    printf("enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter element to insert:");
    scanf("%d", &element);
    printf("enter position:");
    scanf("%d", &position);
    /* shift elements to the right*/
    for (i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    /*insert element*/
    arr[position - 1] = element;
    n++;
    printf("array after insersection:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
