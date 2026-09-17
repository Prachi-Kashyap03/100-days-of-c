//check prime number
#include<stdio.h>
int main(){
  int i ,n, flag=0;
printf("enter a number:");
scanf("%d",&n);
if(n<=1){
flag=1;}
else{
for(i=2;i<n;i++){
if(n%i==0){
flag=1;
break;
}
}
}
if(flag==0)
  printf("the number is prime.");
else
  printf("the number is not prime.");
return 0;
}
