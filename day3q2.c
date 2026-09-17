// swapping two numbers using third variable
#include<stdio.h>
int main(){
  int a,b,w;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
printf("before swapping:a=%d,b=%d/n"a,b);
w=a;
a=b;
b=w;
printf("after swapping:a=%d,b=%d/n",a,b);
return 0;
}
