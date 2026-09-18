//find the sum of series 2/3+4/5+6/11+...n terms
#include<stdio.h>
int main(){
  int n,i;
float sum=0;
printf("%d",&n);
for(i=1;i<=n;i++){
sum=sum+(float)(2*i)/(4*i-1);}
printf("sum of series=%.2f",sum);
return 0;
}
