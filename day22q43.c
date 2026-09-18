// if a number is a strong number
#include<stdio.h>
int main(){
  int n,original, digit,i,fact,sum=0;
printf("enter a number:");
scanf("%d",&n);
original=n;
while(n!=0){
digit=n%10;
fact=1;
for(i=1;i<= digit;i++){
fact=fact*i;
}
sum=sum+fact;
n=n/10;}
if (sum==original)
  printf("the number is a strong number.");
else
  printf("the number is not a strong number.");
    return 0;
]
