//armstrong number
#include<stdio.h>
int main(){
  int n,original,remainder,sum=0;
printf("enter a number:");
scanf("%d",&n);
original=n;
while(n!=0)
{
remainder=n%10;
sum=sum+remainder*remainder*remainder;
n=n/10;}
if(sum==original)
  printf("the number is an armstrong number.");
else 
  printf("the number is not armstrong number.");
return 0;
}
