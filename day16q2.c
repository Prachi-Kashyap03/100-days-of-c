//palindrome
#include<stdio.h>
int main(){
  int n,original,reverse=0,remainder;
printf("enter a number:");
scanf("%d",&n);
original=n;
while(n!=0){
remainder=n%10;
reverse=reverse*10+remainder;
n=n/10;
}
if(original==reverse)
  printf("the number is palindrome.");
else
  printf("the number is not a palindrome.");
return 0;
}
