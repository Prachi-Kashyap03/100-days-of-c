//find the sum of each row of a matrix and store it in an array
#include<stdio.h>
int main(){
    int a[100][100],sum[100];
    int r,c,i,j;
    printf("enter no. of rows:");
    scanf("%d",&r);
    printf("enter no. of column:");
    scanf("%d",&c);
    printf("enter matrix elements:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //find sum of each row
    for(i=0;i<r;i++){
        sum[i]=0;
        for(j=0;j<c;j++){
            sum[i]=sum[i]+a[i][j];
        }
    }
    //print row sums
    printf("sum of each rows:\n");
    for(i=0;i<r;i++){
        printf("row %d=%d\n",i+1,sum[i]);
        }
            return 0;
    }

