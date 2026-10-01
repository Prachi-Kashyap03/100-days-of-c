//find the transpose of matrix
#include<stdio.h>
int main(){
    int rows,cols,i,j;
    printf("enter no. of rows:");
    scanf("%d",&rows);
    printf("enter no. of cols:");
    scanf("%d",&cols);
    int arr[rows][cols];
    int transpose[cols][rows];
    printf("enter no. of matrix:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //finding transpose
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            transpose[j][i]=arr[i][j];
        }
    }
    printf("transpose of matrix:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",transpose[j][i]);
        }
        printf("\n");
    }
    return 0;
}
