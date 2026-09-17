//binary representation
#include<stdio.h>
int main(){
  int n,binar[32],i=0;
printf("enter a number:");
scanf("%d",&n);
if(n==0){
printf("binary=0");
return 0;
}
while(n>0){
binary[i]=n%2;
n=n/2;
i++;
}
printf("binary=");
for(i=i-1;i>=0;i--){
printf("%d",binary[i]);
} 
return 0;
}
