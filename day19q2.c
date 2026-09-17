//sum of digit of a number
#include<stdio.h>
int main(){
  int n,digit, sum=0;
printf("enter the number:");
scanf("%d",&n);
while(n!=0){
digit =n%10;
sum= sum+ digit;
n=n/10;
}
printf("sum of digits =%d",sum);
return 0;
}
