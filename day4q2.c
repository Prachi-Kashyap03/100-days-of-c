//sum of first n natural no.s
#include<stdio.h>
int main()
{
  int n,i,sum=0;
printf("enter the value of n:");
scanf("%d",&n);
for(i=1;i<=n,i++){
sum=sum+i;
}
printf("the sum of first %d numbers is=%d\n",n,sum);
return 0;
}
