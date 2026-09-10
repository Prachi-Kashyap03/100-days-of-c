// calculate area and cirucumference of a circle 
#include<stdio.h>
int main()
{
  float r,area, circumference;
const float pi=3.1415;
printf("enter the radius of circle:");
scanf("%f", &r);
area= PI*r*r;
circumference= 2*pi*r;
printf("area of circle=%.2f\n",area);
printf("circumference of circle =%.2f\n",circumference);
return 0;}
