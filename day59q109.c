/*Write a program to take an integer array arr and an integer k as inputs. 
Print the maximum sum of all the subarrays of size k.*/
#include<stdio.h>
int main(){
    int arr[100],n,k;
    int i,sum=0,maxsum;
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
    printf("enter the subarray size k:");
    scanf("%d",&k);
    if(k<1||k>n){
        printf("invalid value of k.\n");
        return 0;
    }
    for(i=0;i<k;i++){
        sum=sum+arr[i];
    }
    maxsum=sum;
    for(i=k;i<n;i++){
        sum=sum+arr[i]-arr[i-k];
        if(sum>maxsum){
            maxsum=sum;
        }
    }
    printf("maximum sum of subarray of size %d= %d\n",k,maxsum);
    return 0;
}
