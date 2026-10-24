/*Write a program to take two sorted arrays of size m and n as input. 
Merge both the arrays such that the merged array is also sorted. 
Print the merged array.*/
#include<stdio.h>
int main(){
    int m,n,i,j,k;
    printf("enter the size of first array:");
    scanf("%d",&m);
    printf("enter the size of second array:");
    scanf("%d",&n);
    int a[m],b[n],c[m+n];
    printf("enter the elements of first sorted array:");
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the elements of second sorted array:");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    i=0;j=0;k=0;
    while(i<m&&j<n){
        if(a[i]<=b[j]){
            c[k]=a[i];
            i++;
        }
        else{
            c[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<m){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n){
        c[k]=b[j];
        j++;
        k++;
    }
    printf("merged sorted array:");
    for(i=0;i<m+n;i++){
        printf("%d ",c[i]);
    }
    printf("\n");
    return 0;
}
