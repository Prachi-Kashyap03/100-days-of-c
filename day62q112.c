/*Write a program to take an integer array arr as input. 
The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. 
Print the maximum sum as output. 
If all elements are negative, print the largest (least negative) element.*/
#include<stdio.h>
int main(){
    int n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    if(n<=0){
        printf("invalid array size");
        return 0;
    }
    int arr[n];
    printf("enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxendinghere=arr[0];
    int maxsofar=arr[0];
    for(i=1;i<n;i++){
        if(maxendinghere+arr[i]>arr[i]){
            maxendinghere=maxendinghere+arr[i];
        }
        else{
            maxendinghere=arr[i];
        }
        if(maxendinghere>maxsofar){
            maxsofar=maxendinghere;
        }
    }
    printf("maximum subarray sum=%d\n",maxsofar);
    return 0;
}
