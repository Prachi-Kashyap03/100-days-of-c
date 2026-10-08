//check if the elements on the diagonal of a matrix are distinct
#include<stdio.h>
int main(){
    int a[10][10];
    int i,j,n,distinct=1;
   printf("enter the order of matrix:");
   scanf("%d",&n);
   printf("enter the elements of matrix:\n");
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
   } 
   //check diagonal elements
   for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i][j]==a[j][i]){
            distinct=0;
            break;
        }
    }
    if(distinct==0)
    break;
   }
   if(distinct==1)
   printf("diagonal elements are distinct.\n");
   else
   printf("diagonal elements are not distinct.\n");
   return 0;
}
