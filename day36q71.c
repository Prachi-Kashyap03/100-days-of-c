//read and print a matirix
#include<stdio.h>
int main(){
    int matrix[10][10];
    int rows,columns;
    int i,j;
    printf("enter no. of rows:");
    scanf("%d",&rows);
    printf("enter no. of columns");
    scanf("%d",&columns);
    printf("enter matrix elements:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("the matrix is:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
