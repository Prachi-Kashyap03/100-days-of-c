/*Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the kth smallest element in the array. 
Print the kth smallest element as output.*/
#include<stdio.h>
int main(){
    int n,k,i,j,temp;
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
printf("enter the value of k:");
scanf("%d",&k);
if(k<1||k>n){
    printf("invalid value of k");
    return 0;
}
for(i=0;i<n-1;i++){
    for(j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("the kth smallest element is %d\n",arr[k-1]);
return 0;
}
