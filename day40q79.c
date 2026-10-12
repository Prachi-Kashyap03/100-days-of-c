//perform diagonal traversal of a matrix
#include<stdio.h>
int main(){
  int r,c,i,j,d;
printf("enter no. of rows and cols:");
scanf("%d %d",&r,&c);
int a[r][c];
printf("enter matrix elements:\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
}
}
printf("diagonal traversal:\n");
for(d=0;d<r+c-1;d++){
for(i=0;i<r;i++){
j=d-i;
if(j>=0&&j<c){
printf("%d ",a[i][j]);
}
}
printf("\n");
}
return 0;
}
