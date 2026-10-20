/*Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the maximum element in each subarray of size k moving from left to right.
Print the maximum elements for each window separated by spaces as output.*/
#include<stdio.h>
int main(){
    int arr[100],n,k;
    int i,j,max;
    printf("enter the size of the array:");
    scanf("%d",&n);
    if(n<1||n>100){
        printf("invalid array size.\n");
        return 0;
    }
    printf("enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the value of k:");
    scanf("%d",&k);
    if(k<1||k>n){
        printf("invalid value of k.\n");
        return 0;
    }
    for(i=0;i<=n-k;i++){
        max=arr[i];
        for(j=i+1;j<i+k;j++){
            if(arr[j]>max){
                max=arr[j];
            }
        }
        printf("%d ",max);
    }
    printf("\n");
    return 0;
}
