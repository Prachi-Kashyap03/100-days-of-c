// find the sum of all elements in a matrix
#include<stdio.h>
int main(){
    int matrix[10][10];
    int rows,columns;
    int i,j,sum=0;
    printf("enter no. of rows:");
    scanf("%d",&rows);
    printf("enter no. of columns:");
    scanf("%d",&columns);
    printf("enter matrix elements:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            scanf("%d",&matrix[i][j]);
            sum= sum+matrix[i][j];
        }
    }
    printf("sum of all elements=%d",sum);
    return 0;
}
