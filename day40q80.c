//multiply two matrices
#include<stdio.h>
int main(){
  int r1,c1,r2,c2,i,j,k;
  printf("enter rows and columns of first matrices:");
  scanf("%d %d",&r1,&c1);
  printf("enter rows and columns of second matrix:");
  scanf("%d %d",&r2,&c2);
  if(c1!=r2){
    printf("matrix multiplication is not possible.\n");
    return 0;
  }
  int a[r1][c1],b[r2][c2],result[r1][c2];
  printf("enter elements of first matrix:\n");
  for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("enter elements of second matrix:\n");
  for(i=0;i<r2;i++){
    for(j=0;j<c2;j++){
      scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
      result[i][j]=0;
      for(k=0;k<c1;k++){
        result[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
  printf("Resultant matrix:\n");
  for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
      printf("%d ",result[i][j]);
    }
    printf("\n");
  }
  return 0;
}
