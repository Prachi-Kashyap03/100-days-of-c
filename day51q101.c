/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
The elements in the sorted array might be repeated.
You need to print the first and last occurrence of the target and print the index of first and last occurrence. 
Print -1, -1 if the target is not present.
*/
#include<stdio.h>
int main(){
    int nums[100],n,target;
    int i,first=-1,last=-1;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter sorted array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    printf("enter target:");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        if(nums[i]==target){
            if(first==-1){
                first=i;
            }
            last=i;
        }
    }
    if(first==-1){
        printf("-1,-1\n");
    }
    else{
        printf("first occurence:%d at index %d\n",
        nums[first],first);
        printf("last occurence :%d at index %d\n",
        nums[last],last);
    }
    return 0;
}
