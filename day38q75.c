//add two matrices
#include<stdio.h>
int main(){
int r,c,i,j;
printf("enter no. of rows:");
scanf("%d",&r);
printf("enter no. of columns:");
scanf("%d",&c);
int sum[r][c];
int a[r][c];
int b[r][c];
printf("enter elements of first matrix:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("enter elements of second matrix:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){   
        scanf("%d",&b[i][j]);
    }
}
//adding two matrices
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        sum[i][j]=a[i][j]+b[i][j];
    }
}
printf("sum of two matrices:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d ",sum[i][j]);
    }
   printf("\n");
}
return 0;
}
