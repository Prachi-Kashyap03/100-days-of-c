/*Write a program to take an integer array nums of size n, and 
print the majority element. 
The majority element is the element that appears strictly more than ⌊n / 2⌋ times. 
Print -1 if no such element exists. 
Note: Majority Element is not necessarily the element that is present most number of times.
*/
#include<stdio.h>
int main(){
    int num[100],n,i,j;
    int count,majority=-1;
    printf("enter the size of the array:");
    scanf("%d",&n);
    if(n<1||n>100){
        printf("-1\n");
        return 0;
    }
    printf("enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(num[i]==num[j]){
                count++;
            }
        }
        if(count>n/2){
            majority=num[i];
            break;
        }
    }
    printf("majority element=%d\n",majority);
    return 0;
}
