/*Write a Program to take an array of integers as input, calculate the pivot index of this array. 
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.  
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left.
This also applies to the right edge of the array. 
Print the leftmost pivot index. 
If no such index exists, print -1*/
#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int totalsum = 0, leftsum = 0, pivot = -1;
    printf("enter the size of the array:");
    scanf("%d", &n);
    if(n<1||n>100){
        printf("invalid array size.\n");
        return 0;
    }
    printf("enter array element:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        totalsum += arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (leftsum == totalsum - leftsum - arr[i])
        {
            pivot = i;
            break;
        }
        leftsum += arr[i];
    }
    printf("pivot index=%d\n", pivot);
    return 0;
}
