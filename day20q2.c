//1's complement of a binary number 
#include<stdio.h>
int main(){
  long long n,digit,result=0,place=1;
printf("enter a binary number:");
scanf("%lld",&n);
  while(n!=0){
  digit =n%10;
  if( digit ==0){
  digit=1;}
  else{
  digit=0;}
result=result+digit*place;
place =place*10;
n=n/10;}
printf("1's complement="%lld",result);
return 0;
}
