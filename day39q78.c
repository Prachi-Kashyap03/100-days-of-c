// find the sum of main daigonal elements for a square matrix
#include<stdio.h>
int main(){
  int i,j,n,sum=0;
printf("enter the order of the square matrix:");
scanf("%d",&n);
int a[n][n];
printf("enter the matrix elements:\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++){
sum=sum+a[i][i];
}
printf("sum of main diagonal elements=%d\n",sum);
return 0;
}
