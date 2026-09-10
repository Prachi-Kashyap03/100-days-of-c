//simple and compound interest
#include<stdio.>
#include<math.h>
int main(){
float p,r,t,si,ci,amount;
printf("enter principal amount:");
scanf("%f",&p);
printf("enter rate of interest:");
scanf("%f",&r);
printf("enter time(in yrs):");
scanf("%f",&t);
si=(p*r*t)/100;
amount=p*pow((1+r/100),t);
ci=amount-p;
printf("simple interest =%.2f\n",si);
printf("compound interest =%.2f\n",ci);
return 0;
}
